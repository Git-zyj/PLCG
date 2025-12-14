/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_4 ^ ((((min(1898990365, var_9))) ? var_3 : ((var_2 ? -12590 : var_4))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 *= ((+(min(((max((arr_2 [1]), var_1))), -2104880852))));
        var_14 = (min(((var_3 * (arr_2 [i_0]))), ((max((var_7 != 12592), (arr_0 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_15 = (arr_3 [10]);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 = (arr_6 [i_1]);
            var_17 = (!((max(-12593, (arr_5 [i_1] [1])))));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_18 = ((+(((-12591 + 2147483647) << (1950230807 - 1950230807)))));
            arr_13 [i_1] = max(((min((arr_4 [i_1 + 3]), var_1))), (((!var_1) ? (min(-12592, var_11)) : var_0)));
        }
        var_19 = (~(arr_9 [8]));
        arr_14 [9] [i_1] = (((((~var_2) ? (((arr_3 [i_1]) >> var_0)) : (arr_11 [i_1 + 2] [i_1] [1])))) ? -2104880852 : ((-(arr_7 [1] [i_1 + 1]))));
    }
    var_20 = (max(var_1, var_4));
    #pragma endscop
}
