/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [12] = ((~(min(3307114156, 1))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_18 = ((~(max(1, 1654571854))));
                        var_19 = min((((2640395442 ? (~3038494387) : ((((arr_9 [9] [9] [i_2] [9]) ? var_5 : (arr_1 [i_3]))))))), ((var_5 ? var_17 : (arr_2 [i_1 - 1] [i_0]))));
                        var_20 = (((arr_0 [i_1]) != (max(((~(arr_4 [i_1] [i_2]))), 2640395442))));
                    }
                }
            }
        }
        var_21 = (arr_7 [9]);

        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            var_22 = ((~(max(18446744073709551602, (arr_0 [i_0])))));
            var_23 = ((var_12 == (((((~(arr_1 [i_4 - 2]))) & ((~(arr_7 [i_0]))))))));
            var_24 = max(0, (var_1 | 0));
            arr_15 [i_0] [i_0] [i_4] = var_4;
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_18 [i_5] = 134152192;
        var_25 = (max(var_25, ((((arr_7 [i_5]) < (!2640395442))))));
    }
    var_26 += var_0;
    var_27 = ((((2115647119 ? 18446744073709551585 : 9223372036854775807)) & ((max(((var_8 << (var_14 - 9831269216714191538))), (var_6 >= var_2))))));
    var_28 = var_12;
    var_29 = ((var_3 ? (~0) : var_9));
    #pragma endscop
}
