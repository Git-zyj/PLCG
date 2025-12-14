/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, -32767));
    var_18 = (((-(-10567 > var_1))));
    var_19 = (3056452113018829214 >= var_15);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [1] |= 1;
                    arr_7 [i_2] [i_1] [i_0] = ((((81 & (((!(arr_3 [i_0])))))) >> ((((min(-813841876, 194))) + 813841897))));
                }
            }
        }
    }
    #pragma endscop
}
