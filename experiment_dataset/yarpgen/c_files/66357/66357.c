/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (!var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((!(~8697724967704732544)))));
                                var_15 = (~-16339539241544281654);
                                arr_17 [i_1] [i_1] [i_2] [i_3] [i_4] = -11366502968970624326;
                            }
                        }
                    }
                    var_16 = -2444058159405013725;
                    var_17 = (!23990);
                }
            }
        }
    }
    #pragma endscop
}
