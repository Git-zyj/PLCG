/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (!-var_9);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [i_1] = min(((((max(164, 3490460517))) ? (18446744073709551615 ^ 3490460512) : ((var_2 ? var_5 : var_5)))), (((((3490460508 ? 24 : 63)) == (min(249, var_1))))));

                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        var_12 = (1 ? (max(1260846109, var_11)) : (((~(-51 & var_0)))));
                        arr_13 [18] [i_3] |= ((-(((-8766600807674439188 || var_5) ? 1334413689 : (max(18446744073709551611, 1272319264856619371))))));
                        var_13 = (max(-1283487212, var_5));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_14 += (18446744073709551599 <= -954198154);
                        arr_18 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0] = var_3;
                        var_15 = (((-7 == var_6) * var_8));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_16 = (max((max(var_9, var_7)), 2434409875853173187));

                        for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_0] [i_5] [i_0] [i_0] [4] [i_0] = ((((var_11 ? 16777215 : -794436807))));
                            var_17 = (max((max((max(1, 72057594037927935)), (((var_3 ? var_2 : var_2))))), ((((max(255, var_8))) & (var_5 + var_11)))));
                            arr_29 [i_0] [i_6] [i_5] [i_0] = (((max(6641052022242937614, 2922404551)) << ((((var_0 ? var_3 : var_5)) - 7986186682326405094))));
                        }
                        for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            var_18 = (max(((max(0, var_9))), (max(var_5, var_8))));
                            var_19 = 2157872921;
                            var_20 = (max((var_7 + 13868579580267429840), -55996429));
                            var_21 = ((17011840239416843786 > 0) ? var_5 : ((min((((var_2 ? var_11 : var_4))), (min(var_3, -2721943540393399422))))));
                        }
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            var_22 += (((1 == -2721943540393399434) ? ((562949953421311 ? var_11 : 2866394791)) : (3490460507 ^ var_4)));
                            var_23 = ((var_1 & ((((max(var_7, 9470371063054674593)) >= (((min(155, var_2)))))))));
                        }
                    }
                }
            }
        }
        arr_36 [24] |= (((((var_11 ? ((-5251236245678191856 ? 794436807 : var_2)) : var_7))) ? (var_9 + var_5) : (((((max(var_4, var_7)) > (max(var_1, var_11))))))));
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
    {
        var_24 *= ((-((-(18446744073709551615 >= var_6)))));
        var_25 = (max(var_25, (((~(~2888244649))))));
        arr_40 [i_11] = ((((var_8 ? 99032843 : var_6)) % var_4));
    }
    var_26 = ((((-(max(var_3, var_8)))) == var_8));
    var_27 = (((((((~var_7) < (6890646861656948522 * var_1))))) % -var_11));
    var_28 &= (max((((3049084910 | 4) | (max(var_0, 3490460517)))), (!4215312556)));
    #pragma endscop
}
