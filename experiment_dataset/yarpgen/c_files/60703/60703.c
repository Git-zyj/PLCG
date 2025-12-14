/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -1342596114331742246;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_18 &= (((((arr_4 [i_0] [i_0]) <= ((-20043 ? 1 : (arr_4 [i_1] [i_0]))))) && ((((arr_1 [i_1 + 1]) ? (arr_3 [i_1 + 1] [i_1 + 2]) : ((min((arr_4 [i_0] [i_1 + 2]), (arr_3 [i_0] [i_1 - 2])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_19 = ((!((((((arr_9 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) ? 231 : (arr_2 [i_0] [i_0]))) & 70)))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = (arr_6 [i_0] [i_0]);
                            var_20 = 28;
                        }
                    }
                }
                var_21 = (min(var_21, (~187)));
            }
        }
    }
    var_22 = (((min(((max(var_13, -1))), 8650210970642742563)) + 1247917638));
    #pragma endscop
}
