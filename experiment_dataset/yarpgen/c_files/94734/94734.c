/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 -= (min((min((arr_0 [i_0]), (arr_1 [i_0]))), ((max(0, (arr_0 [i_0]))))));

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_16 = (max((min((85 || 2143776236), -1818554491)), 0));
            arr_5 [i_0] [i_0] [i_0] |= 688655160;
        }
    }
    var_17 = (min(var_9, (min(0, -3857))));
    #pragma endscop
}
