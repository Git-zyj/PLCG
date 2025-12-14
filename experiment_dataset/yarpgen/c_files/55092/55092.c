/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = ((((((min((arr_7 [i_0]), -9223372036854775788)) > (arr_2 [i_0 - 2])))) >> ((244 / ((max(var_11, (-9223372036854775807 - 1))))))));

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_0 + 1] [i_1] [i_1] [i_1] = var_1;
                        arr_12 [13] [i_1] [5] [i_3] = 3927313005539126546;
                        arr_13 [i_3] [i_1] [i_3] [i_3] = (max(-852701660, (503753965 - 126)));
                        arr_14 [i_1] = (((-9223372036854775807 - 1) / 13934));
                        var_14 = (min(var_14, (arr_7 [i_0 + 1])));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_15 = (((((arr_1 [13]) ^ (max((arr_3 [i_1] [i_1] [i_2]), var_0)))) << (var_10 - 1849386290876775683)));
                        arr_19 [i_0] [i_0] [i_1] [18] [i_2] [i_1] = ((+(((arr_9 [i_0 + 1] [4] [i_0] [i_0 - 1]) ? (arr_4 [i_0 - 1] [i_1]) : (arr_9 [4] [i_1] [0] [i_4])))));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        arr_23 [i_1] = max((((4294967283 && (arr_9 [5] [i_1] [i_1] [i_1])))), (((arr_9 [i_5] [17] [i_1] [i_0 + 2]) ? var_2 : (arr_9 [i_0] [i_1] [i_2] [i_2]))));
                        var_16 &= (((((max((arr_1 [i_0]), 7572341757716474535)) / (arr_20 [i_0 - 2] [i_2]))) - ((var_11 ? ((168 ? 9223372036854775807 : -5225335201665988349)) : (3927313005539126546 / var_11)))));
                    }
                }
            }
        }
        var_17 = var_11;
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_18 = (var_6 > var_9);
        arr_26 [15] [i_6] = 56;
    }
    var_19 &= 549755813888;
    #pragma endscop
}
