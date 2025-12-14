/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((~((-3711299137696875535 ? (!var_1) : ((96 ? 4294967266 : 2571547805))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (max(3711299137696875535, (81 / 175)));
                arr_5 [i_1] = ((~(max((min(var_2, 4294967266)), (((var_6 << (81 - 67))))))));
                var_14 = (~28);
            }
        }
    }
    var_15 = (min(var_15, (~var_2)));
    #pragma endscop
}
