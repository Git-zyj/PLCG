/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 14879;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((!(((18110646354277413400 ? -871580397 : 86393264)))));
        arr_4 [i_0] [i_0] &= ((65532 ? (arr_0 [i_0]) : (((max(115, -1))))));
        var_19 = ((((((max(4681895287682394231, (arr_0 [i_0]))) | 93))) ? (((arr_1 [6]) ? (min(11267839557480893039, (arr_2 [i_0]))) : (arr_0 [i_0]))) : (arr_0 [i_0])));
        var_20 = ((((min((arr_1 [i_0]), (max(167, (arr_2 [i_0])))))) && ((((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0]))))));
    }
    #pragma endscop
}
