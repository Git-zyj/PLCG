/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = min(1, 18647);
                var_21 ^= ((((max(((1 == (arr_1 [i_1]))), (9223372036854775808 < 1)))) << ((max(1, 1)))));
            }
        }
    }
    var_22 = (15998673952101066414 * 0);
    #pragma endscop
}
