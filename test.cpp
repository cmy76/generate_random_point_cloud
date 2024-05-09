#include<random_pointcloud.h>

int main(){
    pcl::PointCloud<pcl::PointXYZ> cloud;
    generate_random_pointcloud(cloud, 0, 1000, 1024, 1024, 1024);
}