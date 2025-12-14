/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(((max(255, var_2))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((((!(arr_1 [i_0]))))) == ((-(arr_0 [i_0])))));
        var_17 = (arr_2 [i_0]);
    }
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_18 = ((!((((-(-127 - 1)))))));
        var_19 += (((-(arr_3 [i_1 + 2]))));
        var_20 = (~((~(((arr_8 [i_1]) - 8062880934855342975)))));
    }
    var_21 = (!var_6);
    #pragma endscop
}
