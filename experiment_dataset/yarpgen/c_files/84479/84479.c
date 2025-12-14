/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (max(var_11, (max(-13154, 13162))));
        var_12 ^= -29942;
        var_13 += min((max((max(17404, (-32767 - 1))), -13163)), 31);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {
                        var_14 += 6;
                        var_15 = (max(var_15, -29958));
                        var_16 += ((!((max((max(4836118742730665145, 7644)), 13170)))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            var_17 += ((~(~13164)));
            var_18 |= 28017;
        }
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
            {
                var_19 *= (min(((-((min(250, -36))))), ((max(((max(18, 1))), 8263)))));

                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    var_20 *= min(-13181, (max((min(11849658092716838279, 1)), 84)));
                    var_21 = (max(var_21, ((min(-91868441, 134217712)))));
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, 7749203417711903139));
                    arr_24 [i_0] [i_5] [i_0] [i_8] |= ((~(((!((min(29933, 402451449))))))));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_23 *= (max(((-((max(-764, -13140))))), 1));
                        var_24 &= (((min(1, 241))));
                        var_25 += -465002433;
                        var_26 += 1;
                    }
                    arr_28 [i_0] [i_5] [i_0] [i_8] [i_0] |= ((-(min(63, 3776))));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_27 -= 1;
                        var_28 += ((~(~3892515846)));
                    }
                }
                for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                {
                    var_29 += -29942;
                    var_30 *= -5762321431376937349;
                    var_31 |= -12291;
                    var_32 |= (min(((min((~-13126), ((max(780, 250)))))), ((max(4194303, 3892515868)))));
                }
                arr_33 [i_5] [i_5] [i_0] &= (max(982715977220674148, ((min((~29942), (~28943))))));
            }
            /* vectorizable */
            for (int i_12 = 1; i_12 < 23;i_12 += 1) /* same iter space */
            {
                var_33 = 111;
                var_34 = (max(var_34, (!6)));

                for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                {
                    var_35 += 10436215297651131108;
                    var_36 |= (+-3337);
                    var_37 = (min(var_37, 1024));

                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        arr_43 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_5] |= 144115188075593728;
                        var_38 += 8;
                    }
                    for (int i_15 = 4; i_15 < 20;i_15 += 1)
                    {
                        var_39 = 8653721865217930931;
                        arr_48 [i_0] [i_13] [i_12] [i_12] |= -1;
                    }
                }
                for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                {

                    for (int i_17 = 3; i_17 < 23;i_17 += 1)
                    {
                        var_40 = (max(var_40, 124));
                        var_41 = (max(var_41, -2316338916048506399));
                    }
                    var_42 ^= (~0);
                }
            }
            var_43 = (max(var_43, 2316338916048506405));
            arr_53 [i_0] |= (((-((min(1, -4))))));
            var_44 += max(16776704, 32);
        }
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 22;i_20 += 1)
                {
                    {
                        var_45 *= 6;
                        arr_63 [i_0] [20] [i_19] &= 16342;
                        var_46 ^= -9388;

                        for (int i_21 = 0; i_21 < 24;i_21 += 1)
                        {
                            var_47 += -16342;
                            var_48 = (max(var_48, ((max(-8, 3353)))));
                            var_49 ^= (min((--18446744073709551615), ((min(126, 0)))));
                            var_50 = (max(var_50, (!1939965072)));
                            var_51 -= -124;
                        }
                    }
                }
            }
            var_52 ^= ((~(((!((max(235, 81))))))));
            var_53 ^= (min(((max((max(378, 1)), -115))), (min((~1744373202103726507), (max(1939965072, -3194451318880565163))))));
        }
    }
    var_54 ^= ((-(min(229, -378))));
    #pragma endscop
}
