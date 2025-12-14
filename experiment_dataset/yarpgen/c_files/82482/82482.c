/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((max(((var_3 ? ((max(0, 255))) : ((max(var_17, -13661))))), (var_6 >= var_4))))));
    var_19 -= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (max(var_20, -659393944));
                var_21 = ((12288 > (-2147483647 - 1)));
            }
        }
    }
    #pragma endscop
}
