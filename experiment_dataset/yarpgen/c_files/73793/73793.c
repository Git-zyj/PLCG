/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (arr_4 [i_1] [i_1] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_16 = (!8897774143357459025);
                            arr_10 [i_2] [i_0] [i_2] = (max((((var_10 ^ var_5) ? (var_3 % var_10) : ((((!(arr_1 [14]))))))), (max(48567, (min(-5664199382815110576, (arr_5 [i_0])))))));
                            var_17 = (arr_6 [i_0] [i_2] [i_1] [i_3]);
                        }
                    }
                }
                var_18 = (((!(arr_6 [i_1] [0] [0] [i_0]))));
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
