/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_5 || ((!(!var_11))));
    var_21 = ((var_10 ? ((((((max(40895, 24640)))) == var_2))) : (var_5 && -9643)));
    var_22 += 87;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_15 [i_2] [i_4] = var_8;
                            var_23 = 24641;
                            var_24 -= 655973153904430965;
                            arr_16 [i_0] [i_1 + 1] [i_3] = (!var_7);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_25 &= (~-1628332862656095510);
                            var_26 = (min(var_26, ((max((max((((var_11 ? var_6 : 1023770340))), var_5)), (((1949108264 ? (arr_2 [i_1 + 3] [i_1 + 2]) : (((min(40903, var_0))))))))))));
                        }
                        arr_19 [i_3] [i_0] [i_0] [i_1] [i_0] [i_0] = (((((~((var_1 ? var_16 : (arr_10 [i_0] [i_1 - 4] [i_1 - 1] [i_1] [3] [i_3])))))) ? (min(var_0, var_18)) : ((var_19 ? (237 < -1628332862656095521) : var_9))));
                        var_27 = (((13498814429642793192 ? 188752672 : 17790770919805120650)));
                    }
                }
            }
        }
        var_28 *= (((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (((((var_17 ? var_7 : (arr_1 [i_0])))) ? 141431484 : (var_0 | var_11))) : ((((((18446744073709551615 ? 164 : -4684)) <= (((var_1 + 2147483647) << (var_16 - 33637481)))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_29 [i_0] [i_0] = ((((((arr_9 [i_0] [i_0] [i_0] [i_0]) / 45))) ? var_18 : 3462626035467149169));
                        var_29 = (min(var_29, (((454819055 * (((((32742 / 200031723) && var_12)))))))));
                    }
                    var_30 = ((((~((var_7 ? 0 : 60669)))) / (~12913)));
                    var_31 = (max(var_31, (9187343239835811840 | var_13)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_32 += (!0);
                                var_33 -= (max((arr_0 [i_0] [i_7]), -121));
                                var_34 = ((-(-32767 - 1)));
                                arr_34 [i_0] [i_10] [i_7] [i_10] [i_0] = (var_19 * 8932);
                            }
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_11 = 1; i_11 < 19;i_11 += 1)
        {
            arr_37 [i_11] [i_11 + 1] = (((var_10 + var_13) ? var_12 : (arr_4 [i_0] [i_11])));
            arr_38 [i_0] [i_11] [i_11 - 1] = var_5;
        }
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            arr_41 [i_0] [i_12] [i_12] = ((var_19 ? (((max(0, 3532659323)))) : (~189)));
            arr_42 [i_0] = (max(var_10, ((((arr_11 [i_12]) ? var_13 : -33)))));
        }
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
    {
        var_35 = (min(var_35, (((((((!39520) * var_2))) ? ((26016 ? (arr_12 [i_13] [i_13] [i_13] [i_13] [4]) : (arr_12 [i_13] [i_13] [i_13] [i_13] [i_13]))) : ((7042539489763530453 ? 4294967295 : (var_16 % 1391408144))))))));
        var_36 = (1458444747863549662 <= var_5);
    }
    for (int i_14 = 4; i_14 < 11;i_14 += 1)
    {
        arr_48 [i_14] = 106;
        var_37 |= (min(((9315 * (~508))), ((var_6 ? 3182672973 : (var_3 != -513)))));
        arr_49 [i_14] = ((-var_2 ? (((var_10 ? ((var_2 ? 153 : 3487842536)) : var_19))) : (((var_14 || 14) ? (!var_2) : (arr_44 [i_14])))));
        var_38 = ((((((229 ? var_16 : var_16))) ? (var_17 == var_15) : var_5)));
    }
    #pragma endscop
}
