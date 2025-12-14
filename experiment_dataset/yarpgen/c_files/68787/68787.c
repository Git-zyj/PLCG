/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((-((var_2 ? 1835553332 : var_5)))), var_2));
    var_20 = 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = ((((((arr_10 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 2] [6] [i_0 - 2]) ? 3744989591 : (arr_10 [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_0 + 2])))) ? ((99 ? (arr_8 [i_0 - 2]) : ((549977716 ? (arr_8 [5]) : 3744989571)))) : (arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1])));
                                arr_13 [i_4] = ((((max((arr_1 [i_0 + 2]), (arr_4 [i_0 - 2] [i_0 + 2] [i_4 - 3])))) ? ((((arr_4 [9] [i_0 + 2] [i_4 - 3]) + (arr_1 [i_0])))) : (max(549977716, -2147483639))));
                                arr_14 [i_4 + 2] [i_4] [i_4] [i_4] [i_1] [i_0 + 1] = (!58);
                            }
                        }
                    }
                }
                var_22 = ((-(((-3217394500748252295 + 9223372036854775807) << (((arr_11 [i_1] [i_0 + 1] [i_0] [i_0 + 1] [12]) - 3446854884))))));
                arr_15 [i_0 + 1] = (((((((((arr_1 [i_0 - 2]) ? 3 : (arr_8 [i_1])))) ? (((1 || (arr_9 [i_1] [i_1] [i_0] [i_0] [i_0])))) : var_10))) ? ((9 ? 1 : 549977716)) : -45));
                arr_16 [i_0] |= (~1);
            }
        }
    }
    var_23 = ((((min((18446744073709551615 || var_17), var_7))) ? (!var_2) : var_14));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 14;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_24 = (min((((((24 ? 0 : 4))) ? (arr_23 [i_8] [i_7 + 2] [1] [i_8 - 1]) : (((1 ? 255 : 3744989579))))), (((!(arr_17 [i_5 + 1]))))));
                                arr_30 [7] [i_6] [i_7 - 1] [i_8 + 1] [1] [i_8] [i_9] = ((((max((arr_23 [i_5 + 1] [i_6] [i_7 + 1] [i_8 - 1]), (arr_19 [i_5 + 1] [i_5 + 1] [i_7 - 1])))) ? (((arr_23 [i_5 + 1] [i_7] [i_7 - 1] [i_8 - 2]) ? (arr_19 [i_5 + 1] [11] [i_7 - 3]) : (arr_23 [i_5 + 1] [4] [i_7 + 2] [i_8 - 1]))) : ((((arr_23 [i_5 + 1] [i_6] [i_7 - 2] [i_8 + 1]) ? (arr_19 [i_5 + 1] [i_6] [i_7 + 2]) : (arr_19 [i_5 + 1] [i_6] [i_7 - 2]))))));
                            }
                        }
                    }
                    var_25 = ((94 << (3744989580 - 3744989566)));
                }
            }
        }
    }
    #pragma endscop
}
