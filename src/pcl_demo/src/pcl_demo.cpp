#include <ros/ros.h>
// #include <astra_camera/
#include <pcl_conversions/pcl_conversions.h>
#include <sensor_msgs/PointCloud2.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>

typedef sensor_msgs::PointCloud2 PointCloud;

void convert(
    
){
    
}

void process(const sensor_msgs::Image::ConstPtr &tempimage){
    
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL,"");
    ros::init(argc,argv,"pcl_demo");
    ros::NodeHandle nh;

    

    ros::Subscriber sub = nh.subscribe<sensor_msgs::Image>("/camera/depth/image",10,process);

    ros::spin();

    
    return 0;
}
