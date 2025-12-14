/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((+(((arr_1 [i_0] [1]) * (arr_1 [i_0] [i_0])))));
        var_16 = (((arr_1 [i_0] [i_0]) / (((arr_1 [i_0] [i_0]) * (arr_1 [i_0] [i_0])))));
        var_17 |= (((var_3 ? ((((1 < (arr_0 [8]))))) : (arr_0 [i_0]))));
    }
    var_18 = (((((var_14 + 2147483647) << (var_0 - 106))) << ((((var_4 ? ((max(var_13, 1))) : -64)) - 1))));
    var_19 &= (!var_2);

    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_20 = ((((((-var_0 + 2147483647) >> (min((arr_3 [i_1]), var_12))))) ? (((1 ? -1 : var_5))) : (max(16998, (arr_5 [i_2])))));

            /* vectorizable */
            for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
            {
                arr_11 [i_3] [i_2] [i_2] [i_1 - 1] &= 32767;
                var_21 = (min(var_21, ((((arr_5 [i_1 - 3]) - (arr_5 [i_1 + 2]))))));
                var_22 = (max(var_22, ((((arr_8 [i_1 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1]) ? var_8 : (arr_9 [i_1 - 1]))))));
            }
            for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
            {
                var_23 |= var_15;
                arr_15 [i_1 - 3] = ((-var_4 * (((var_8 >= (arr_13 [0] [i_2] [i_1] [i_1 + 1]))))));
                arr_16 [i_1] [i_2] = -6186;
            }
            var_24 = ((((((arr_8 [i_2] [i_2] [i_2] [i_1 + 2]) || (arr_8 [6] [i_2] [i_2] [i_2])))) < 112));
        }
        var_25 = ((!((!(arr_3 [i_1])))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_26 |= 554153860399104;
                                var_27 -= (((0 ^ ((((arr_22 [i_1] [i_5] [i_6] [i_7 - 3] [i_8]) << (((arr_24 [i_1] [i_1] [i_1] [i_1] [i_1]) + 993887030865874862))))))));
                            }
                        }
                    }
                    var_28 -= ((((arr_7 [i_1 + 2] [i_5 + 2]) - ((14641363300582607178 ? var_1 : 127)))));
                }
            }
        }
    }
    #pragma endscop
}
