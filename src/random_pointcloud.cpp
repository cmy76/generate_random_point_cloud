#include "../include/random_pointcloud.h"

template<typename PointT> inline int 
generate_random_pointcloud(pcl::PointCloud<PointT> &cloud, int type, int num, int a, int b, int c){
    for(int i=0;i<num;i++){
        pcl::PointXYZ pt;
        if(type == CUBOID){
            pt.x = a * rand() / (RAND_MAX + 1.0f);
            pt.y = b * rand() / (RAND_MAX + 1.0f);
            pt.z = c * rand() / (RAND_MAX + 1.0f);
        }
        else if(type == SPHERE){
            float u = rand() / (RAND_MAX + 1.0f);
            float v = rand() / (RAND_MAX + 1.0f);
            float w = rand() / (RAND_MAX + 1.0f);
            float x = a * std::cos(2 * PI * u) * std::sqrt(v);
            float y = b * std::sin(2 * PI * u) * std::sqrt(v);
            float z = c * std::sqrt(1 - v) * w;
            pt.x = x;
            pt.x = y;
            pt.x = z;
        }else if(type == CYLINDER){
            float theta = 2 * PI * rand() / (RAND_MAX + 1.0f);
            float r = rand() / (RAND_MAX + 1.0f);
            float z = c * rand() / (RAND_MAX + 1.0f);

            float x = a * std::cos(theta) * std::sqrt(r);
            float y = b * std::sin(theta) * std::sqrt(r);

            pt.x = x;
            pt.y = y;
            pt.z = z;
            cloud.push_back(pt);
        }
    }
}