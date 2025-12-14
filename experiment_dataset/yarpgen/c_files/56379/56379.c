/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = (arr_1 [i_1]);
                arr_9 [i_0] = (max((((var_12 == (18446744073709551615 + 0)))), (max(((max(222, var_7))), 43016))));
            }
        }
    }
    var_19 += var_11;
    var_20 = (min(var_20, ((max((max((((var_14 ? 1382031786 : -1360803362))), (min(var_10, var_9)))), ((((0 == var_6) - (var_2 & 79)))))))));
    #pragma endscop
}
