/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [16] [16] [14] |= min(13487302351101619894, ((min(-5, var_16))));
                            var_21 = (min(var_21, (~18446744073709551605)));
                            var_22 = ((-((18446744073709551611 ? (~17106933) : (~18446744073709551611)))));
                        }
                    }
                }
                var_23 = 7;
                arr_12 [i_1] [9] = (arr_9 [i_0] [i_0]);
            }
        }
    }
    var_24 = min(((min(-2201, 81))), 26);
    #pragma endscop
}
