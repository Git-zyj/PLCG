/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (var_5 + var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_21 -= (((((var_13 ? (3006620898874126662 <= -110) : (max((arr_3 [i_0]), (arr_2 [i_0] [12] [i_0])))))) && (((((arr_0 [i_0]) ? var_11 : (arr_2 [13] [i_1] [i_0])))))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, (219 == 4)));
                                var_23 = (min(-110, -110));
                                var_24 += (arr_4 [i_3]);
                                var_25 += -103;
                            }
                        }
                    }
                    arr_10 [i_2] [i_1] [i_1] = (((((2871939023263736348 ? 18446744073709551615 : 18446744073709551615))) ? (((max((arr_3 [i_2]), (arr_0 [i_0]))))) : 18446744073709551615));
                    var_26 = (min(var_26, (arr_1 [i_1])));
                    arr_11 [i_0] [i_0] [i_2] |= 18446744073709551615;
                    var_27 -= ((((((max(180, -49))) <= 76)) ? (max((~var_19), var_5)) : (!var_9)));
                }
                var_28 -= ((min((min((arr_1 [5]), var_10)), ((((arr_9 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_1]) << (18446744073709551610 - 18446744073709551596)))))));
            }
        }
    }

    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        var_29 -= ((37 >= ((max(27502, -11385)))));
        arr_14 [i_5] = ((((((1824905608 && 115) != 219))) == (((arr_3 [i_5]) ? (arr_7 [i_5] [i_5] [i_5] [i_5 - 1]) : 48))));
        var_30 += var_5;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            var_31 -= 10058771249321101353;
            arr_19 [i_6] = var_5;
        }
        var_32 *= ((18446744073709551615 * (((-14055 ? 4294967295 : -110)))));
        var_33 |= var_11;
        arr_20 [i_6] [i_6] = (arr_0 [i_6]);
        var_34 = ((var_18 || (arr_6 [1] [i_6] [i_6] [i_6] [i_6] [i_6])));
    }
    #pragma endscop
}
