/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_8 * ((var_10 ? (!1) : 8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        var_15 = (arr_1 [i_2] [i_2]);
                        var_16 = (~0);
                        var_17 = ((25 ? (23 > -2383256161620406137) : ((min(((!(arr_1 [i_1] [i_1]))), (!var_9))))));
                        var_18 *= ((((~(arr_3 [i_0] [i_1] [1])))));
                        arr_10 [i_2] [i_3] [i_2] [6] [i_0] [i_2] = (((((-((25 ? 1 : var_4))))) ? ((~(var_13 + 6))) : (((((22 ? (arr_4 [i_0] [i_0] [i_2]) : 122))) ? ((var_0 ? 2383256161620406158 : (arr_3 [i_0] [i_1] [i_2]))) : (~0)))));
                    }
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        arr_13 [i_1] [13] [i_2] = (min(-1, 1));
                        var_19 = (arr_3 [i_0] [i_1] [i_2]);
                    }
                    arr_14 [i_0] [i_2] [i_2] [i_0] = var_7;
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_20 = 1;
                                var_21 += ((var_9 ? ((((arr_16 [i_6] [i_5 + 2] [i_1] [i_1] [i_1] [i_0]) > var_2))) : (((arr_16 [1] [i_1] [i_2] [i_1] [i_5 - 1] [i_6 + 1]) % ((-(arr_17 [i_0] [i_1] [i_2] [i_2] [i_5 - 4] [i_1])))))));
                                var_22 = (-127 - 1);
                            }
                        }
                    }
                    var_23 -= ((min((arr_1 [i_0] [i_2]), ((~(arr_1 [i_0] [16]))))));
                }
            }
        }
    }
    #pragma endscop
}
