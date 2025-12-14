/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 -= (-1712662625 && 122);
                    var_12 = (min(((var_7 ? (arr_4 [12] [i_1]) : 926016000383293860)), -8132257111794107701));
                }
            }
        }
    }
    var_13 = 8132257111794107684;
    #pragma endscop
}
