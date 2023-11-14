float problemSolution2(float i, float j, float k) {
    float result;
    result=i;
    result= result<=j ? j:result;
    result=result<=k ? k:result;



    return result;
}