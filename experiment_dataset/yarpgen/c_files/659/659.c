/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_18 >= 65535);
    var_20 = 4403754398803103586;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((4403754398803103596 ? -4403754398803103596 : 4403754398803103586)) >= 1));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_21 = (((~4403754398803103612) && ((min(247, -4403754398803103603)))));
                    arr_8 [i_1] [i_1] = 28394;
                }
                arr_9 [i_1] [i_0] = ((~(--4403754398803103576)));
                arr_10 [i_1] = (255 >= 0);
                var_22 = (min(var_22, (((((min(3761118308, -5562847978518828528))) ? 37148 : (1 * 2))))));
            }
        }
    }
    var_23 = -var_13;
    #pragma endscop
}
