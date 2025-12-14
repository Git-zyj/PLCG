/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (~6566);
    var_15 = (max(var_15, var_9));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 1] [i_1] [i_1] [9] = (var_6 ? (arr_1 [i_0 + 1] [i_2]) : (arr_1 [i_0 - 1] [i_2]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = ((-(arr_6 [i_0 - 1] [i_2 + 1] [i_4] [i_1])));
                                arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] |= 9223372036854775807;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                var_17 = (min(var_17, ((((((arr_15 [i_6]) && (arr_15 [i_6]))))))));
                var_18 = (~var_0);
                var_19 = (((((((~(arr_14 [19])))) + 9223372036854775807)) << (((!(arr_15 [i_5]))))));
                arr_18 [i_5 - 1] [i_5] [i_6] = (~((-9223372036854775807 | (((~(arr_14 [i_6])))))));
                arr_19 [i_5] = (((((arr_16 [i_5 + 1]) + 9223372036854775807)) << (((((max(-8055590982736699704, var_3)) << (((max(-1633087080, var_3)) - 847944651)))) - 28452301970604032))));
            }
        }
    }
    #pragma endscop
}
