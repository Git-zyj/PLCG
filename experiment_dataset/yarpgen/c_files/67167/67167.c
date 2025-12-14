/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 *= (((((arr_3 [i_0] [i_1]) || (arr_2 [i_0]))) ? (((((arr_3 [i_0] [i_1]) || 18446744073709551613)) ? var_16 : (((31307 ? 2856336614 : -723471881))))) : (1438630682 * 1048576)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, (723471881 < 255)));
                            var_21 = ((1 ? -6416195981888628032 : 1));
                            var_22 = (min(var_22, (arr_7 [5] [i_2 + 3] [i_1] [i_0])));
                        }
                    }
                }
                var_23 = (max((max(2856336614, (((arr_6 [i_1] [i_1] [i_0]) * 2856336601)))), (min(255, ((var_11 ^ (arr_9 [i_0])))))));
                var_24 -= 1048566;
                var_25 = ((~(arr_2 [i_0])));
            }
        }
    }
    var_26 = 56;
    var_27 = (min(var_27, var_0));
    #pragma endscop
}
