/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] &= (((!407817921484613169) ? (arr_2 [i_0]) : -0));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 *= (var_3 ^ var_4);
            var_13 = (min(var_13, (-6377676331941308815 / 18446744073709551613)));
            arr_8 [i_0] [i_1] = (-(arr_7 [i_1] [i_1] [i_1]));
        }
        for (int i_2 = 4; i_2 < 14;i_2 += 1)
        {
            var_14 = ((((min(127471318504566409, 5377))) ? ((-(arr_0 [i_0]))) : (((((arr_1 [i_2]) && var_2)) ? (((arr_7 [i_0] [8] [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_7 [0] [0] [i_0]))) : -1))));

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_15 = (!1835790270);
                            var_16 = (min(var_16, (arr_12 [15] [3] [i_3] [i_0])));
                            var_17 = (min(((((var_9 | (arr_0 [i_2]))))), (((-2651260517340027050 / -19049) ? ((((arr_10 [i_0]) ? (arr_1 [i_2]) : (arr_6 [i_0])))) : ((var_10 ? (arr_18 [i_0] [i_4] [i_5]) : (arr_13 [i_0] [i_2 - 3] [17] [i_5])))))));
                            arr_19 [i_5] [i_4] [i_3] [i_3] [i_4] [i_0] = ((((((arr_16 [i_3] [i_3] [i_3] [i_3]) == (arr_7 [i_2] [i_4] [i_5]))) ? var_4 : ((var_4 ? (arr_16 [i_0] [i_0] [i_4] [i_5]) : (arr_4 [i_0] [i_4] [i_3]))))));
                        }
                    }
                }
                arr_20 [i_2] = ((0 ? ((((((arr_11 [i_0]) / (arr_17 [i_0] [12] [12] [12] [i_0] [16])))) ? ((((var_3 == (arr_18 [i_0] [0] [i_0]))))) : ((2846178440 ? 2897014203 : 2046)))) : 0));
                var_18 -= ((0 ? -1 : (((((max(63490, 1))) >> (!1))))));
            }
        }
        var_19 = (((59646 > 18446744073709551590) | (0 == 2032)));
    }
    var_20 = ((var_1 << ((((var_11 * ((-15690 ? var_8 : var_0)))) + 693088))));
    var_21 = var_9;
    var_22 = ((~(((((min(var_3, var_0))) <= (var_0 - var_4))))));
    #pragma endscop
}
