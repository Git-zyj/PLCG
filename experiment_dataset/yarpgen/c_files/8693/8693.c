/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_7));
    var_14 = (((((((-127 - 1) + 1)))) ? 127 : (((~114) ? var_4 : -115))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [20] [i_2] [i_0] = (arr_9 [i_0] [i_1] [i_2] [i_0] [i_4] [i_2] [i_0]);
                                var_15 = (((((((-(arr_1 [10])))) ? var_2 : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? var_1 : 9223372036854775807);
                                var_16 = (!9223372036854775807);
                            }
                        }
                    }
                }
                var_17 &= min((arr_11 [i_0] [i_0] [i_1] [i_0] [i_0]), (((-(-95 + 94)))));

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_18 -= ((-(max(18446744073709551615, 5571934274348997980))));
                    arr_15 [0] = (min((min((!114), (min(89, 4294967295)))), (arr_11 [i_0] [i_0] [i_1] [i_1] [i_5])));
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_19 = ((((max(127, 5571934274348997964))) ? ((((arr_6 [i_0] [i_0] [i_0] [i_1] [i_0]) || (arr_6 [i_0] [i_0] [i_0] [i_1] [i_0])))) : (arr_6 [12] [i_1] [i_0] [i_6] [i_1])));
                    var_20 = (min(var_20, -115));
                    var_21 -= (min((max(12874809799360553617, -108)), ((((arr_3 [i_0]) && var_8)))));
                    arr_20 [i_0] [i_1] [i_1] [i_1] = ((-1338338934 ^ (max(10, -114))));
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_22 = arr_10 [i_0] [i_0];
                    var_23 |= (max((min(99, (arr_16 [i_0] [i_0] [i_7] [i_7]))), 8));
                }
            }
        }
    }
    #pragma endscop
}
