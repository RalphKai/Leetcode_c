int maxArea(int* height, int heightSize){
    int index = 0, rIndex = heightSize - 1;
    int maxVol = 0;
    while (index < rIndex){
        int wall = height[index] > height[rIndex]?height[rIndex]:height[index];
        int vol = wall * (rIndex - index);
        maxVol = maxVol >= vol ? maxVol:vol;
        if (height[index] >= height[rIndex]){
            rIndex--;
        }
        else{
            index++;
        }
        
    }
    return maxVol;
}