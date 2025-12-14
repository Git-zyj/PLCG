/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 22984;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 ^= (((((var_6 ? 22984 : 1))) ? 1 : 16382));

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    var_16 = 2915;
                    var_17 = min(1, -22985);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_18 = (min(var_18, ((((((6036826236956877334 ? var_8 : -2784250))) ? var_10 : (var_2 <= 2915))))));
                        var_19 *= (-32767 - 1);
                        var_20 += -19693;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_21 += 4294967291;
                        arr_18 [i_0] [i_2] = var_5;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_23 [i_2] [i_2] [i_2] [i_1] [i_2] [i_2] = ((-27 ? var_0 : 0));
                        var_22 = ((var_6 ? 237 : var_9));
                        arr_24 [i_0 - 2] [i_1] [2] [i_1] [i_2] [i_1] = (((-2616 ? var_5 : var_9)));
                        arr_25 [i_2] [0] [i_2] = (-32767 - 1);
                    }
                    var_23 += 2616;

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            arr_32 [i_2] = -19693;
                            var_24 = (min(var_24, -1419838590));
                            arr_33 [i_0 + 1] [i_0 + 1] [i_2 + 3] [i_2] [i_7] = ((2594167136 ? 0 : (-32767 - 1)));
                            var_25 -= var_13;
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_37 [i_0] [i_6] [i_2 + 4] [i_8] [i_2] = ((((var_11 > ((var_4 ? (-2147483647 - 1) : 19692)))) ? (((((3703936207 << (3703936207 - 3703936192)))) ? (min((-32767 - 1), 12210327727169571554)) : 171799935)) : (((max(var_0, (min(var_11, var_9))))))));
                            var_26 = (max(var_26, (((var_3 ? 4123167361 : var_3)))));
                            arr_38 [i_6] [i_6] [i_6] [i_6] [i_8] |= 1482604938;
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            arr_41 [i_2] [i_1] [i_1] [i_0] = ((var_4 ? 29556 : 14007279593984708237));
                            var_27 = -19688;
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_28 += (((19448 ? 1 : var_11)));
                            arr_45 [i_0] [i_2] = ((((-32767 - 1) ? var_11 : 12)));
                            var_29 = var_9;
                            var_30 = ((((var_6 ? 1 : var_5)) > var_2));
                        }
                        arr_46 [i_2] [12] [i_1] [i_1] [i_1] [i_2] = (((((var_6 ? var_0 : 5737213381707910252))) ? ((var_8 ? -31395 : 8064)) : -27));
                    }
                    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        arr_51 [i_0] [i_1] [i_2] [i_0] [i_11] = ((var_12 ? (((((var_6 ? -4270 : (-127 - 1)))) ? -48 : ((48 ? var_7 : (-32767 - 1))))) : var_5));
                        arr_52 [i_2] [i_1] = 17979794610138174402;
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                    {
                        var_31 += var_4;

                        for (int i_13 = 2; i_13 < 22;i_13 += 1)
                        {
                            arr_58 [i_2] [i_0] [i_1] [i_2] [i_2 + 4] [i_12] [i_13] = var_10;
                            var_32 = var_2;
                            var_33 = (max(var_33, var_11));
                            var_34 -= ((-((0 ? 1 : ((19687 ? var_10 : var_4))))));
                        }
                    }
                }
                arr_59 [i_1] [i_1] [i_1] = 0;
            }
        }
    }
    #pragma endscop
}
