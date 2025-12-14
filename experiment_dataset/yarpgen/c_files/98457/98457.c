/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_3 ^ var_3) ? (!var_7) : var_9)) >> (((min((var_6 & var_0), (min(var_1, var_4)))) + 2480039865815951500))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = (((((!(((var_2 << (var_5 + 9002144208990640705))))))) >= -var_2));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((68719476735 ? -9223372036854775803 : 68719476754));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (var_0 >= var_8);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_4] = var_3;

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_12 = (((((-(!var_2)))) ? (~var_7) : (((((min(var_8, var_1)) == var_5))))));
                        var_13 = (~-68719476764);
                        arr_21 [i_6] [i_4] [i_5] [i_5] = (((var_6 ^ var_3) / (((max((min(var_7, var_2)), (!var_2)))))));
                    }
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        arr_24 [i_3] [i_4 - 1] [i_3] = ((~(max(-var_5, (!var_1)))));
                        arr_25 [i_7] [i_7] = ((((-(var_6 == var_1))) >> (((~var_6) + 31424))));
                    }
                    arr_26 [i_5] [i_5] [i_5] [i_5] &= (min(((((var_5 == var_4) ? (var_0 < var_9) : var_1))), (min((((var_9 ? var_5 : var_9))), ((var_0 ? var_1 : var_3))))));
                    arr_27 [i_5] [i_5] [i_5] = (max(var_5, (((((var_1 + 9223372036854775807) << (((var_5 + 9002144208990640712) - 27)))) >> (-var_9 + 63416)))));
                }
            }
        }
    }
    #pragma endscop
}
