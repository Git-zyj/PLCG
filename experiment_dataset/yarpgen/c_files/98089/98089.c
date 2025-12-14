/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 ^= (min(11562708596674606049, (arr_2 [i_1])));
                var_12 = (min(var_12, ((((min(13246035108095255468, var_8)))))));
            }
        }
    }
    var_13 = -var_4;
    #pragma endscop
}
