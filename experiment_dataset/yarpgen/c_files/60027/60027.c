/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (~-8589934591);
    var_14 = (((-6652535167570672304 >= -8589934577) ^ ((((1040 || var_9) <= (-8589934587 != 127))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_1] = (((-1033 != var_8) < -1));
                    var_15 = (max(((-159847877 ? (arr_3 [i_1] [i_2]) : (arr_1 [i_0]))), ((-(arr_3 [i_1] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
