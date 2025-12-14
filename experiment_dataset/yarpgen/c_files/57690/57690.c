/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((53963 ? 53969 : 1981728783));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (min(var_21, var_0));
                arr_5 [i_1] = (arr_2 [13] [i_1]);
            }
        }
    }
    #pragma endscop
}
