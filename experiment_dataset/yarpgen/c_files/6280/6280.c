/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_20 |= ((min((~-1929510009), 1929510009)));
                    var_21 = (((~31) + ((12696970036333834987 ? 72 : -10414))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_3] [i_3] [i_4] = (-((min(44220, (arr_8 [i_4 - 2])))));
                            var_22 = (--4026531840);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_23 = (max(var_23, -var_18));
                            var_24 = var_12;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
