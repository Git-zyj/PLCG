/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (max(var_4, 1576));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 ^= ((((((((!(arr_1 [i_0])))) / ((12 ? -79 : var_3))))) / (arr_2 [i_0])));
        arr_4 [i_0] [i_0] = ((-113 ? ((-6392336519377047115 ? 2126644843 : 12089165472626483665)) : ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_13 -= (max((((min(9223372036854775789, 678322415)))), (((arr_3 [i_0]) + var_1))));
        arr_5 [i_0] = (arr_2 [i_0]);
        arr_6 [i_0] [i_0] = (min(((min((arr_3 [i_0]), (arr_3 [i_0])))), (min((((~(arr_1 [i_0])))), (max((arr_3 [i_0]), var_1))))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_14 = ((((max((max((arr_1 [i_1]), var_5)), (((9 ? 4813 : 2401758570)))))) ? (min((arr_0 [i_1 + 1]), (arr_7 [i_1 + 1]))) : ((~(arr_0 [i_1])))));
        var_15 -= ((((!(arr_0 [i_1]))) ? (6357578601083067937 - -9) : (!var_9)));
        var_16 = ((((min((min(349861597703297495, (arr_3 [i_1]))), (((!(arr_10 [i_1]))))))) ? (min((((arr_3 [i_1]) ? var_10 : (arr_10 [i_1]))), ((29 ? (arr_8 [i_1]) : 0)))) : 256));
    }
    #pragma endscop
}
