/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_0 - 1] [i_0] [i_0] [i_3] [i_1] = (max(1, (arr_3 [i_0] [i_0])));
                            arr_10 [i_0 - 1] [i_0 - 1] [i_2 + 2] [i_0] = (max(1, 4294967295));
                            var_12 = (((max((arr_1 [i_0]), (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))) <= ((max(((1 ? 126 : 32)), (((!(arr_0 [i_0])))))))));
                        }
                    }
                }
                var_13 = (max(1, 2285087183));
            }
        }
    }
    #pragma endscop
}
