/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 -= ((11066472911648880220 > 7380271162060671380) % 11483531095111426220);
                var_20 += ((((var_4 >> (((arr_0 [i_1] [i_0]) + 5308542877476207541)))) < (arr_0 [i_0] [i_0])));

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_21 ^= 1;
                            var_22 -= arr_1 [i_1];
                            var_23 = (max(var_23, ((max(11514246723942091777, -var_2)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            var_24 = (min(var_24, ((-(((var_16 > (arr_11 [1] [i_3 + 1] [i_2] [i_2 - 1] [i_1] [1]))))))));
                            arr_16 [i_2] [2] [i_2 - 2] [i_2 - 1] [i_2] &= arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 1] [8] [i_5 + 1];
                        }

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_20 [10] [i_1] [i_1] [i_1] [i_1] &= ((~(max(17, 7380271162060671380))));
                            var_25 += arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [2];
                        }
                        var_26 = (max(var_26, 24));
                    }
                    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_27 -= ((~(((0 > ((8796093022207 ? 7537838825516745563 : 1)))))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_26 [i_0] [i_1] [i_1] [4] [2] [i_7 + 1] [i_8] &= arr_15 [i_0] [i_1] [i_2] [i_7] [i_8] [i_8] [i_0];
                            var_28 = 1952038540;
                            var_29 *= var_16;
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_30 &= 11066472911648880220;
                            var_31 -= var_10;
                            var_32 = (max(var_32, ((max(var_4, (var_13 - -25))))));
                            var_33 += (min(var_9, 0));
                        }
                        var_34 &= ((7380271162060671395 ? 3 : 9194666932452834412));
                        var_35 ^= (!((var_3 == (arr_11 [i_2 - 2] [i_2] [i_2] [i_7 + 2] [i_7] [i_7]))));
                    }

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            var_36 = (max(var_36, (arr_24 [i_11] [1] [1] [i_2 - 1])));
                            arr_34 [i_0] [2] &= 62410;
                        }
                        for (int i_12 = 2; i_12 < 12;i_12 += 1)
                        {
                            arr_38 [10] [i_1] [i_2] [i_2] [6] [i_10] [i_12] &= var_7;
                            var_37 *= var_18;
                            var_38 -= ((var_17 / (arr_10 [i_12] [i_12 - 1] [i_12 - 2] [2] [i_12 + 1])));
                        }
                        var_39 += (arr_0 [i_2 - 1] [i_2]);

                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            var_40 = (max(var_40, var_5));
                            var_41 -= (1 + 1);
                        }
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            var_42 -= ((arr_6 [i_0] [i_1] [0] [i_10]) > (arr_6 [i_0] [i_1] [8] [i_10]));
                            var_43 = ((11359236251151244481 ^ (arr_19 [i_14] [i_14] [i_14] [i_10] [i_2 + 1])));
                        }
                        for (int i_15 = 1; i_15 < 1;i_15 += 1)
                        {
                            var_44 = (max(var_44, ((((3 >> 20) > 66584576)))));
                            arr_50 [12] [12] &= (arr_42 [i_0] [i_2 + 1] [i_15 - 1] [i_15] [0]);
                            arr_51 [i_0] [i_0] [12] [i_0] [i_0] |= var_11;
                        }
                        var_45 -= (-(arr_10 [i_2 - 1] [i_2 + 1] [i_2] [10] [i_2 - 1]));
                    }
                }
                for (int i_16 = 4; i_16 < 11;i_16 += 1) /* same iter space */
                {

                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        var_46 += ((min(var_16, (min(65490, var_4)))) + (min(((((arr_21 [i_0] [i_1] [i_16] [6] [8] [i_17]) == var_6))), 4611686018427387903)));

                        for (int i_18 = 0; i_18 < 13;i_18 += 1)
                        {
                            var_47 = (max(var_47, 1342640852));
                            var_48 -= (2452737125 == 14);
                            var_49 -= (max(var_13, (88 * 6194163573709113903)));
                            var_50 = (max(var_50, (arr_35 [i_1] [i_17])));
                            var_51 -= ((-((((max(var_17, 2452737125))) & 4611686018427387904))));
                        }
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 0;i_19 += 1)
                        {
                            var_52 = (max(var_52, 11066472911648880225));
                            var_53 ^= var_15;
                        }
                    }
                    var_54 = (max(var_54, ((min(2305807824841605120, (min((arr_33 [10]), (arr_55 [10] [i_16 - 4] [i_16] [i_16] [i_16 + 1] [8]))))))));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        for (int i_21 = 3; i_21 < 12;i_21 += 1)
                        {
                            {
                                var_55 += -64168;
                                var_56 = (max(var_56, (((+(max((~6), (-9223372036854775807 - 1))))))));
                                var_57 = (min(var_57, (min(4053340497374340123, 13835058055282163711))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_22 = 4; i_22 < 11;i_22 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 13;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 1;i_24 += 1)
                        {
                            {
                                var_58 = (min(var_58, (65516 + 2448253587277871122)));
                                var_59 ^= var_15;
                                var_60 += ((var_11 << (((~65499) + 65524))));
                            }
                        }
                    }
                    arr_78 [1] [1] |= 1656035627;
                    var_61 = -var_16;
                }
            }
        }
    }
    var_62 = (max(var_62, ((((max(0, 45340))) && (((11229798140708495092 && 2638931669) && 0))))));
    /* LoopNest 3 */
    for (int i_25 = 0; i_25 < 14;i_25 += 1)
    {
        for (int i_26 = 0; i_26 < 1;i_26 += 1)
        {
            for (int i_27 = 1; i_27 < 10;i_27 += 1)
            {
                {
                    var_63 = (min(var_63, ((((45329 + 16053924515759281323) > (((1 ^ (arr_82 [6])))))))));
                    var_64 = (max(var_64, (((var_15 ? (((((~var_6) > (min(58215, var_15)))))) : (arr_85 [i_25] [i_26] [1] [6]))))));
                }
            }
        }
    }
    var_65 = var_18;
    #pragma endscop
}
