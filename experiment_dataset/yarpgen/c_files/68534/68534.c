/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((((var_9 != ((max(var_3, var_11))))) ? var_9 : var_12));
    var_15 = (-32766 & 55979);
    var_16 = var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (arr_1 [i_0] [i_0]);
        var_18 = ((21 - (((arr_1 [i_0] [i_0]) + -13110))));
        arr_2 [i_0] = (((-(min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_19 = (((arr_1 [i_0] [i_0]) ? (arr_1 [21] [i_1]) : (arr_3 [i_1] [i_0])));

            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_20 = ((~((-26 & (arr_4 [i_1] [i_4])))));
                        var_21 ^= (max(47, 209));
                        arr_14 [i_0] [1] [i_2 - 2] [1] [i_2 - 2] [i_0] [i_0] = (arr_6 [i_0] [i_0] [i_0] [i_0]);
                        arr_15 [i_3] = (arr_1 [i_1 + 1] [i_1 + 1]);
                    }
                    var_22 = var_1;
                }
                arr_16 [i_0] [i_1 - 1] [8] = var_10;
                var_23 = (-69 + (min(((3174000775 ? 46 : var_0)), var_7)));

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_24 = (3174000775 ^ 8744);
                    arr_19 [i_5] [i_2 + 1] [i_1] [i_0] [i_0] = var_13;
                    arr_20 [i_5] = var_0;
                    arr_21 [i_2] [i_0] = ((var_12 | (115 != 3643457978)));
                }
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    arr_24 [1] [i_6] [i_6 - 1] = var_12;
                    var_25 -= 7629729598503616364;
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_27 [i_7] [10] [i_2 - 1] [i_2] [4] [i_0] = (max((((29076 ? (((-1180 < (arr_17 [15] [i_1 - 1] [20] [20] [i_7])))) : -9668))), ((131071 | (min(197867818, -131072))))));
                    var_26 &= ((~((281440616972288 << (2426060214 - 2426060207)))));
                    arr_28 [8] [8] [i_7] = min((min(var_9, 134217728)), (arr_3 [i_1 + 1] [i_2 + 1]));
                }
            }
        }
        var_27 = ((var_9 >> (((((arr_23 [i_0] [i_0] [i_0]) ? 4246042826 : (arr_3 [i_0] [i_0]))) - 4246042820))));
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        var_28 -= var_2;

        for (int i_9 = 1; i_9 < 16;i_9 += 1) /* same iter space */
        {
            arr_33 [i_9] [i_9] = 1868907082;
            var_29 = -var_8;
        }
        for (int i_10 = 1; i_10 < 16;i_10 += 1) /* same iter space */
        {
            arr_38 [i_10] = 1073741823;
            var_30 = 33298;
        }
    }
    #pragma endscop
}
