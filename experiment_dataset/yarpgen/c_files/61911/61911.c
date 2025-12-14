/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((-(max(-593409225, 3224750496))))));
                var_11 = (min(var_11, 639431916));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_1] [1] [i_1] &= 12115;
                    var_12 = ((((-(arr_6 [i_0] [i_0] [i_0] [i_0]))) >> (208 & var_8)));
                }
                arr_10 [i_1] [i_1] [i_0] = var_2;
            }
        }
    }
    var_13 = -var_6;
    #pragma endscop
}
