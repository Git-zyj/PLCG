/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = arr_2 [i_0 + 3];
                var_16 = (((max(1, (arr_2 [i_0 + 2])))));
                var_17 &= 3975802730;
            }
        }
    }
    var_18 = (min((var_11 || 807179572), (min(var_5, var_4))));
    var_19 = var_13;
    #pragma endscop
}
