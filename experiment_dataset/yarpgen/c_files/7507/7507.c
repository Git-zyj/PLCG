/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [17] [22] = (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 = var_12;

            for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
            {
                arr_11 [i_0] = ((-(arr_3 [i_2 + 1])));
                arr_12 [i_2 + 2] [22] [i_0] = (~-27792);
                arr_13 [i_0] [i_0] [i_2] [i_2 + 2] |= (((arr_9 [i_1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) / (arr_9 [i_1] [i_2 + 2] [i_2] [i_2])));
                var_14 = (!27791);
            }
            for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
            {
                arr_17 [i_0] [i_0] [i_3] [1] = -27782;
                arr_18 [i_3] [i_3] [i_3 + 1] = ((arr_6 [i_3 - 1]) >> (((arr_0 [i_3 + 2]) - 7697356952500238474)));
                arr_19 [8] [22] [i_3] = ((1 / ((var_5 / (arr_2 [i_0])))));
                var_15 = (arr_15 [i_3] [i_3 + 2] [i_3 - 1]);
            }
            for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
            {
                arr_24 [i_4] = ((!(((27782 ? var_7 : -22266)))));
                var_16 = ((32 ? ((20890 ? -27782 : (arr_15 [2] [i_1] [12]))) : 27782));
            }
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                arr_27 [i_5] [i_5] = (((arr_3 [i_5]) & (arr_15 [i_0] [i_1] [i_5])));
                arr_28 [i_5] [i_0] [i_5] = ((var_7 ? (arr_15 [21] [i_5 + 2] [i_0]) : (arr_15 [i_0] [i_5 + 2] [i_5 + 2])));
            }
            var_17 -= (((arr_0 [i_0]) ? ((((arr_22 [i_0]) + (arr_22 [i_0])))) : ((var_11 ? var_6 : -2147483633))));
        }
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {

            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                arr_36 [i_0] [i_7 + 4] = 41645;
                arr_37 [i_0] [i_6 + 1] [i_6 + 1] = ((+(((arr_14 [i_0] [i_6] [1] [i_0]) ? (arr_22 [i_0]) : (arr_8 [13] [13])))));
            }
            for (int i_8 = 3; i_8 < 21;i_8 += 1)
            {
                var_18 = 255;
                var_19 -= var_2;
                var_20 = (((arr_14 [i_8] [i_8 - 3] [i_8 + 2] [i_8 - 2]) >> (((arr_34 [i_8] [i_8 - 3] [i_8] [22]) - 144))));
            }
            arr_41 [i_6] [5] = (((arr_29 [i_0] [i_0] [i_6]) & 0));
        }
        var_21 = (((arr_34 [i_0] [i_0] [i_0] [i_0]) ? (arr_38 [i_0] [8]) : (arr_38 [i_0] [2])));
    }
    var_22 |= var_8;
    #pragma endscop
}
