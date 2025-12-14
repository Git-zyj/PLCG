/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((((~(var_9 / var_10)))) % ((max(var_1, 2029531907))))))));
    var_13 = ((!(((0 * -29104) == (-29119 <= 10)))));
    var_14 = (max((max(var_11, var_6)), (!-var_1)));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 2009646866031556477;
        arr_3 [i_0] = ((-29112 == ((((-32767 - 1) <= 6106122584516973915)))));
        arr_4 [i_0] [2] = (((((var_5 ? -29119 : -29104))) == (arr_1 [i_0 - 2])));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_7 [6] = (!29112);
        var_15 = 229;
    }
    var_16 -= var_4;
    #pragma endscop
}
