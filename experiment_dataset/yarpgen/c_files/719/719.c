/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((var_3 ? var_10 : (!-8578)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_21 = (max(var_21, (((((!((min(59592, 32765))))) ? var_13 : (min(11556, ((1 ? 11541 : 32759)))))))));
                    var_22 -= (min(((~((max(-39, (arr_1 [i_1])))))), 2));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_23 = ((((((arr_11 [i_0 - 2] [i_3] [i_0] [i_0 + 3] [i_0 - 1] [i_1 + 2] [i_3 + 1]) ? (arr_9 [i_3]) : (max((arr_3 [i_0] [i_1] [i_1 + 1]), var_6))))) ? (arr_12 [i_0 - 1] [i_2] [i_3] [i_4]) : ((((min(32762, (arr_6 [i_0] [i_1] [i_2])))) ? (arr_0 [i_0] [i_3]) : ((max(6067, (arr_12 [i_3 - 1] [i_3] [i_3] [i_0 - 1]))))))));
                                var_24 -= var_17;
                            }
                        }
                    }
                    var_25 = (max(var_25, var_15));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_5] [i_1] [i_5] [i_1 + 2] |= (((-(arr_5 [i_1 - 1] [i_5]))));
                    var_26 |= var_17;
                    var_27 = (((max((10896 * var_3), ((var_18 ? (arr_12 [i_0 - 2] [i_0 - 2] [10] [i_5]) : 33381))))) ? (arr_11 [i_0 + 1] [10] [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0] [i_0]) : (arr_1 [i_5]));
                    var_28 ^= ((~(min(15015, 10896))));
                }
                var_29 |= (((max(27793, ((-(arr_3 [i_1 + 2] [i_1 + 2] [i_1]))))) >> (((((((var_14 ? var_0 : 18446744073709551612))) ? 11551 : 9)) - 11548))));
            }
        }
    }
    var_30 = (min(var_30, (max(var_0, var_6))));
    var_31 = (min(var_31, ((((var_10 / var_4) ? 30305 : (max((var_7 * var_5), var_11)))))));
    #pragma endscop
}
