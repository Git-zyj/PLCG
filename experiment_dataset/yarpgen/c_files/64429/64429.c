/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (max((-1 || 3723975473094959554), (0 < 206802440)));
        var_17 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_18 = ((-((min(144, 0)))));
            var_19 = ((0 || ((max((arr_4 [i_0] [i_1]), (arr_0 [9]))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_20 &= -1;
                    var_21 = 4;
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_22 = (arr_10 [i_0] [i_0] [i_0] [2]);
                    var_23 = (~((((arr_12 [1] [i_1]) || 1583992392796829276))));
                }
                arr_13 [11] [i_1] [i_1] [2] = (arr_2 [i_0]);
            }
            var_24 = (min((10206433665307259486 | var_2), 1583992392796829277));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_23 [i_6] = (max(var_10, -206802440));
                            var_25 *= (min(119195162, var_2));
                            var_26 += min(((min((arr_8 [i_0] [8] [i_6] [i_7]), (arr_11 [i_0] [i_0] [i_0])))), (min(((1373494131 / (arr_0 [0]))), (arr_18 [i_1] [i_1] [i_6] [i_7]))));
                            var_27 = (min(var_27, ((((((max((arr_21 [i_0] [i_1] [i_5] [4] [i_1] [i_1]), (arr_1 [i_7]))) >> (((var_8 - 112) + 172)))) / 60)))));
                        }
                        var_28 = 12321872988143050302;

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_29 = (((arr_2 [i_6]) << (34250 - 34233)));
                            var_30 = (max(var_30, 1373494132));
                            var_31 = (arr_9 [13] [i_1] [i_5] [i_6]);
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            var_32 = 144;
                            arr_28 [i_0] [i_5] [i_5] [10] [i_6] = 0;
                            var_33 = arr_4 [9] [9];
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            arr_33 [i_0] [11] [i_1] [0] [4] [10] [i_6] = 0;
                            arr_34 [i_10] [8] [i_6] [i_1] [i_6] [i_0] [i_0] = 3968;
                            var_34 = 9107238394245945225;
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_35 = (min(var_12, (((((min(var_15, -206802438)) + 2147483647)) << (var_10 - 1)))));
                            var_36 -= (((((((max(var_11, (arr_24 [6] [6] [i_1])))) - (min((arr_12 [12] [12]), 206802448))))) || (((arr_12 [i_0] [i_0]) <= (arr_27 [i_0] [i_1] [i_5] [i_6] [i_11])))));
                            var_37 = 16811572502038893712;
                        }
                        var_38 = (max((!var_12), ((!(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [12])))));
                    }
                }
            }
        }
        var_39 = 97;
    }
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        arr_39 [i_12] [1] = arr_38 [i_12];
        var_40 = (arr_38 [i_12]);
    }
    var_41 = (min(var_41, var_3));
    #pragma endscop
}
