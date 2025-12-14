/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_9 [i_1] &= (max(48495, -1811837770));
                        var_14 = 21802;
                        arr_10 [i_0] [2] [12] [2] [i_2] = 16910005226478133772;
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_13 [4] [i_0] [i_1] [i_2] [i_4] = 1085663369;
                        arr_14 [i_0] [i_2] [i_2] = (min((min(-1949407011, 2715739700369894038)), -734968661));

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_18 [i_0] [11] [12] [i_5] [i_1] [0] [i_2] = 4294967295;
                            arr_19 [i_5] [i_2] [i_4] [i_2] [i_2] [i_0] = -1811837781;
                            var_15 = 54827;
                            var_16 = (max(var_16, 1));
                            arr_20 [i_2] = 4161536;
                        }
                        arr_21 [i_2] [i_1] [0] [i_4] = 1811837769;
                    }
                    var_17 = -10776;
                    var_18 = (max(25, -3047));
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_25 [i_6] = -35;

        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
        {
            arr_30 [10] [i_6] = 63;
            var_19 = 1811837755;
            var_20 ^= 2147483647;
            var_21 += 144;
            arr_31 [i_6] [i_6] = 161;
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {
            arr_35 [i_6] [i_8] [11] = 1;
            arr_36 [i_6] [i_6] = 19523;
            var_22 = -39;
        }
        for (int i_9 = 2; i_9 < 16;i_9 += 1)
        {
            var_23 = 1;
            arr_39 [i_9] [i_6] [i_9] = 49567;
            arr_40 [i_9] = max(703943638, 13492);
        }
        for (int i_10 = 3; i_10 < 17;i_10 += 1)
        {
            var_24 = (max(var_24, 10068));
            var_25 = (min(786432, 26295));

            for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 2; i_12 < 17;i_12 += 1)
                {
                    arr_49 [i_12] = -1134924362;
                    arr_50 [1] [i_11] [i_10] [i_10] [i_6] = (min((min(-1, 1441116741)), -1));
                    arr_51 [i_6] [0] [i_11] [i_12] [i_12] = 48221;
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                {
                    var_26 = -16;
                    var_27 &= -32760;
                    arr_54 [i_11] [i_6] = -6890306176655595085;
                }
                for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                {
                    var_28 *= (min(1152739021585942818, 252));
                    var_29 = (max(-105, -1));
                }
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    var_30 = (max(var_30, 13492));

                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        arr_63 [i_6] [i_16] = 45343;
                        arr_64 [i_6] [i_6] [16] [i_11] [i_11] [i_11] [8] = 5463684126567872480;
                    }
                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        arr_68 [i_11] [i_15] = -5463684126567872477;
                        arr_69 [i_6] [i_6] [i_6] [i_6] [i_6] = 13701;
                    }
                    var_31 = 246;
                }
                var_32 = (max(var_32, 8482));
                var_33 = (max(var_33, 3259870200));
                var_34 = (min(var_34, ((max(46316, -1)))));
            }
            for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
            {
                var_35 = (max(var_35, ((min(3131991917, 899673667)))));
                arr_72 [i_18] [i_10] [i_6] = (max(-1811837781, (max(1, 4355469862146385613))));

                for (int i_19 = 1; i_19 < 16;i_19 += 1) /* same iter space */
                {
                    var_36 = 31115;
                    arr_76 [i_6] [5] [14] [i_10] [15] [9] = 12057;
                }
                for (int i_20 = 1; i_20 < 16;i_20 += 1) /* same iter space */
                {
                    arr_80 [i_6] [i_10 - 1] [16] |= 1329;
                    var_37 = 6139297808065086709;
                }
            }
            arr_81 [i_10] [7] [i_6] = (max(((min(3259870200, 41258))), 13300820953243527834));
            arr_82 [15] [i_10 + 1] [i_6] = -32748;
        }
        var_38 = 65535;
    }
    for (int i_21 = 0; i_21 < 21;i_21 += 1)
    {
        arr_85 [i_21] = 91;
        var_39 &= 0;
        arr_86 [i_21] [i_21] = -892367984;
        var_40 = 6139297808065086709;
    }
    var_41 = (max((min((max(88816746, -1)), 53478)), ((max(242, 12)))));
    #pragma endscop
}
