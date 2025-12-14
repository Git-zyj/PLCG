/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((((var_6 ? 254824782 : (arr_0 [i_0 + 2] [i_0 + 2]))) < 838041013))) - ((-(36 - var_9)))));
        arr_3 [i_0] = var_7;
        arr_4 [i_0] = ((~(min((arr_0 [i_0 - 1] [12]), (arr_0 [i_0 - 1] [i_0 - 1])))));
    }
    var_12 = var_5;
    #pragma endscop
}
