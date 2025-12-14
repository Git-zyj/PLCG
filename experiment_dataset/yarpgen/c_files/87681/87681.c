/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (((((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_0] [i_0])))) ? (((((arr_3 [i_0] [i_0]) <= (arr_3 [i_0] [0]))))) : 18446744073709551615);
        var_15 = (((arr_1 [i_0]) ? ((((arr_3 [i_0] [3]) ? ((64389 >> (1691755291 - 1691755285))) : (((arr_3 [i_0] [i_0]) >> (((arr_1 [i_0]) - 6105619610979341820))))))) : ((+(((-9223372036854775807 - 1) / (arr_2 [i_0])))))));
    }
    var_16 -= ((((min(var_7, 141))) ? (!250) : var_13));
    #pragma endscop
}
