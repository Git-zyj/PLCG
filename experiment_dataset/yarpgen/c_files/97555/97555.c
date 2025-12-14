/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((~((var_2 ? -22451 : var_10))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = ((((max(-32539, 4664179065878718290))) ? (~-1290358659070996434) : (min(1714623259137530381, -32539))));
                arr_4 [15] [15] [i_1] &= (min(((var_17 ? var_8 : var_3)), (max(-32527, ((237 ? 28672 : 143))))));
            }
        }
    }
    #pragma endscop
}
