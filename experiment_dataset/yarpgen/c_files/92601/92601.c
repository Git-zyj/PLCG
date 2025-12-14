/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~((max((!var_0), var_15)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [7] = (((arr_0 [i_1 - 1]) ? (arr_0 [i_1 + 3]) : (arr_5 [i_1 + 3] [i_1 + 4])));
            var_17 = (min(var_17, (arr_1 [i_1 + 4])));
        }
        var_18 |= ((118 + (arr_4 [i_0] [i_0])));
        var_19 = (~1);
        var_20 = (3726241709 ^ 584435077279928266);
    }
    #pragma endscop
}
