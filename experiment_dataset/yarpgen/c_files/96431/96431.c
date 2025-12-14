/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = ((!(arr_6 [i_2 - 1] [i_2 - 3] [i_2 - 1] [i_2 + 3] [i_4] [i_4])));
                                arr_10 [6] [i_1] [i_2] [6] [i_4] = (((min(var_6, -214)) - (((((-(arr_8 [i_4] [i_1] [i_2 - 1] [i_1] [i_0] [i_0])))) ? 840078936 : (((min(var_5, 0))))))));
                                var_14 = (max(var_14, (((var_11 ? (((!((min(3454888359, (arr_6 [i_0] [3] [i_2] [11] [i_4] [11]))))))) : ((((max(var_6, var_0))) ? 15 : (((((-32767 - 1) + 2147483647)) << (var_12 - 20416))))))))));
                                var_15 = 840078935;
                            }
                        }
                    }
                    arr_11 [i_0] [i_0] [i_0] = ((arr_0 [i_0]) ? (((arr_0 [i_0]) - (arr_0 [i_0]))) : (((arr_0 [i_0]) + (arr_0 [i_0]))));
                    var_16 ^= var_10;
                    var_17 = (((((-(arr_2 [i_2 + 2] [i_2 - 1])))) ? ((min(var_0, var_10))) : (((arr_9 [6] [i_2 - 1] [i_2] [i_2]) ? (arr_8 [i_2] [3] [i_2 - 3] [i_2 + 2] [i_2 + 2] [3]) : (arr_8 [i_2] [11] [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2])))));
                    arr_12 [i_2] = (!3454888359);
                }
            }
        }
    }
    var_18 = (max(var_18, var_7));
    var_19 = 256;
    var_20 = 32767;
    #pragma endscop
}
