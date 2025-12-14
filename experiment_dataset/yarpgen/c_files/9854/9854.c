/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_2] |= ((((((min(-3778483301781502680, (arr_1 [i_1] [i_1 - 1])))))) | (max((arr_1 [i_0 - 2] [i_1 - 1]), (arr_1 [i_0 - 1] [i_1 - 1])))));
                    var_19 = (min((max(var_4, ((min(150987444, 18569))))), (!255)));
                }
            }
        }
    }
    var_20 *= ((var_5 % (3775563974357267244 * 3775563974357267244)));
    #pragma endscop
}
