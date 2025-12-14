/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -3;
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] |= (min(((var_0 * (!27))), -18));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 = 63062;
                            arr_12 [2] [i_1] [i_1] [i_1] = 14755269338158172289;
                            var_19 = -76;
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((58429 != ((2 ? (var_9 / 65524) : ((max(var_12, 65518)))))));
                        }
                    }
                }
                var_20 = (((~(arr_11 [i_0 - 1] [i_0 + 1] [i_0 - 1]))));
            }
        }
    }
    var_21 = -1;
    var_22 = var_3;
    #pragma endscop
}
