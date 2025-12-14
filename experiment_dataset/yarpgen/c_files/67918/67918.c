/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = ((((min(222, 222))) ? (((((16 ? -1 : 0))) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0] [i_0]))) : (((84 && 3) ? ((-50 ? 225 : 226)) : ((((arr_2 [i_0] [i_0] [i_0]) || 33)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_5 || (-13 || 244)));
                                var_13 = 133;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(((min(8, 112))), ((var_3 ? ((214 ? var_4 : var_11)) : ((var_3 ? 16 : 112))))));
    #pragma endscop
}
