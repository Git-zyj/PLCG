/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((min(((min(var_11, -98))), ((8274708620862831668 ? 62 : 1281261581)))), ((((((var_9 ? var_2 : var_7))) ? 62743 : 1866760503334357943)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (((((-65 ? 9223372036854775807 : -1057608084967960516))) && ((!(arr_2 [i_0])))));

        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_1] [i_1] = (((((arr_5 [i_1 - 4]) - (arr_5 [i_1 - 1]))) != (((max(19473, var_9))))));
            arr_8 [i_0] [i_0] [6] &= (~var_8);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_14 = arr_10 [i_0] [i_0];
            var_15 = ((46063 ? (116 / var_7) : (arr_1 [i_0])));
            var_16 = (max(var_16, 17));
        }
        var_17 = ((!((((arr_9 [i_0] [i_0] [3]) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_5 [i_0]))))));
        var_18 &= 51833;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_13 [i_3] = 7788764973602571969;
        var_19 = (max(var_19, var_5));
        var_20 = (max(var_20, ((max(((min(((min(36226, 6))), -1936785746))), ((var_5 ? 64 : -1530821010100508440)))))));
        arr_14 [i_3] [i_3] = ((((((min((arr_10 [5] [i_3]), 21)))) - (min((arr_12 [i_3] [i_3]), 3348551117)))));
    }
    #pragma endscop
}
