/* Bruce method
   haven't passed yet! too slow.
*/

int maxArea(int* height, int heightSize){
    int index, rIndex;
    int maxVol = 0;
    for (index=0; index<heightSize-1; index++){
        int dif;
        //int maxDif = 0;
        for (rIndex = heightSize-1; rIndex>index; rIndex--){
            dif = height[index] - height[rIndex];
            //maxDif = maxDif < diff? diff:maxDif;
            int vol;
            vol = dif>=0?height[rIndex] * (rIndex - index):height[index] * (rIndex - index);
            maxVol = maxVol<vol? vol:maxVol;
        }
    }
    return maxVol;
}
