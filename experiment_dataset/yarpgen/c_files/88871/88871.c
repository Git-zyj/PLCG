/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((((max(var_8, (arr_0 [i_0 + 2])))) ? ((((arr_2 [i_0 + 1]) ^ 1411597905))) : (82 - 84)));
                var_11 = (min(var_11, ((max(82, (arr_1 [1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_12 = ((-((~(max(2564749755, 3836678138353403133))))));
                            var_13 = ((((((((arr_0 [i_3]) ? 1730217540 : (arr_8 [i_0] [i_1] [i_0] [i_3])))) || ((max(296464338, (arr_9 [i_2] [i_3])))))) ? ((126100789566373888 + ((max((arr_2 [12]), 80))))) : ((((arr_8 [i_0] [i_1] [i_2] [23]) ? (((-296464354 + 2147483647) << (7486461912938111610 - 7486461912938111610))) : (min(var_3, (arr_10 [i_0 + 2] [i_0] [10] [10]))))))));
                        }
                    }
                }
                var_14 = (max((((-(((arr_3 [i_0]) ? var_8 : 780285926))))), (((-127 - 1) ? 1326012451 : 7565320191141094716))));
                var_15 += (((arr_2 [i_0]) > (((arr_1 [8]) | (~1)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 18;i_6 += 1)
            {
                {
                    arr_20 [i_4] = (max((arr_1 [i_4]), (((var_6 && ((min(1730217541, (arr_18 [i_4 - 3] [i_5] [i_4 - 3])))))))));
                    arr_21 [i_5] [i_4] = ((~(min((((1 ? (arr_10 [i_4] [i_4] [3] [3]) : (arr_16 [i_6 - 1] [i_4])))), (max(87168290037921128, 4064))))));
                }
            }
        }
    }
    var_16 = (max(13818147870481349453, -2567383199793252166));
    var_17 = (((~((var_8 ? var_2 : var_0)))));
    #pragma endscop
}
