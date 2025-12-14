/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 19;
    var_18 = 31;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = ((~(!26)));
                    var_20 |= (min((arr_5 [i_0 + 1] [12] [i_0] [i_0 - 2]), (arr_5 [i_0 - 3] [i_0 - 1] [i_1] [i_1])));
                }
            }
        }
        var_21 = (min(5, ((((max(224, 5))) ? 0 : 1))));
    }
    #pragma endscop
}
