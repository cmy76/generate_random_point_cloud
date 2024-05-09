#ifndef RANDOM_POINTCLOUD_H
#define RANDOM_POINTCLOUD_H

#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/point_cloud.h>

#define PI 3.1415

#define CUBOID   0
#define SPHERE   1
#define CYLINDER 2

template<typename PointT> inline int 
generate_random_pointcloud(pcl::PointCloud<PointT> &cloud, int type, int num, int a, int b, int c);
#endif