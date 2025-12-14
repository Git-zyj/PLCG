/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_3] = -1199054172;
                        arr_12 [i_0] [i_0] [i_0] [i_3] [7] = ((((((1 ? (-2147483647 - 1) : (arr_3 [i_1] [i_2] [i_3])))) ? ((-12751 ? -21 : (arr_8 [i_0] [1] [i_3]))) : (((arr_2 [i_0]) ? (arr_3 [i_0] [i_1 - 3] [i_1 - 3]) : -12751)))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_16 [i_0 - 2] [i_1] [i_0] = ((min(((6 ? -1427391629 : (-2147483647 - 1))), var_0)));
                        var_16 ^= (((arr_6 [i_2] [i_2]) > 2147483647));
                        var_17 = (-127 - 1);
                        var_18 = (((((arr_4 [i_0] [i_0]) + 2147483647)) >> ((~((~(arr_15 [i_0] [i_0 - 1] [i_1] [i_2] [i_4])))))));
                        var_19 = (arr_7 [i_4] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]);
                    }
                    var_20 = (max(var_20, 101));
                    arr_17 [i_0] [i_0] [i_0] = ((((max((-127 - 1), 2147483643))) ? ((1 ? ((59388 ? 28524 : 102)) : ((255 ? -21606 : -70)))) : ((0 ? (arr_8 [i_0] [i_1 + 2] [i_1]) : 255))));
                }
            }
        }
    }
    var_21 += (var_12 % (~255));

    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        var_22 |= (((((21587 ? 16 : 12751))) ? 1364317471 : (min(-21606, var_7))));
        var_23 = (((((((-2147483647 - 1) ? 248 : (arr_5 [i_5] [i_5 - 2] [10]))) % (-32767 - 1)))) ? (((arr_18 [i_5]) ? ((2687 ? -391351262 : var_3)) : -0)) : 13283);
    }
    var_24 *= (max(231, (((var_3 - 18949) ? var_13 : var_0))));
    #pragma endscop
}
