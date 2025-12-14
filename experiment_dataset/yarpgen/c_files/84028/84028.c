/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        var_16 &= ((var_0 ? 24817 : (~8135517144451617395)));
                        var_17 = ((var_5 ? 57664 : -24815));
                        var_18 = (~-9223372036854775804);
                        var_19 = 16;
                    }
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        arr_12 [i_0] [5] [i_2] [i_2] [1] [i_4] = max((min(-3, -8135517144451617405)), -31271459);
                        var_20 = (((((224 ? -7189889657926913844 : 1462812571165653467))) ? (((15916632570287953234 ? -16 : -24817))) : (~-1797595423651197143)));
                    }

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_21 = -5012108524217599949;
                        var_22 = -4718;
                    }
                }
            }
        }
    }
    var_23 &= var_12;
    #pragma endscop
}
