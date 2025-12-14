/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] = (min(var_10, var_12));
        arr_5 [i_0 + 2] = ((-1 + 2147483647) >> (428898981 - 428898980));
        arr_6 [i_0] = ((-((var_7 | (!var_12)))));
    }
    for (int i_1 = 4; i_1 < 7;i_1 += 1)
    {
        arr_11 [i_1] = -39911;
        arr_12 [i_1] = ((!((min(var_5, (arr_9 [i_1 - 2]))))));
    }
    var_16 = var_5;
    var_17 = (-44 & 5706609827046059675);
    #pragma endscop
}
