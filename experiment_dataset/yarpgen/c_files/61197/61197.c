/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = (((-((935787266 ? 296799583 : 3998167712)))) + (max((max(296799583, (arr_6 [i_2] [i_1] [i_2] [i_3]))), 1131779345)));
                                var_14 = ((-594182459 ^ ((26749 ? 54578 : (arr_9 [10] [i_3 - 3] [i_3 - 4] [i_3] [i_3])))));
                                var_15 = (max((((arr_11 [i_0] [i_1] [i_1 + 1] [i_2] [7] [i_3] [i_4]) + var_8)), ((6815195362176088890 ? -124 : 11))));
                                var_16 = -29;
                            }
                        }
                    }
                }
                arr_13 [i_0] = ((((min(10957, -9206))) ? (min((arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]), 10267)) : 0));
            }
        }
    }
    #pragma endscop
}
