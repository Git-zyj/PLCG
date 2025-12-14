/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((var_0 ^ var_10) & ((min(((min(var_1, var_2))), var_6))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 = (((arr_2 [i_1]) & (arr_2 [i_1])));
            var_13 ^= (((arr_1 [i_0]) ^ (((arr_1 [i_0]) ? (arr_6 [i_0] [i_1] [4]) : 1))));
            var_14 = (arr_5 [i_1] [15]);
        }
        arr_7 [i_0] [i_0] = ((~(min(64403, -1133))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_15 = (((arr_6 [i_2] [i_2] [16]) ? ((max((arr_8 [i_2]), (arr_6 [8] [i_2] [8])))) : -582252946));
        arr_11 [8] = (arr_2 [20]);
        var_16 = ((-(arr_2 [i_2])));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_16 [i_2] [i_2] [i_2] &= ((1 ? -117 : 582252946));
            arr_17 [4] [i_3] [i_3] = (arr_6 [i_3] [i_2] [i_3]);
            arr_18 [i_3] [i_2] [i_2] = (min(((((arr_10 [i_2]) || (arr_10 [i_2])))), ((-(arr_10 [i_2])))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_17 = (((((arr_8 [i_2]) & ((max((arr_13 [i_4] [i_4]), (arr_14 [i_2] [i_2]))))))) <= (((((arr_8 [i_2]) * 4294967288)) - (arr_15 [i_2]))));
            arr_22 [i_2] [i_2] [i_4] = (min((arr_20 [i_4] [i_4] [i_2]), (0 >= 0)));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_26 [i_2] [i_5] [i_5] = ((+(((arr_9 [i_5]) & (arr_9 [i_2])))));
            var_18 = ((((((((((arr_5 [i_5] [i_5]) && (arr_6 [i_2] [16] [i_5])))) != (0 - var_2))))) <= (max((((71 << (arr_10 [i_5])))), ((-2147483638 % (arr_3 [i_2] [i_2])))))));
            var_19 *= ((!(((arr_21 [i_2] [1] [i_2]) && ((var_2 || (arr_23 [i_2] [i_2] [i_2])))))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_20 = (arr_6 [i_6] [i_7] [i_6]);
                    var_21 = (((arr_21 [i_2] [i_2] [i_7]) ? ((15285117155993099885 - (arr_3 [i_2] [i_2]))) : ((((arr_19 [i_6]) ? (arr_8 [i_2]) : (arr_24 [i_2] [i_2]))))));
                    var_22 = (arr_23 [i_2] [i_6] [i_7]);
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    var_23 *= ((((((min(var_2, -582252941))) / ((2615812397 ? (arr_27 [4] [i_9]) : var_5)))) <= (arr_19 [i_2])));
                    var_24 = ((((max((max(var_4, (arr_2 [i_6]))), (arr_21 [i_2] [i_6] [i_6])))) % (arr_28 [i_9] [i_6])));

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_25 -= (((arr_9 [i_10]) - (((((min((arr_35 [1] [i_6] [i_7] [i_9] [i_10]), (arr_0 [i_10])))) && ((((arr_23 [i_7] [i_10] [i_10]) ? (arr_29 [i_2] [6]) : (arr_29 [0] [0])))))))));
                        var_26 = ((((((arr_8 [i_7]) % (arr_8 [i_2])))) ? (((arr_8 [i_2]) ^ (arr_8 [i_2]))) : (arr_8 [i_9])));
                    }
                }
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    var_27 = (arr_33 [i_2]);
                    arr_39 [i_2] [i_6] [i_6] = (arr_20 [i_6] [i_7] [i_7]);
                }
                arr_40 [i_2] [i_6] = var_2;
                arr_41 [i_6] [i_6] [i_6] [i_7] = (((((((((arr_25 [i_2]) ^ 63))) ? (((arr_27 [i_6] [i_6]) ? var_3 : (-2147483647 - 1))) : (((178 >= (arr_30 [i_6] [9] [0]))))))) && ((min((arr_0 [i_7]), (max(var_9, (arr_32 [i_7] [i_2] [10] [i_2] [i_2] [i_2]))))))));
                var_28 += (arr_30 [4] [i_6] [i_7]);
            }
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                arr_46 [i_6] [i_6] [i_6] = ((-(arr_24 [i_6] [i_12])));
                var_29 = (6829 / 1459551439);

                /* vectorizable */
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    arr_49 [i_6] = ((((((arr_15 [i_2]) ^ (arr_19 [i_2])))) && 3279));
                    var_30 = var_8;
                }
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    var_31 = (((((arr_33 [i_2]) << (((arr_33 [i_6]) - 2821507311)))) << (((arr_33 [i_12]) - 2821507300))));
                    arr_53 [i_6] [i_6] = var_3;
                    arr_54 [i_6] [i_6] [i_6] = ((min((((var_5 || (arr_5 [i_6] [i_6])))), 142)));
                }
                var_32 = ((((((arr_13 [i_12] [i_12]) >= (arr_28 [i_2] [i_2]))))) != var_6);
            }
            var_33 = (min(var_33, (arr_30 [1] [i_6] [1])));
        }
    }
    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        var_34 = ((((((arr_0 [i_15]) >> (16548235538376635243 - 16548235538376635218)))) & (((((arr_3 [i_15] [i_15]) != ((((!(arr_5 [2] [6])))))))))));
        var_35 = ((~401073781) ^ (arr_0 [i_15]));
    }
    var_36 = ((15 > (max(245, (min(var_3, 2147483631))))));
    #pragma endscop
}
