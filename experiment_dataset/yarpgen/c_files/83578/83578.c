/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (max((arr_2 [i_0] [i_0]), (!1203669990)));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_1 - 4] [i_1] [i_0] [i_1] = 40;
                    arr_10 [i_0] [i_1] [i_0] = ((!(arr_1 [i_1 - 1] [i_1 + 1])));
                    var_15 = var_2;
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (((!((min(1968490514, 3091297310))))) ? ((((~(arr_7 [i_0] [i_0] [i_1] [i_0]))) / (arr_5 [i_2] [i_0]))) : (arr_1 [i_1] [i_1 - 3]));
                }
            }
        }
    }
    var_16 = 1203669976;
    var_17 *= var_8;
    #pragma endscop
}
