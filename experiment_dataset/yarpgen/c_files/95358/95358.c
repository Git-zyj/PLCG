/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_2 ? (((var_14 ? 14 : var_12))) : (max(-1966174154, -6538653074167042532)))), var_4));
    var_16 |= 437;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 ^= (((((min((((!(arr_4 [i_0])))), (min((arr_4 [i_0]), (arr_7 [6] [3] [i_2]))))))) / ((1230755146 ? 3045819408090132928 : 1230755153))));
                    var_18 = -1230755159;
                }
            }
        }
    }
    #pragma endscop
}
