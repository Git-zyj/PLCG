/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = max(var_1, (min(((var_8 | (arr_2 [i_1] [i_1]))), 41857)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_11 = (min((var_4 || var_3), (((arr_2 [i_1] [i_2]) ? (arr_0 [i_0] [i_0]) : (arr_5 [i_0] [i_1] [i_2])))));
                            var_12 = var_7;
                            var_13 = (min(var_13, ((max(((-(arr_8 [i_3] [i_2] [i_0] [i_1] [i_0]))), var_7)))));
                        }
                    }
                }
                arr_10 [i_0] [i_0] &= (max((((((arr_5 [i_0] [i_0] [i_0]) == 9223372036854775807)) ? ((min(0, var_5))) : (~41852))), var_9));
                var_14 *= ((var_3 ? 112 : 1));
                arr_11 [i_1] = min(((var_4 ? ((((-2147483647 - 1) || (arr_6 [i_1] [i_0] [i_0])))) : ((41857 ? 11 : var_9)))), (((((max(233, 14218))) && ((((-127 - 1) ? 3604114612391921564 : var_10)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_15 = (min((min(-4042791781653838873, (((~(arr_3 [i_5] [i_6])))))), ((((var_3 ? var_6 : (arr_15 [i_6] [i_6] [7])))))));
                    var_16 = var_5;
                    var_17 -= (max(var_5, 12956));
                }
            }
        }
    }
    var_18 = ((-(min((min(-1793446876, var_0)), var_6))));
    #pragma endscop
}
