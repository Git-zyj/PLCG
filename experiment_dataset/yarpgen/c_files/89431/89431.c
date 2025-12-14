/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((max(((var_16 ? var_12 : var_0)), (var_12 < var_5))), ((((10772446377620034735 ^ 1050894127777235127) == var_5)))));
    var_18 = (((min(var_9, ((var_13 ? 4294967295 : var_11)))) * ((((((var_15 ? 56 : -50))) ? ((var_6 ? var_13 : 971031887)) : -var_16)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_19 = (min(var_19, var_0));
        arr_2 [i_0] = (~(((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 = ((var_16 ? (((-54 ? 54 : var_14))) : ((var_13 ? ((var_8 ? var_7 : var_3)) : var_8))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_21 = ((((((var_0 ? (arr_7 [i_2] [i_2] [i_1]) : var_6)) / ((((arr_3 [i_1] [i_2]) ? 255 : var_0))))) / (min((arr_4 [i_2] [i_1]), 8374418125580003082))));
            arr_8 [i_2] = (max((-50 < var_8), 0));
            var_22 = ((!((((arr_7 [i_1] [i_2] [i_2]) ? (arr_7 [i_1] [i_2] [i_2]) : ((var_4 ? (arr_6 [i_2] [i_1]) : var_13)))))));
        }
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            var_23 = (min(var_13, var_14));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_24 = var_3;
                        var_25 = (arr_15 [i_3] [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 1]);
                        arr_17 [i_3] = ((((max(((max(var_14, var_0))), (min(var_13, (arr_4 [i_4] [i_4])))))) ? ((((max(var_12, (arr_14 [i_5] [i_4] [i_3] [i_1])))) ? var_5 : ((((arr_12 [i_1] [i_4] [i_5]) ? var_16 : 1))))) : var_14));
                    }
                }
            }
            arr_18 [i_1] [i_1] = (((min((((arr_10 [i_3] [i_1]) ? var_7 : var_2)), ((max(var_15, var_9))))) == ((((arr_4 [i_3 - 1] [i_1]) ? (arr_4 [i_3] [i_1]) : (arr_15 [i_3] [i_3] [i_3 - 1] [i_3] [i_1]))))));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_26 = ((((~((min((arr_4 [i_6] [i_1]), var_11))))) < -54));
            var_27 = (max((((arr_19 [i_1] [i_6]) ? (arr_15 [i_1] [i_6] [i_1] [i_6] [i_6]) : (arr_10 [i_1] [i_6]))), ((min(var_12, (arr_10 [i_1] [i_1]))))));
            arr_21 [i_1] [i_6] = (!((max(511, (491134414 && 251)))));
        }
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            arr_25 [i_7 + 3] [i_1] = arr_13 [i_7 - 1] [i_1] [i_7] [i_1];
            var_28 ^= (((((~(arr_6 [i_1] [i_7 + 3])))) ? (((arr_6 [i_7] [i_7 + 3]) ? (arr_6 [i_7] [i_7 + 3]) : (arr_6 [i_7 + 3] [i_7 + 3]))) : (((max(var_16, (arr_23 [i_7] [i_7 + 3])))))));
            arr_26 [i_1] [i_7] [i_1] = (((((49 + ((min(var_4, var_1)))))) ? (((((254 ? -3 : 237))) ? (((var_14 == (arr_16 [i_7] [i_7] [i_7] [i_1] [i_1] [i_1])))) : ((var_11 ? var_10 : (arr_20 [i_1]))))) : ((((!(arr_13 [i_7] [i_7 + 3] [i_1] [i_1]))) ? (((!(arr_22 [i_1] [i_1])))) : (var_14 == var_15)))));
            arr_27 [i_1] [i_1] [i_1] = var_8;
            var_29 = ((-1435859542370284335 ? 0 : ((-var_3 * (arr_10 [i_1] [i_7 + 2])))));
        }
    }
    for (int i_8 = 2; i_8 < 15;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_30 = (max(var_7, ((((var_13 * (arr_10 [i_9] [i_10])))))));
                    arr_37 [i_8] [i_8] [i_8] [i_8] = (((((arr_34 [i_8] [i_8] [i_8 - 2]) ? (arr_34 [i_8] [i_8] [i_8 + 1]) : var_1)) & ((-((max(1, (arr_13 [i_9] [i_9] [i_9] [i_9]))))))));
                }
            }
        }

        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            arr_40 [i_8] [i_8] [i_11] = (max((arr_6 [i_8] [i_8]), 32767));
            var_31 = ((var_12 ? 92 : var_8));
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            var_32 = (arr_29 [i_8]);
            var_33 = (((((-(((35483 > (-9223372036854775807 - 1))))))) ? ((max(((var_3 ? (arr_28 [i_8] [i_12]) : var_10)), (arr_36 [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 1])))) : (arr_7 [i_8] [i_8] [i_12])));
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 15;i_15 += 1)
                {
                    {
                        var_34 &= (max(((var_4 ? (max((arr_10 [i_8] [i_8]), 4294967295)) : var_2)), var_1));
                        var_35 = (-var_2 / 9223372036854775807);
                    }
                }
            }
            var_36 -= ((~(((((max(45709, 22))) < 1)))));
        }
        for (int i_16 = 1; i_16 < 13;i_16 += 1)
        {
            arr_55 [i_8] = var_0;
            /* LoopNest 2 */
            for (int i_17 = 2; i_17 < 12;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 16;i_18 += 1)
                {
                    {
                        var_37 = ((~(((~var_4) ? 9 : (max(-9223372036854775784, var_7))))));
                        var_38 = ((-(max(6102492815189827939, 7357442093335476608))));
                        arr_61 [i_18] [i_8] [i_18] [i_18] = (((((~(arr_41 [i_8] [i_8] [i_8])))) == (min(var_5, (arr_51 [i_8] [i_8] [i_8] [i_8 - 2] [i_17 + 4] [i_17])))));
                        arr_62 [i_8] [i_8] = (((((((((arr_30 [i_8]) ? (arr_52 [i_8] [i_8] [i_18]) : 4))) ^ (min(var_9, var_6))))) ? (((var_11 ? ((((arr_35 [i_17]) >= var_7))) : var_13))) : (((arr_59 [i_8] [i_8] [i_8 + 1] [i_17]) ? (max((arr_38 [i_8] [i_16] [i_8]), (arr_29 [i_8]))) : var_6))));
                    }
                }
            }
            var_39 = ((~((((min((arr_33 [i_8] [i_8] [i_16]), (arr_29 [i_8]))) > 8374418125580003082)))));
        }
    }
    #pragma endscop
}
