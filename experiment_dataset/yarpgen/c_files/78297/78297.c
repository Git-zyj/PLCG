/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (arr_2 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, var_3));
                            arr_11 [7] [i_0] [i_2] [7] = ((!(((arr_2 [i_0] [i_3]) != (-2147483647 - 1)))));
                            var_19 = (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] [i_2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((min((((arr_9 [i_1] [i_4] [i_5]) - ((((arr_14 [i_5] [i_4] [6] [i_0]) + (arr_10 [i_5])))))), (arr_3 [17] [i_1] [i_4]))))));
                            var_21 = var_9;
                            var_22 ^= (((-2147483647 - 1) / -1307933444));
                        }
                    }
                }
                var_23 = ((!((((18446744073709551615 * 0) + (arr_1 [i_0]))))));
                /* LoopNest 3 */
                for (int i_6 = 4; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_24 = (min((((((min(40620, (arr_25 [i_7] [i_7] [i_7] [i_7 - 1] [i_8] [i_7] [i_1])))) ? 205 : 2))), (max((((arr_10 [i_1]) ? 18446744073709551615 : -1351611670)), (~var_0)))));
                                var_25 = ((~((-((var_3 ? (arr_17 [i_0] [i_0] [i_6 - 1] [i_7] [i_8]) : (arr_17 [i_0] [i_0] [i_6] [i_0] [i_8])))))));
                                arr_26 [i_8] [i_7] [i_7] [20] = (--2996596781610319065);
                                arr_27 [i_1] [i_7] [i_7] [i_1] = ((20 ? 0 : ((18446744073709551615 - ((min(-259772336, 53005)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = 1;
    var_27 = (min(24, 8));
    #pragma endscop
}
