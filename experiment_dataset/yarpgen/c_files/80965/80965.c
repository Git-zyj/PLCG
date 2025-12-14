/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    var_10 = (min(var_10, (((-(arr_4 [i_2 + 3] [i_2 + 1]))))));
                    var_11 = (arr_5 [i_1] [i_1] [i_2 + 3]);
                }
                arr_6 [i_0] [i_0] [i_0] = ((((~(arr_5 [i_1 - 2] [i_1 - 1] [i_1 - 1]))) | (~15)));
                var_12 = 2102291875;
                arr_7 [i_1] [i_0] = (arr_2 [i_1]);
            }
        }
    }
    var_13 = ((var_2 % (((~var_5) ? var_0 : 3394095903))));
    #pragma endscop
}
