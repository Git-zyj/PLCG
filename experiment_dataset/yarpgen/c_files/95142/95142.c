/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 + 2] [i_0 + 1] [i_1] [i_1] [i_0 + 1] [i_4] [i_4] = ((-((min((arr_3 [17] [i_1]), 241)))));
                                arr_14 [5] [i_1] [2] [14] [i_4] = (((max((!var_15), ((22134 ? 14 : 22129)))) | ((((((var_11 ? 16000935059200459961 : var_1))) && ((max((arr_8 [i_1] [i_1 - 1] [i_2]), (arr_2 [i_1])))))))));
                                var_18 += ((((min(2901092257, (602038750 * 22134)))) && (((-((~(arr_2 [9]))))))));
                                arr_15 [i_4] [i_1] [1] [1] [i_2] &= 4503599627362304;
                            }
                        }
                    }
                    arr_16 [i_2] [i_1] [i_2] [i_2] = var_2;
                    var_19 = (5821637629172498910 + -602038750);
                }
            }
        }
    }
    var_20 += ((var_10 / ((((max(1920, 60))) << (var_6 - 3021471896213979273)))));
    var_21 = (min(var_8, (min(var_16, 18446744073709551614))));
    #pragma endscop
}
