/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_18 = ((~(arr_1 [i_0 + 1])));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_19 = ((-1 ? ((((30341 ? var_15 : 42)))) : ((3663 ? 42 : 9319522473482174543))));
            var_20 = (max(1, (max(var_9, 3683))));
        }
    }
    var_21 = (max(var_5, -1));
    #pragma endscop
}
