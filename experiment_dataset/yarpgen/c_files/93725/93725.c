/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 = ((51 ? -111 : 126));
                            arr_13 [i_2] = ((!((max((arr_6 [i_0 - 1] [i_2 + 2] [i_3 + 1]), (arr_5 [i_0 - 1] [i_1] [i_2 + 3]))))));
                            var_18 = 321032858;
                        }
                    }
                }
                arr_14 [i_1] [i_0 - 1] = ((33673 | 13218) ? (16711680 >= -14541) : (-352154966951716974 / 3002657071));
                var_19 = (min((-9223372036854775807 - 1), ((-8146008844890380542 ? var_13 : (arr_6 [i_0 - 1] [i_0] [i_0 - 1])))));

                for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_4] [i_1] [i_0 + 1] = ((((52711 ? (arr_4 [i_0]) : 3556390091)) > var_11));
                    var_20 = (((arr_9 [i_0 - 1] [i_0] [i_0 - 1]) ? ((2987331030 ? 12340 : 0)) : 19));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, (((var_5 ? (((2987331034 ? 7608 : var_2))) : (arr_12 [i_5] [i_1] [i_0 + 1] [i_0 + 1]))))));
                    arr_20 [i_0] [i_0] [i_0] [i_5] = ((321032861 ? 20618 : (arr_19 [i_0 - 1] [i_0 - 1] [i_0 + 1])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                {
                    var_22 = (max(var_22, (arr_29 [i_6] [i_6] [i_6] [i_6])));
                    var_23 ^= ((((max((arr_28 [14] [i_8 + 1] [i_7] [i_7 - 1]), (arr_26 [i_8 + 1] [i_8] [i_7 - 1])))) ? ((-(arr_21 [i_7 + 1] [i_7 + 1]))) : (arr_26 [i_8 + 1] [i_7 + 1] [i_7 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
