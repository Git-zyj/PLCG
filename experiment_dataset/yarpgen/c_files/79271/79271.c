/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (min((arr_1 [i_0] [i_0]), (min((arr_3 [i_1 - 1] [i_1 - 1]), var_1))));
                var_11 = (((((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_1]))) != (~137438953408))) || ((min((18446744073709551615 == 1252229406), (min(964604190, 15)))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_19 [i_4] = var_8;
                            var_12 -= ((-1668064962888212229 ? 1 : -964604177));
                            var_13 = (min(var_13, var_3));
                            var_14 = (min(var_14, -var_5));
                            arr_20 [i_2] [i_2] [i_2] [i_5] [i_4] = var_9;
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_24 [i_4] [i_3] [i_4] [i_5] [i_4] = (arr_14 [i_2] [i_3] [i_4] [i_3] [i_7]);
                            arr_25 [i_2] [i_4] [i_4] [i_7] = ((!((min((max(var_10, var_2)), (((var_2 ? var_5 : var_8))))))));
                        }
                        for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            var_15 = ((-(max(var_2, (max(var_1, var_2))))));
                            arr_29 [i_4] [i_3] [i_4] [i_3] [i_3] = (((((max(var_9, (arr_11 [i_3]))))) ? ((((((-(arr_8 [i_2] [i_2]))) != ((min(var_8, (arr_9 [i_2] [i_4] [i_2])))))))) : (min(((min(var_2, (arr_5 [i_2] [i_2])))), (~68719476735)))));
                        }
                        for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
                        {
                            arr_32 [i_2] [i_2] [i_4] [i_2] [i_9] [i_4] [i_4] = (min(-2847496131508368568, 1));
                            arr_33 [i_4] = (max(((((((arr_30 [i_2] [i_3] [i_4] [i_5] [i_5] [i_2]) + (arr_0 [i_2]))) >= var_6))), (min(((min((arr_21 [i_2] [i_2] [i_4] [i_2] [i_2] [i_4]), (arr_12 [i_4])))), -var_0))));
                            var_16 = max((arr_0 [i_9 + 1]), var_3);
                            arr_34 [i_2] [i_4] [i_3] [i_4] [i_5] [i_4] = (var_7 * var_1);
                        }
                        arr_35 [i_5] [i_5] [i_5] [i_4] = min(((max(var_10, (min(var_10, var_10))))), (arr_8 [i_5] [i_3]));
                    }
                }
            }
        }
        var_17 = (max(var_17, ((max((min(964604188, (min(1, 14358622008294249079)))), (min(((max(var_1, var_7))), -18446744073709551601)))))));
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_18 = (min(var_18, ((var_8 ? (((~((var_6 & (arr_36 [i_10])))))) : (13406253695634928182 ^ 18446744073709551611)))));
        arr_39 [i_10] = (243 / 141);
    }
    #pragma endscop
}
