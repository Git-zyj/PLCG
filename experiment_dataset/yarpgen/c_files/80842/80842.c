/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, -21376));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = (min(-6318921063568378075, 101));
                                var_22 ^= (((max((min(var_6, var_9)), (12359 + 6483134238579259311))) <= (((var_18 | (var_12 & var_4))))));
                            }
                        }
                    }
                    var_23 = (((((var_14 ? ((-6727602281645006472 ? var_7 : var_7)) : (29249 & 47)))) || (((-19770 ? ((1 ? var_19 : 0)) : ((var_9 ? 63 : var_12)))))));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_24 = var_14;
                        var_25 = (((((209 >> (53183 - 53173)))) || ((min(-var_18, var_7)))));
                        var_26 = (((((6727602281645006475 ? var_9 : 14094021647670636138))) ? var_2 : (7038 / 4776769327830229667)));
                        arr_16 [i_2] [i_2] = ((var_14 ? ((var_17 ? var_10 : 0)) : ((((((var_10 ? var_6 : var_2))) ? (10389894796076978027 || 1) : var_8)))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_27 *= var_14;
                        var_28 = (max(var_28, (((max(((var_2 ? var_14 : -6727602281645006472)), 6318921063568378087)) == var_2))));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_7] [i_1] [i_2] [i_2] [i_7] |= (((min(((18446744073709551615 | (-2147483647 - 1))), (24782 ^ 63)))) || var_19);
                        var_29 -= ((((max(var_3, 211040911))) ^ (~var_19)));
                        var_30 ^= 0;
                        arr_22 [i_2] [i_1] [i_1] [i_1] = (((((var_4 ? 2147483647 : var_8))) ? var_0 : var_16));
                        arr_23 [i_2] [i_1] [i_2] = (((((var_18 ? (var_12 / var_19) : (max(var_3, var_17))))) ? ((((var_14 ? var_16 : var_12)) | (~var_18))) : var_15));
                    }
                }
            }
        }
    }
    var_31 = 5001168509178016288;
    #pragma endscop
}
