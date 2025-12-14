/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (max(((max((((~(arr_0 [i_0])))), ((var_2 >> (3240252778 - 3240252771)))))), (max((max((arr_0 [i_0]), (arr_1 [i_0] [i_1]))), (((var_0 > (arr_0 [i_0]))))))));
                var_13 = var_5;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_3] = arr_10 [i_3];
                var_14 = (arr_10 [i_3]);
                arr_12 [20] [i_3] [i_3] = (arr_5 [20]);
            }
        }
    }
    var_15 = -var_12;
    var_16 = var_2;
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_17 = (min(var_17, var_5));
                    var_18 *= ((-430174175 - (((((arr_9 [i_4] [i_5]) - 430174175)) / ((430174166 ^ (arr_17 [i_4])))))));
                }
            }
        }
    }
    #pragma endscop
}
