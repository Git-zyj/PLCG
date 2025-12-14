/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_18 -= ((var_3 ^ ((-((var_11 ? var_6 : var_8))))));
                var_19 = (max(var_19, 8403674357076732655));
                var_20 += (max(var_1, ((89 ? ((90 ? var_6 : 1999345041)) : (((var_11 ? var_15 : 11)))))));
            }
        }
    }

    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        var_21 ^= ((!((min(91, (var_7 - var_9))))));
        var_22 += ((((var_11 + var_14) ? var_15 : (((var_15 + 2147483647) << (var_0 - 9594651056754013734))))));
        var_23 -= ((((((var_7 ^ 7) ? (((min(187, var_13)))) : var_5))) ? -var_14 : var_3));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_9 [i_3] &= (min((((167 ? var_1 : var_3))), (min(((var_13 ? var_0 : var_12)), 85))));
        var_24 += ((!(((-14 ? 8 : 19)))));
        var_25 = (min(var_25, var_11));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_26 -= (((((~((6353713389231650969 << (1460007542 - 1460007491)))))) ? (~-18601) : (~var_13)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_27 = (max(var_27, ((((max(-8, var_11)))))));
                    var_28 = (min(var_28, (((-(187 - var_0))))));
                    var_29 = (max(var_29, 69));
                    var_30 -= (((((var_3 ? 4294967295 : -1))) ? ((165 ? 164 : 175)) : ((2147483627 ? 202 : 6077))));
                }
            }
        }
        arr_19 [i_4] &= var_1;
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_31 += ((-((-var_2 ? (!var_4) : 13))));
        var_32 = (min(var_32, (((!((min((!29), (min(-19, 186))))))))));

        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_33 -= ((((max(var_8, var_2))) ? ((var_16 ? var_10 : var_1)) : 6096));
                            var_34 -= (((max(var_9, 169))));
                            var_35 -= ((((max(187, (6971709250133368193 + 2)))) ? (max((18881 % -14), (min(var_5, -14)))) : -26));
                        }
                    }
                }
            }
            var_36 -= ((((min(((var_13 ? var_12 : 213)), ((max(21, var_9)))))) ? (((((11475034823576183412 ? 166 : 118))) ? ((167 ? 253 : 236)) : (15 || 50))) : (((((46666 ? 205 : 119))) ? (161 >= var_10) : ((var_1 ? var_9 : var_12))))));
        }
    }
    #pragma endscop
}
