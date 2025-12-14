/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((!(((2059925183 ? 127 : 2235042113)))));
        arr_2 [i_0] = (2059925182 & -117);
        var_13 = (min(var_13, ((((((arr_0 [i_0]) ? (arr_1 [5]) : 18446744073709551608)) - (((~(2235042122 ^ 0)))))))));
        var_14 = ((~(2235042114 % 8)));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = (arr_1 [i_0]);
            var_15 = (max(var_15, ((((((((arr_3 [i_0] [i_0]) ? (arr_4 [i_0] [i_1]) : 127)))) | (arr_3 [i_0] [i_0]))))));
            arr_6 [i_0] [i_0] = (arr_0 [i_1]);
        }
    }
    var_16 = (((var_11 - var_11) == ((((1 ? 167 : var_6)) + -8255862493435361885))));
    var_17 = (max(2059925191, 48518));
    #pragma endscop
}
