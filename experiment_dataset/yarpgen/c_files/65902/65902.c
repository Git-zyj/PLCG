/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((22624 ? var_12 : (var_4 & -1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_9 [i_0] [4] [i_0] = ((((min(3, 16))) ? ((2391503893 ? 3762894635 : 255)) : (((var_5 ? (arr_0 [i_0]) : (arr_5 [i_0]))))));
                    var_14 = (max(var_14, 16));
                }
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 18;i_4 += 1)
                    {
                        var_15 = (((var_0 <= 13886830093335798094) ? (arr_14 [i_0]) : (((arr_7 [i_0] [12] [i_3 - 1] [i_3 - 1]) ? (arr_4 [i_0] [i_1]) : (arr_8 [i_3 - 1] [i_3] [14] [i_3])))));
                        var_16 = (min(var_16, (arr_7 [i_0] [i_0] [i_0] [i_4 - 4])));
                        var_17 = (max(var_17, ((((arr_8 [i_3] [i_4 - 2] [i_4 + 1] [i_4]) ? (arr_8 [i_1] [i_3] [i_4 - 2] [15]) : 255)))));
                        arr_15 [14] [i_3] [6] [i_3] [i_0] |= (arr_3 [i_3]);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_20 [11] [i_0] [i_1] [i_1] [i_0] [i_1] = var_7;
                                arr_21 [i_0] [i_0] [15] [0] [i_0] [i_0] = ((max(1903463402, (arr_7 [4] [i_6 + 1] [i_6] [i_1]))));
                                var_18 ^= 1903463402;
                                var_19 = ((((arr_0 [i_0]) ? var_9 : (~1903463387))));
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] = ((14813220849158216431 ? 3246785062 : 0));
                    var_20 = (max(var_20, var_8));
                }
                arr_23 [i_0] [i_0] = (min((((-108 ? 108 : 4294967295))), (max((((arr_14 [i_0]) ? 2199023251456 : 2391503894)), ((max(4294967295, 2391503894)))))));
            }
        }
    }
    #pragma endscop
}
