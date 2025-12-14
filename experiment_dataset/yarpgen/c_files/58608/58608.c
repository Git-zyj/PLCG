/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (-32767 - 1)));
    var_14 = 0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (min(var_15, ((((arr_1 [i_0] [i_0]) ? ((((1746092113096293597 ? var_9 : 1746092113096293597)) << (((min(var_11, (arr_1 [i_0] [i_0]))) + 1792531346033830778)))) : ((~(arr_1 [i_0] [i_0]))))))));
        var_16 = (max(var_16, ((max(((max(75, var_12))), -6563924183445595219)))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                arr_6 [i_0] = 0;
                var_17 *= (min((min(((114 ? 18446744073709551612 : var_1)), (arr_0 [i_2]))), ((min((arr_4 [i_1]), 125)))));
                var_18 = (-32703 || 9223372036854775807);
                var_19 = (~5047607120136544658);
                var_20 &= ((var_7 ? var_3 : (((((arr_5 [i_0] [i_1] [i_2 - 1] [i_1]) < 0))))));
            }

            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                arr_9 [i_0] [i_1] [i_3 - 1] [i_3 + 1] = var_9;
                var_21 = (min(-9202217770514751045, (max(-1, (arr_2 [i_3 + 2] [i_3])))));
                var_22 = (min(-1, (((arr_5 [i_3] [i_3 + 2] [i_3 + 2] [i_0]) ? (arr_5 [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_0]) : (arr_5 [i_3] [i_3 + 2] [i_3 + 2] [8])))));
            }
        }
        var_23 = ((40 ? ((-(((arr_2 [i_0] [5]) + 1)))) : 2983256224));
    }
    var_24 = var_4;
    #pragma endscop
}
