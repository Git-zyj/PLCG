/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_2] [i_2] &= arr_6 [i_0] [i_2] [i_2] [i_2];
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = ((-(((-9223372036854775807 - 1) ? (arr_3 [i_0 + 1] [i_1 + 4]) : -6389587390147226725))));
                                arr_15 [i_0] [i_2] [i_0] [i_3] [i_4 - 1] = 9223372036854775807;
                                var_21 = (min(var_21, ((min((37318 - -0), (arr_10 [i_0 + 2] [i_1] [i_0] [i_3] [i_3] [i_2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_22 = ((((min((((arr_19 [i_5 - 1] [i_6] [i_5 - 3]) * 0)), (arr_19 [i_5] [i_6] [i_5 - 1])))) ? -0 : (37318 - 32704)));
                var_23 = (((~(arr_17 [i_5]))));
                var_24 = ((1 ? (min(1, (arr_18 [i_6] [i_5 + 1]))) : (0 % 1)));
                var_25 = (min(var_25, 4096));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_26 = (max(var_26, 18446744073709551613));
                            var_27 *= ((!(((566647702 ? ((((arr_24 [i_5] [i_5] [i_5] [i_5]) / (arr_18 [i_7] [i_5])))) : ((13384833425578668940 ? 637114390 : 1)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
