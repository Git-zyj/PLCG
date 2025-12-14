/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_17 = (max((((arr_4 [i_2 - 1]) | (arr_4 [i_2 - 1]))), var_0));
                    var_18 = max((((var_11 || (arr_1 [i_0] [i_2])))), (((arr_1 [i_0] [i_2 - 1]) ? 8 : (arr_1 [i_1] [i_1]))));
                    var_19 ^= ((+(((min((arr_7 [i_0] [i_0] [i_0]), (-2147483647 - 1))) ^ (((arr_8 [i_0] [i_1] [i_0] [i_2]) + var_6))))));
                    var_20 = var_8;
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_3] = (max((min(var_16, 33423360)), (2147483647 | var_6)));
                    var_21 = (((min(var_11, 2147483647)) == -var_14));
                }
                arr_13 [2] = (arr_4 [0]);
            }
        }
    }
    var_22 = var_1;
    #pragma endscop
}
