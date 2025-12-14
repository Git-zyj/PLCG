/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 -= (max((((-(((15 < (arr_1 [1]))))))), (arr_0 [i_0] [i_0])));
        var_12 = (~((-(max(13, var_4)))));
        arr_3 [i_0] = (min((!142), (arr_0 [i_0] [i_0])));
        arr_4 [0] = ((((16368 && (((8 ? (arr_1 [i_0]) : 1375640309))))) ? (((-((18446744073709551613 ? 16 : 1375640333))))) : 3940649673949184));
    }
    var_13 -= 241;
    #pragma endscop
}
