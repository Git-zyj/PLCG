/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_15 += ((~(((arr_3 [i_0 - 1]) ? (arr_3 [i_0 + 2]) : (arr_3 [i_0 + 3])))));
                arr_4 [6] &= ((max(((min(-1949986644, (arr_3 [5]))), ((-(arr_1 [i_0])))))));
                var_16 = (min(var_16, (arr_3 [i_0 + 2])));
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
