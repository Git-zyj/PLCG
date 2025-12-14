/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(65508, var_0));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [0] [i_3] [i_3] [i_0] = arr_7 [i_0];
                                var_19 = (min((((-2097779073 ? 1073741823 : ((((arr_2 [i_2] [5]) ? 2136291931 : 17)))))), (((arr_10 [i_0] [i_3] [i_3 + 2] [i_3 + 2]) << (-32766 + 32770)))));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0 + 1] [i_0] = 2136291930;
            }
        }
    }
    var_20 &= 18851;
    #pragma endscop
}
