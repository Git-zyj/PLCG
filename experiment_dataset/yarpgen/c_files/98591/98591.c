/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_10 = (min(var_10, ((max(2, -3655)))));
        var_11 = (min(var_11, var_5));
        var_12 = (max(var_12, ((((((max(1571610832, 0))) | (arr_3 [i_0 - 3])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((max(var_1, ((((max(12884901888, 9387408186879347816))) ? 1988393943 : (max(2032, var_1)))))))));
                    var_14 += (max(((max(var_8, 22840))), ((68182605824 ? 1988393921 : (arr_3 [i_0 - 4])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_15 = (max(var_15, -9160194702074320383));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_16 |= 1988393968;
                    var_17 ^= (!1988393933);

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_18 *= (((~(arr_1 [i_3 + 2] [i_6]))));
                            arr_20 [i_3] [i_3] &= 1988393931;
                            var_19 += (arr_18 [i_3 - 2] [14] [i_5] [i_4] [i_7]);
                        }
                        var_20 += (((((var_4 + (arr_15 [i_3 - 2] [i_3 - 2] [i_4] [i_5] [i_4])))) || ((((arr_3 [i_4]) * 9187343239835811840)))));
                        var_21 |= 9223372036854775808;
                    }
                    var_22 = (min(var_22, (arr_8 [i_3])));
                }
            }
        }
        var_23 = (max(var_23, ((((((var_2 ? (arr_12 [i_3]) : (arr_19 [i_3] [6])))) == -9160517497835628945)))));
    }
    var_24 = (min(var_24, ((((var_9 > (!var_3)))))));
    var_25 -= ((((max(var_1, -24035)))) ? (((((var_3 ? var_6 : var_6))) ? (!144) : (2892089372436733689 && var_4))) : ((-470924789 ? var_8 : var_0)));
    var_26 += (((((!3770877225895401665) != ((3381782487657119876 ? 4486007441326080 : var_5)))) ? -1988393932 : var_5));
    var_27 += (((((-(min(var_3, -1988393943))))) ? (2305843009213677568 > 1460117351) : ((((var_6 ? var_7 : 113)) + (960 + -1818690073)))));
    #pragma endscop
}
