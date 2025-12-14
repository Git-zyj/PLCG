/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_12 ^= -112;
                    arr_7 [i_0] [i_0] [i_0] [i_2] = 124;
                    var_13 += (~2993482307);
                }
                var_14 = (((123 ? -5469988147363503334 : 14080868365709719155)));
            }
        }
    }
    var_15 = (((!var_0) ? (((((-116530497 ? 85 : 1))))) : (~4365875707999832461)));
    #pragma endscop
}
