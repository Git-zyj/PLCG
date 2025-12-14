/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max(((((arr_1 [i_0 + 1]) == (arr_1 [i_0 + 1])))), ((((max((arr_0 [i_0]), var_8))) | 5))));
        var_11 = ((((var_8 <= var_5) || (((~(arr_1 [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_12 = ((((~1040187392) ^ (((arr_5 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_6 [i_1]))))));
        arr_7 [i_1] [i_1] = var_2;
    }
    var_13 = var_2;
    var_14 = ((!((min(1, 4990632190109298852)))));
    var_15 = ((!(!4666710944794713424)));
    #pragma endscop
}
