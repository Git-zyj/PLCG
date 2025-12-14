/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;
    var_19 |= -1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (max(var_20, 1));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [i_2] [4] = 3370941212;

                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            arr_12 [i_2] = 229780268;
                            arr_13 [6] [i_0] [i_2] [i_2] [i_3 + 1] [1] [i_4] = 1;
                            arr_14 [i_2] [i_2] [1] [i_2] [3] [5] [i_1] = 1;
                            arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = 23;
                            arr_16 [i_0] [1] [i_2] [i_2] [i_4] = 114;
                        }
                    }
                }
            }
        }
        var_21 = 1;

        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            arr_21 [i_0] = 4;
            arr_22 [i_5] [16] = 7490353136778531327;
            arr_23 [i_5] = -1878034913775439522;
            var_22 -= 3029186439;
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        arr_27 [i_6] = 1;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        var_23 = 18446744073709551612;

                        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            var_24 = 3;
                            var_25 = 9709377487712390980;
                            arr_38 [i_8] [i_6] [i_8] [i_6] [i_6] = 371393696;
                            var_26 = 218;
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            var_27 = (max(var_27, 2319385116));
                            var_28 -= 1876696006;
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                        {
                            arr_43 [1] [i_6] [i_8] [i_8] [i_8] [1] = 112;
                            arr_44 [13] [i_6] [i_7] [1] [i_6] [i_12] = 0;
                        }
                        var_29 = -20;
                        arr_45 [1] [i_6] [1] [i_8] = 76;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
    {
        var_30 = 1;
        var_31 *= 1876696006;
        var_32 = -7751496000451239352;
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                {
                    var_33 = -1465684983;
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            {
                                arr_60 [i_16] [i_18] [i_16] [i_17] = 109;
                                var_34 += 1;
                                var_35 = (min(var_35, -26491));
                            }
                        }
                    }
                    arr_61 [i_14] [i_14] [i_15] [2] = -7751496000451239352;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            for (int i_20 = 2; i_20 < 12;i_20 += 1)
            {
                {
                    arr_66 [i_20] [1] [i_20 - 1] [i_20] = -1;
                    arr_67 [8] [8] [i_20] [i_20] = 31;
                    arr_68 [i_14] [i_20] [i_20] = 1;
                    var_36 = 2;
                }
            }
        }
        arr_69 [i_14] = 1;
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            for (int i_22 = 2; i_22 < 12;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 0;i_23 += 1)
                {
                    {
                        var_37 = 249;
                        arr_80 [i_14] [i_21] [i_22] [i_14] [i_23 + 1] [i_23] = 2544401165349856292;

                        for (int i_24 = 1; i_24 < 11;i_24 += 1)
                        {
                            arr_84 [i_14] [i_14] [i_21] [i_23] [i_14] [i_14] [i_24] = 0;
                            arr_85 [i_14] [i_23] [i_23] = -1465684956;
                        }
                        var_38 = 2465086444703178637;
                        var_39 = 0;
                    }
                }
            }
        }
    }
    var_40 = 244380044;
    #pragma endscop
}
