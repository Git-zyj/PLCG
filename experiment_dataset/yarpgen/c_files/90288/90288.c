/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (max((max(29782, (arr_1 [i_0]))), (((var_5 ? 34634616274944 : (((-123 + 2147483647) >> (-19153 + 19165))))))));
        var_16 = (max(18446709439093276687, 34634616274944));
        var_17 += (max(-23739, ((23728 + (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 |= (((-var_6 - 18446709439093276671) ? (((!(arr_3 [2])))) : ((((((arr_1 [i_1]) / var_4))) ? 1164985353 : (var_12 == var_2)))));
        arr_6 [i_1] [i_1] = (((!-238656821) ^ ((((arr_4 [i_1] [i_1]) & -1164985377)))));
    }
    var_19 ^= ((2713164319749158803 <= (max((34634616274955 - 2584181472854871763), var_10))));
    var_20 = ((-18446709439093276671 & (((((34634616274944 * 5784) == var_3))))));
    #pragma endscop
}
