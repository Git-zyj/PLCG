/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] |= ((!(arr_2 [i_0])));
        arr_4 [i_0] = ((((arr_2 [i_0]) && -1889432051)));
        var_18 = ((!((max(((-357498901 ? 16306214174822420193 : var_4)), (((!(arr_2 [i_0])))))))));
        var_19 -= (((arr_2 [i_0]) ? ((2 ? 17 : (-2147483647 - 1))) : (arr_1 [5])));
    }
    var_20 = min(((-var_2 ? (var_2 % var_1) : var_4)), (1479753392 || var_7));
    #pragma endscop
}
