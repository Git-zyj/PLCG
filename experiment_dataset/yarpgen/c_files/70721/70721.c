/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (((var_13 || var_12) > ((((7976637557518397714 | 3055867249) == -27132)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_0] [i_2 + 2] [i_3] &= var_15;
                            var_19 = ((var_11 | ((((((var_11 << (var_3 - 50)))) < (var_9 | var_2))))));
                            arr_15 [i_0 - 2] [i_1] [i_1] [i_3] |= ((29584 ? ((max(var_9, (min(106, 43904))))) : var_6));
                        }
                    }
                }
                var_20 -= ((((min(-29585, 35))) ? ((min((39 | var_16), (var_0 - var_11)))) : (var_7 * var_6)));
            }
        }
    }
    #pragma endscop
}
