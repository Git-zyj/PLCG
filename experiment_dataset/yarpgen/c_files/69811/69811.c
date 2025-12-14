/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(-1045904641587815627, 8));
    var_20 += (min(((var_13 | (((min(248, 15)))))), (((var_6 ? var_13 : (((var_16 << (var_6 - 73)))))))));
    var_21 = ((-(-5922076993813657391 / -var_17)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_22 &= ((((((var_3 & 32764) && (((7 ? 511 : -1)))))) | (max((255 ^ 1), ((var_5 >> (var_5 - 80)))))));
        var_23 = (max((((max(var_10, var_18)))), ((((var_16 ? 1689388359 : var_17))))));
        var_24 = (min(18446744073709551615, 3549984478513590252));
        var_25 = (var_11 + var_5);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_26 = (min((var_11 | 18446744073709551615), (((var_11 ? var_16 : var_17)))));
        var_27 = (min((~var_0), ((var_11 ? (~var_4) : (max(var_12, var_13))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_28 = var_18;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_29 = (((min((min(var_1, 17527305555888612706)), (((var_13 ? var_0 : -2427836731532494628))))) < (max(((min(173, var_0))), ((var_1 ? 10075288388953680236 : var_2))))));
                                var_30 = (max(-192, (((var_3 <= ((max(var_8, var_11))))))));
                            }
                        }
                    }
                    var_31 ^= var_10;

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_32 = (~(max(var_17, 255)));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_33 += ((5941710232062102016 ? 0 : 3286762450161217347));
                            var_34 = (-1 <= 2427836731532494628);
                            var_35 = ((var_9 ? var_3 : var_16));
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_36 -= (((((var_7 ? var_5 : var_6))) == (max((((var_2 + 9223372036854775807) << (57 - 57))), (((var_5 >> (177 - 153))))))));
                            var_37 = (~var_3);
                            var_38 = (33480 ^ var_0);
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_39 = ((((min((~6261910850015803165), ((max(var_16, var_0)))))) ? ((max(65519, 246))) : (max(var_8, (~-2002623183866505671)))));
                            var_40 = var_1;
                        }
                        var_41 = (max(((-(var_6 / 52848))), ((8662300742609654505 ? var_1 : var_6))));
                    }
                    var_42 = (min(var_42, ((min(1, 1)))));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
    {
        var_43 = (((-1361131315565767039 + var_2) && (~var_7)));
        var_44 = (max(6, ((var_14 ? var_0 : var_9))));
    }
    var_45 = (max(var_14, (min(var_8, 230))));
    #pragma endscop
}
