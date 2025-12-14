/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (((-32767 - 1) & 32767));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_0] = (i_0 % 2 == 0) ? ((((((~((35049 >> (((arr_3 [i_0] [i_1]) - 43))))))) || ((min(((max(0, (arr_0 [i_0] [i_0])))), (arr_2 [i_0] [i_2]))))))) : ((((((~((35049 >> (((((arr_3 [i_0] [i_1]) - 43)) + 90))))))) || ((min(((max(0, (arr_0 [i_0] [i_0])))), (arr_2 [i_0] [i_2])))))));
                    var_13 = -122;
                }
            }
        }
    }
    #pragma endscop
}
