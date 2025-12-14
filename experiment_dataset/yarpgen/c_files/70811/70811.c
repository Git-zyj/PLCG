/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min((min(var_5, var_6)), (var_3 & var_6))) == ((max(((14607 ? -12709 : -776292087)), var_9)))));
    var_12 = ((var_0 ? (14607 | 1043732838) : var_9));
    var_13 = (max(((min(var_4, 2326285388))), ((var_4 ? 214 : var_1))));

    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        var_14 = (var_6 >= var_6);

        for (int i_1 = 3; i_1 < 8;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
            {
                var_15 = (((((var_8 ? var_3 : var_3))) ? 1968681901 : (((((4294967284 ? var_9 : var_4))) / ((var_8 ? 110 : 1968681923))))));
                var_16 = var_1;
                var_17 = (~((max(12724, 12708))));
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
            {
                var_18 &= -3;
                var_19 = (((((var_8 ? var_5 : (min(var_9, var_1))))) ? var_6 : (var_3 - var_10)));
                var_20 = (var_3 ? (max(var_1, (max(37495, var_8)))) : var_1);
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 7;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 7;i_6 += 1)
                    {
                        {
                            var_21 = (((((-4099692184 ? var_2 : (((var_9 ? -776292082 : -14)))))) && 1968681901));
                            var_22 *= ((-(12709 / 4099692175)));
                            arr_19 [i_4] [i_4] [i_0] = (min((var_8 < var_8), var_5));
                        }
                    }
                }
                arr_20 [i_0] = 12844;
            }
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                arr_24 [i_0] = var_4;
                var_23 = (max((((var_4 * var_3) > (~31))), (((var_1 < var_4) >= ((13 ? -670173308 : 26576))))));
            }
            var_24 = (((min(((var_3 ? var_5 : var_10)), var_10)) * ((((~-776292087) / 1540670742)))));
            /* LoopNest 2 */
            for (int i_8 = 4; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 7;i_9 += 1)
                {
                    {

                        for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
                        {
                            var_25 = (max((var_5 + var_7), (((2543080117730443027 ? 61 : -46580988)))));
                            arr_32 [i_0] [i_1 - 2] [i_8] [i_9] [i_10 + 1] [i_10 + 1] = (((var_7 || var_2) ? var_5 : (var_10 && var_3)));
                        }
                        for (int i_11 = 1; i_11 < 9;i_11 += 1) /* same iter space */
                        {
                            var_26 = var_7;
                            var_27 = (((((670173308 / (-9223372036854775807 - 1)))) ? (((((var_2 ? var_4 : var_5))) ? var_2 : var_2)) : (2326285380 - var_5)));
                            var_28 ^= 268435452;
                            var_29 &= var_0;
                            var_30 = (((min(var_9, var_2))) ? (var_4 + var_0) : ((var_10 ? var_4 : var_0)));
                        }
                        for (int i_12 = 1; i_12 < 9;i_12 += 1) /* same iter space */
                        {
                            var_31 = ((((-7 ? -2326285352 : -1684065731)) % ((((max(var_8, var_1)))))));
                            var_32 = (max(var_0, (var_10 == var_4)));
                            arr_37 [i_0] = (!var_8);
                            arr_38 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0] [i_0] = var_8;
                            arr_39 [i_0] [i_0] = (((((max(1037391544, -1142854930)) < (((var_9 ? var_4 : 20))))) ? ((min(2326285388, var_9))) : -3710011119244730548));
                        }
                        var_33 -= var_5;
                    }
                }
            }

            for (int i_13 = 3; i_13 < 7;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 3; i_14 < 8;i_14 += 1)
                {
                    for (int i_15 = 4; i_15 < 9;i_15 += 1)
                    {
                        {
                            var_34 = var_3;
                            arr_47 [i_1] [i_0] [i_14 - 1] [i_15 - 1] = (min(var_7, var_2));
                        }
                    }
                }
                var_35 = var_4;
                var_36 = ((max((var_7 - var_3), 971)));
                arr_48 [i_0 + 4] [i_0] [i_0 - 3] [i_0] = (((((var_2 ? var_9 : var_9))) ? var_2 : var_9));
                var_37 += (-((36311 ? -32 : 9443)));
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                arr_52 [i_0 - 1] [i_1 + 1] [i_0 + 3] [i_0] = (239 > 40);
                var_38 &= ((-20975 ? 0 : 1378370367));
                var_39 = (max(var_39, var_3));
                var_40 = (max(var_40, var_7));
                /* LoopNest 2 */
                for (int i_17 = 4; i_17 < 9;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 9;i_18 += 1)
                    {
                        {
                            var_41 += var_0;
                            var_42 = ((var_1 ? var_2 : -329650850));
                        }
                    }
                }
            }
            for (int i_19 = 0; i_19 < 10;i_19 += 1) /* same iter space */
            {
                var_43 = 0;
                arr_60 [i_0] = ((var_6 ? var_7 : -21161));
            }
            for (int i_20 = 0; i_20 < 10;i_20 += 1) /* same iter space */
            {
                var_44 = max(-12709, (((var_10 >= ((4294967276 ? var_10 : var_8))))));
                arr_64 [i_0] = var_7;
                arr_65 [i_0] [i_1 - 2] [i_20] = 4294967289;
            }
            arr_66 [i_0] = var_2;
        }
        /* vectorizable */
        for (int i_21 = 3; i_21 < 8;i_21 += 1) /* same iter space */
        {

            for (int i_22 = 2; i_22 < 7;i_22 += 1)
            {
                var_45 = var_10;
                var_46 = (min(var_46, var_4));
                var_47 += (!var_9);
                var_48 = (22205 + 7);
            }
            for (int i_23 = 0; i_23 < 10;i_23 += 1)
            {
                var_49 &= (!var_5);
                var_50 &= -15;
                arr_74 [i_0] [i_21] [i_23] [i_23] = ((var_7 ? (~36301) : var_4));
            }
            /* LoopNest 2 */
            for (int i_24 = 3; i_24 < 6;i_24 += 1)
            {
                for (int i_25 = 4; i_25 < 9;i_25 += 1)
                {
                    {
                        var_51 = 5487711410535313577;
                        arr_79 [i_0] [i_24] = 228;
                        arr_80 [i_0] = var_2;
                        var_52 += ((var_2 >> (var_2 - 73)));
                    }
                }
            }
            var_53 = (var_5 ? var_5 : (~var_10));
        }
        for (int i_26 = 3; i_26 < 8;i_26 += 1) /* same iter space */
        {
            var_54 &= ((var_4 - var_1) ? (var_6 && var_8) : (min(var_3, var_7)));
            var_55 = var_8;
            var_56 = var_10;
        }
        var_57 ^= ((((((var_0 ? var_1 : var_4)) & var_6))) ? var_8 : (var_5 - 17707));

        for (int i_27 = 0; i_27 < 10;i_27 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_28 = 3; i_28 < 8;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 10;i_29 += 1)
                {
                    for (int i_30 = 1; i_30 < 8;i_30 += 1)
                    {
                        {
                            var_58 = (max(var_58, var_2));
                            arr_92 [i_0 + 4] [i_27] [i_28] [i_0] [i_30 + 2] = ((max(var_4, var_7)));
                        }
                    }
                }
            }
            arr_93 [i_27] [i_0] = ((max(var_3, (min(6511, -100)))));
            var_59 = (max(var_59, ((((var_7 || var_2) - (max((var_1 / 476544930), var_10)))))));
            arr_94 [i_0 + 4] [i_27] [i_0] = (min((var_10 < 0), ((var_6 ? var_0 : var_4))));
        }
        for (int i_31 = 0; i_31 < 10;i_31 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_32 = 2; i_32 < 9;i_32 += 1)
            {
                for (int i_33 = 0; i_33 < 10;i_33 += 1)
                {
                    {
                        var_60 = (((var_0 / var_10) * (((((var_4 ? 530176870 : var_10)))))));
                        var_61 = (((~var_8) ? -var_6 : var_8));
                        var_62 = var_9;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_34 = 2; i_34 < 8;i_34 += 1)
            {
                for (int i_35 = 2; i_35 < 8;i_35 += 1)
                {
                    for (int i_36 = 0; i_36 < 10;i_36 += 1)
                    {
                        {
                            var_63 = var_9;
                            var_64 = (((((-8401849753252617626 ? var_6 : 32462))) ? 57020 : (max(13, 2147483647))));
                            var_65 = (max(var_65, (((((((min(var_0, var_1))) ? var_3 : (var_4 - 530176870)))) + ((653539238 ? ((var_8 ? var_7 : 61)) : var_1))))));
                            var_66 = (max(-31, var_2));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
