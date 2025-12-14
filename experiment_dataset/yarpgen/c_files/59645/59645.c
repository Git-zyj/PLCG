/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_12));
    var_14 = (min(var_14, (((((((min(116, 76))) ? (var_0 || var_3) : var_2)) < (max(var_7, ((var_2 ? 0 : 0)))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (((((((var_9 ? -3595432414115694868 : (arr_0 [i_0]))) - (arr_0 [i_0])))) ? var_6 : 26326));
        arr_2 [i_0] = ((((-((1 ? (arr_1 [i_0]) : 0)))) ^ (((-10261 >= (var_6 ^ 5419645530785807135))))));
        arr_3 [i_0] = (min(4503599627369472, 0));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_16 += (min((((4294967295 ? 76 : 55))), (min(-1482358803, (min((arr_4 [i_1]), (arr_4 [i_1])))))));
        var_17 = (min((arr_5 [i_1] [i_1]), ((var_5 ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))));
        var_18 = ((max(12333, 15589330334937290767)));
    }
    var_19 = (((76 / var_8) ? var_6 : (((var_3 / 1) ? (max(-7163207439355857809, var_3)) : (65116 * 1)))));
    #pragma endscop
}
