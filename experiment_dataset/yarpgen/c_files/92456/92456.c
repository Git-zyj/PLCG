/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [15] = (((min((arr_0 [i_0]), (arr_1 [i_0])))) ? (var_5 / 9223372036854775790) : (((9223372036854775807 / 32761) ^ (((1 >> (var_7 - 27191)))))));
        arr_4 [i_0] = (1 >> 1);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((((max(4193280, (arr_1 [10])))) ? (arr_5 [i_1]) : (4 | 1125899906318336))));
        arr_8 [i_1] = (((18446744073709551612 ? 1 : (arr_6 [i_1]))) >= (arr_5 [i_1]));
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_12 [i_2] = (~(arr_2 [i_2]));
        arr_13 [i_2] [i_2] = ((9223372036854775807 ? 4194303 : 121));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        arr_18 [i_3 - 1] = (9223372036854775807 >= -268435456);
        arr_19 [i_3 - 1] [i_3 - 1] = ((+(((65527 / 110) * -65519))));
        arr_20 [1] = ((((((((arr_14 [i_3]) ^ 16380)) + 2147483647)) >> (((arr_17 [i_3]) ? 4 : var_12)))) >> (((min(-1, (max(66584576, 1)))) - 66584565)));
        arr_21 [1] [i_3] = ((+(((arr_14 [i_3 - 1]) ? (max(1, (arr_16 [i_3 - 1]))) : (((1 ? (arr_14 [9]) : (arr_15 [i_3]))))))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_31 [i_6] [i_6] [i_5] [i_6] = (arr_11 [10]);
                        arr_32 [i_7] [0] [0] [0] [i_4] = (!2147483647);
                    }
                }
            }
        }
        arr_33 [i_4] = (((((8388608 ? ((min(1, var_3))) : 1))) ? ((1 ? (((var_10 ? (arr_30 [i_4] [i_4] [i_4] [i_4]) : var_0))) : (arr_10 [7]))) : (arr_30 [i_4] [8] [13] [1])));
        arr_34 [1] = ((((-((4294967295 ? 1024 : (arr_9 [i_4]))))) >= (((!(((9 ? 2147483647 : 14))))))));
    }
    #pragma endscop
}
