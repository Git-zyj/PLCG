/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_14 [i_1] [i_3] [i_1] [i_1] = 2;
                            var_12 *= 6;
                        }
                    }
                }
                arr_15 [i_0] [i_1] [i_1] = 4294967280;
                var_13 = -936472001;
                arr_16 [i_1] [i_1] = 18446744073709551612;
            }
            arr_17 [i_0] [i_1] [i_1] = (max((min(((max((arr_6 [i_1] [i_0] [i_1]), (arr_0 [i_0])))), (min(var_7, (arr_8 [i_1] [i_1]))))), (min((min(4, 18446744073709551591)), (min(var_1, (arr_1 [i_0])))))));
            var_14 = (max(var_14, (max(((min((max(4294967295, var_8)), (max(4294967293, 251))))), (max((min(var_1, (arr_13 [i_0] [i_0] [i_0] [i_1] [i_1]))), (min(var_10, (arr_5 [i_0] [i_0] [i_0] [i_1])))))))));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_15 = (max((min(((max((arr_6 [i_5] [i_5] [i_5]), (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))), (min((arr_6 [i_5] [i_0] [i_5]), var_10)))), (min((min((arr_3 [i_5]), var_1)), ((min(4294967287, (arr_1 [i_0]))))))));
            var_16 = (min((min((min((arr_7 [i_5] [i_5] [i_5] [i_0] [19] [i_5]), (arr_4 [i_5]))), (max(4294967287, (arr_4 [i_5]))))), (min(((min(8, 15))), (max(386699192, (arr_7 [i_0] [i_5] [i_5] [i_5] [i_5] [i_5])))))));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_25 [i_0] [i_6] [i_6] = (max((min(((max(4100192606, 21))), (min(var_3, var_4)))), (max((max(var_2, (arr_13 [i_6] [i_0] [i_0] [i_0] [i_0]))), (max(6922035993656945278, (arr_11 [i_0] [i_0] [i_0] [i_0] [i_6])))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            var_17 = 8191;
                            var_18 = (min(var_18, 14));
                            var_19 = (min(var_19, 14));
                            var_20 = 21;
                            var_21 = 193;
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_22 |= (min(((min(((max(8, var_5))), (min(8168, (arr_2 [i_0] [i_6] [i_7])))))), (min(((min((arr_35 [i_0] [i_7]), var_11))), (min(var_2, (arr_28 [i_0] [i_0])))))));
                            arr_36 [i_0] [i_6] [i_0] [i_8] [i_8] [i_10] [i_10] = min((max((min((arr_18 [i_10] [i_8] [i_0]), var_3)), ((max(var_4, 152857722))))), (min((max((arr_2 [i_8] [i_7] [i_8]), (arr_3 [i_8]))), (max(201326592, (arr_24 [i_8]))))));
                        }
                        for (int i_11 = 4; i_11 < 20;i_11 += 1)
                        {
                            var_23 = (min((max((min((arr_5 [i_8] [i_7] [i_8] [i_11]), var_7)), ((min((arr_24 [i_6]), 171204958))))), (min(((min((arr_10 [i_0] [i_6] [i_7] [i_8] [i_0]), var_6))), (min(var_6, var_9))))));
                            var_24 = (max((max((min(var_4, 729592179077959365)), ((min(var_0, 1313426378))))), (max((min(var_8, var_9)), ((max(13, 171204963)))))));
                        }
                        arr_39 [i_8] [i_7] [i_6] [i_6] [i_6] [i_0] = (min((min((min(var_5, 1150807602)), (min((arr_34 [i_8]), 4294967288)))), (max(((max((arr_24 [i_6]), -171204955))), (min((arr_7 [i_0] [i_6] [i_7] [i_8] [i_0] [i_0]), var_0))))));

                        for (int i_12 = 0; i_12 < 21;i_12 += 1)
                        {
                            var_25 = min((min((min(var_4, (arr_9 [i_12] [i_8] [i_8] [i_8] [i_8] [i_8]))), (min((arr_38 [i_0] [i_6] [i_7] [i_8] [i_12]), var_11)))), (min((max(4294967288, (arr_29 [i_0] [i_6] [i_7] [i_12]))), (max(1150807611, 1150807589)))));
                            var_26 ^= min(((min((max(3144159707, 1587895848)), (min(var_6, 1952510971))))), (min((min(var_10, var_7)), (min(var_10, (arr_26 [i_12]))))));
                            var_27 = min(((min((max(171204940, 386699191)), (min(3144159694, 386699192))))), (min(((max(1150807604, 3144159731))), (min(var_2, 1300762917)))));
                            var_28 = (min((max(((min(171204958, var_4))), (max(var_2, var_0)))), (max((min(var_3, 2994204389)), ((min(171204964, 2994204388)))))));
                        }
                        arr_43 [i_0] [i_0] [i_7] [i_8] = max((max(((max(10, var_5))), (min(var_4, (arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (min((min(1150807561, 171204944)), (max(var_8, 171204954)))));
                    }
                }
            }
            var_29 = max(((min((min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_19 [i_0] [i_6]))), (min(171204960, var_11))))), (min(((min((arr_35 [i_6] [i_0]), (arr_32 [2] [i_6] [i_6] [i_0] [i_0] [i_0])))), (min(18446744073709551615, (arr_1 [i_6]))))));
        }
        for (int i_13 = 4; i_13 < 20;i_13 += 1)
        {
            var_30 = (max(((min((min((arr_34 [i_0]), (arr_11 [20] [i_0] [i_13] [i_13] [i_13]))), (min((arr_12 [i_0] [i_13] [i_13] [i_13] [i_13 + 1]), 171204951))))), (max((max(var_10, (arr_40 [i_0] [i_0] [i_0] [i_13] [i_13] [i_13]))), (max((arr_26 [i_0]), (arr_45 [i_0] [i_0])))))));
            var_31 += (max((max((max(var_10, (arr_29 [i_0] [i_0] [i_13] [i_13]))), (min(var_1, (arr_33 [i_0] [i_0] [i_0]))))), ((min((max(246, (arr_26 [i_13]))), (min(1404342418, 171204948)))))));
        }
        var_32 -= min((min(((max(2693674764, var_4))), (max(16768503050405139327, 3144159694)))), (min((min(480304240, 2495295473985832630)), (min((arr_45 [i_0] [i_0]), var_1)))));
    }

    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        arr_52 [i_14] = min((min(((min(var_8, var_4))), (max(18446744073709551586, 16768503050405139305)))), ((max((max(2994204380, var_8)), (min((arr_46 [i_14] [i_14]), 2994204382))))));
        var_33 = (min(var_33, ((max((min((max(var_7, var_7)), (max(var_7, (arr_4 [10]))))), ((min((max((arr_7 [i_14] [i_14] [i_14] [i_14] [i_14] [4]), var_4)), (min(var_5, (arr_27 [i_14])))))))))));
    }
    #pragma endscop
}
