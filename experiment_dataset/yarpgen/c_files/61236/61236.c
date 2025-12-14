/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = ((((!(((var_4 ? var_12 : 1))))) ? 0 : (((var_4 ? (arr_2 [i_0] [i_0]) : var_5)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_20 = ((~((((arr_1 [i_1 + 1]) >= (arr_1 [i_1 - 1]))))));
                            var_21 = var_14;
                            var_22 = ((((min((arr_6 [i_0] [i_1 + 1] [i_1] [i_2 + 1]), (arr_6 [i_0] [i_1 - 1] [i_2 + 1] [i_2 + 1])))) <= ((~(arr_6 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_2 + 1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_23 &= (arr_13 [0] [i_4] [i_4 + 1] [i_4] [i_1] [13]);
                            var_24 = (arr_13 [i_0] [i_1 - 1] [i_5] [i_5] [i_1] [i_5]);
                            var_25 = (max((arr_4 [i_0] [2] [i_0]), var_1));
                        }
                    }
                }
                var_26 = arr_3 [i_1 + 1];
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_27 -= ((~var_14) != ((((min(-529369284, (-9223372036854775807 - 1)))) ? (((arr_5 [17]) ? var_3 : 658928020843349179)) : ((min(var_2, (arr_19 [i_0] [i_1] [6] [i_6] [i_6 - 2] [i_7])))))));
                            var_28 = (((arr_6 [1] [i_0] [i_1 + 1] [i_6]) ? ((~((~(arr_4 [i_0] [i_0] [i_0]))))) : (var_7 < var_12)));
                            var_29 = ((!((max(var_1, (arr_18 [i_6 + 1]))))));
                        }
                    }
                }
            }
        }
    }
    var_30 *= 1;
    #pragma endscop
}
