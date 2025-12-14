/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(3, 4278190080) & (var_13 - var_3)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = var_6;
        arr_2 [i_0] &= ((var_11 ? var_6 : (66 && 187)));
        arr_3 [i_0] = (1 | 171);
        var_22 = (max(var_22, (((var_13 ? var_10 : -8311505352174479105)))));
        var_23 &= var_2;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_3] = 167;

                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        var_24 -= ((~(min(var_9, var_12))));
                        arr_13 [i_1] [i_1] [i_2] [i_3] [i_3] [i_3] = var_12;

                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            var_25 = (max((max(((max(7, -9700))), ((8908773429785897356 ? var_11 : 3910177427345149582)))), var_19));
                            arr_16 [i_1] [i_2] [i_3] [i_4] [i_5] = ((max(-9711, 0)));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_1] [i_1] [i_3] [i_1] [8] [i_6] [i_6] = (~13132389850406021556);
                            var_26 -= (min((~-6085), var_8));
                            var_27 &= max(var_3, var_6);
                            var_28 ^= ((((max((~var_14), var_0))) ? (((var_6 ? var_15 : 255))) : (((!-28996544) ^ 8311505352174479104))));
                        }
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            arr_23 [i_3] [1] [i_3] [i_3] [i_3] = var_8;
                            var_29 -= (max((var_1 >= var_0), (((min(var_9, var_14)) > var_14))));
                        }
                        for (int i_8 = 2; i_8 < 24;i_8 += 1)
                        {
                            arr_26 [i_1] [i_1] [i_3] [i_1] [i_1] = ((-8728494118436049223 | (((!(~8908773429785897356))))));
                            var_30 = (((((var_16 >> (15932 - 15928)))) ? (((((max(4294967291, var_15))) ? -var_18 : (~22)))) : var_0));
                            var_31 = (max(var_31, ((var_0 ? 248 : (((12244058499561570649 >= (10233 >= -11649))))))));
                            var_32 = var_16;
                        }
                    }
                }
            }
        }
        arr_27 [14] = (min((((var_9 ? 255 : (!var_12)))), (((max(var_11, var_16)) >> ((min(1, var_8)))))));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        arr_30 [i_9] [i_9] = ((((min(8908773429785897368, -2147483643))) ? (92 != -2486468577941566722) : ((var_1 ? var_18 : var_1))));
        arr_31 [i_9] = (!var_7);
    }
    var_33 += var_15;
    var_34 = var_15;
    #pragma endscop
}
