/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_11 &= (((0 > -8984381392545428145) ^ (min((min(-8984381392545428145, 8984381392545428144)), ((1 ? 1 : -8984381392545428145))))));
                                var_12 = (min(((min(((8984381392545428145 ? 8984381392545428144 : 8984381392545428144)), -8984381392545428145))), 9470340481210311569));
                                arr_14 [i_0] [i_1] [i_3] [i_4] = (6944864502389703746 || 9223372036854775807);
                                arr_15 [i_4] [i_2] [i_0] [i_0] = ((1 ? 255 : var_2));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_13 = var_1;
                                var_14 += (((((1297126062 >> ((((17435661591593754282 ? 6236 : 8984381392545428144)) - 6211))))) ? -8984381392545428146 : (min((9223372036854775807 < -9223372036854775807), (~-8984381392545428145)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = max((((((-418287509041810008 ? 25961 : -8984381392545428146))) ? -8984381392545428145 : -418287509041810008)), 4182237334);
    #pragma endscop
}
