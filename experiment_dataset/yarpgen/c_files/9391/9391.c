/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                arr_13 [i_3] [i_0] [i_2] [0] [0] [i_4] [i_4] = -26656;
                                var_11 = (((((9077440763844958964 ? 1808675958 : 1808675935))) ? (0 * 2486291342) : (~1)));
                            }
                            var_12 = (max(var_12, 93));
                            var_13 = 14266686290932709071;
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_14 = (min(var_14, ((((!-646563102) << (-124 + 133))))));
                    var_15 = -var_5;
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    arr_19 [i_0] = (!-10799);
                    var_16 = var_4;

                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_26 [i_8] [i_8] [i_1] [i_6] [i_8] [i_8] = (0 + -16384);
                            var_17 &= var_4;
                            var_18 ^= var_8;
                            arr_27 [i_8] [i_8] [i_8] [i_8] [i_8] = ((~(~16372)));
                        }
                        var_19 = (!-1);
                        var_20 = (max(var_20, ((((-1 ? ((1 ? -7980021385503645580 : var_6)) : var_0))))));
                        var_21 ^= (((!var_9) ? (9223372036854775807 || 0) : (~3692286056)));
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                    {
                        var_22 |= ((((((18446744073709551615 ^ 1) ^ (((4210309071 ? 2486291342 : 1024)))))) ? var_3 : ((163 ? ((4611686018360279040 ? 2147483647 : var_6)) : ((0 ? -29783 : 145))))));
                        var_23 = -2147483647;
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_10] = var_3;
                        arr_35 [i_0 + 2] [i_1] [i_6] [9] [i_10] = (((((7602460745422446228 ? 0 : (!3112791915)))) ? (var_7 * 0) : var_9));
                    }
                    for (int i_11 = 4; i_11 < 10;i_11 += 1)
                    {
                        var_24 = ((((24035 ? 9 : 2101950586)) * (~var_5)));

                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            var_25 &= ((((min(-4294967295, 16523))) ^ var_10));
                            arr_41 [i_12] [i_12] [i_0] [i_0] [i_6] [1] [i_0] = (var_0 * 119);
                            var_26 = (((((var_3 ? 18446744073709551615 : 4))) ? (~var_6) : 7));
                            var_27 = 0;
                        }
                    }
                }
                for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                {
                    var_28 = (((163 / 5846611484126258427) ^ ((((1 <= (!190)))))));
                    var_29 = (min(10844283328287105374, (((!3472950417931810118) ? ((-32331 ? 7602460745422446251 : 2147483640)) : -1016609948))));
                }
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    var_30 = var_4;
                    var_31 = (!var_8);
                }
                var_32 = (max(var_32, 4210309080));
                var_33 &= (((((-(!-126)))) ? -2037609618 : var_4));
            }
        }
    }
    var_34 = -1165520486;
    #pragma endscop
}
