/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((((max(3798918149817938556, (arr_2 [i_2] [i_0])))) ? var_1 : (max(-86, (arr_2 [i_1] [i_0])))));
                    var_11 ^= var_4;
                }
            }
        }
    }
    var_12 = (min(var_12, var_0));
    #pragma endscop
}
