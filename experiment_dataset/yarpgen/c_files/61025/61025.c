/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_16, var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = (arr_3 [i_1 - 1]);
                    var_22 = ((arr_9 [i_0] [i_1] [16] [i_2]) < (((min((arr_3 [i_1 - 1]), (arr_3 [i_1 + 1]))))));
                    var_23 = ((min((arr_2 [i_0] [18]), ((~(arr_7 [i_2] [i_2] [19] [1]))))));
                    var_24 = (((((-((-(arr_2 [19] [i_1])))))) ? (arr_8 [i_0]) : (1 / 65535)));
                }
            }
        }
    }
    var_25 = ((var_12 && (-var_18 + var_1)));
    #pragma endscop
}
