/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = (((((1660714188 ? (arr_0 [i_0] [i_0]) : 97))) ? var_5 : (((1023 || (arr_1 [i_0]))))));

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_13 ^= ((-((((min((arr_2 [i_0] [i_0] [i_0]), var_5))) ? (arr_1 [i_0]) : ((max(1, (arr_0 [i_0] [i_1 - 2]))))))));
            var_14 = var_0;
            var_15 = 157;
            var_16 = ((((+(((arr_0 [i_0] [i_1]) ? var_8 : (arr_2 [i_0] [i_1] [i_0]))))) == ((-((max(144, 1)))))));

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_17 = max(var_1, var_1);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((max((arr_5 [i_0] [i_1 - 2]), ((((112 > (arr_1 [i_0]))))))))));
                            var_19 += 1;
                            var_20 = ((-(((arr_2 [i_1 - 3] [i_1] [i_2]) ? (arr_2 [i_1 - 3] [i_1 - 3] [4]) : 6263010803767387957))));
                        }
                    }
                }
                var_21 = 1546618041;
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_22 = (arr_6 [i_0] [i_5] [i_5]);
            var_23 = (((arr_2 [i_0] [0] [i_5]) >= (arr_11 [i_0] [i_5] [i_5])));
            var_24 = ((((arr_6 [i_0] [i_0] [i_5]) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) : 80)) * (162 ^ var_5));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 15;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        var_25 = (arr_4 [i_0] [i_6] [i_6] [2]);
                        var_26 = ((-31 == ((var_9 << (((((arr_19 [i_0]) + 1216050508)) - 7))))));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_27 = ((-(arr_26 [i_7 + 1] [i_7 + 1] [i_7] [9] [i_7 - 4])));
                            var_28 = ((arr_24 [i_0] [i_7 - 4] [i_7 - 4]) ? (arr_0 [i_7 - 1] [i_6]) : 145);
                            var_29 = var_4;
                            var_30 ^= (arr_18 [i_6] [14] [i_7 - 2]);
                        }
                        for (int i_11 = 1; i_11 < 15;i_11 += 1)
                        {
                            var_31 |= (var_3 >> -var_8);
                            var_32 = (-((+((((arr_27 [6] [i_0] [i_0] [6] [i_7] [i_9] [i_11]) >= 157))))));
                            var_33 = (arr_29 [i_7] [i_7]);
                            var_34 = -var_6;
                        }
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            var_35 = ((-(((arr_23 [i_0] [i_6] [i_7] [i_9]) ? (arr_23 [i_0] [i_9] [i_0] [1]) : (arr_31 [i_6] [i_6] [10] [9] [i_7 - 2] [9] [6])))));
                            var_36 = (arr_27 [i_12] [i_12] [i_12] [i_12] [i_12] [i_0] [i_0]);
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            var_37 = var_2;
                            var_38 = ((~(((var_7 == (arr_36 [i_6] [i_6] [i_6] [i_9] [13]))))));
                        }
                        var_39 = (((((~(~196)))) ? ((~(((((arr_35 [i_7] [i_6] [i_7]) + 2147483647)) << 0)))) : -32747));
                    }
                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 15;i_14 += 1) /* same iter space */
                    {
                        var_40 = var_2;
                        var_41 = ((((((arr_5 [9] [i_6]) * (arr_39 [i_0] [13] [i_0])))) ? (110 - 1) : 4773974591702822500));
                    }
                    for (int i_15 = 1; i_15 < 15;i_15 += 1) /* same iter space */
                    {
                        var_42 = var_3;
                        var_43 &= ((((var_3 << (((arr_31 [i_0] [0] [0] [i_6] [i_7 - 3] [i_15] [1]) - 104))))) ? (min((min(16587814158929409671, (arr_22 [i_0] [i_6] [i_6] [1]))), ((max(var_10, (arr_34 [i_0] [i_6] [8] [i_6] [i_15 + 1])))))) : (((((-256 && (arr_19 [i_0])))))));
                    }
                    var_44 = ((1 ? 52 : -1390455794));
                }
            }
        }
    }
    var_45 = max(127, -var_0);
    var_46 = 1;
    #pragma endscop
}
