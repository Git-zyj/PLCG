/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_1] = (max(var_3, (arr_6 [1] [i_1] [i_0])));
                var_13 = ((((-8785 ? -8785 : 2697841577)) << 1));
                arr_8 [i_1] [i_1] [i_1] = ((!((max((((-8794 ? -3 : 13965))), (min(var_9, 952561015)))))));
                arr_9 [i_0 + 1] [i_1] = (min(((~(var_5 >= var_4))), ((((~(arr_6 [i_0] [i_1] [i_1]))) & 8785))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_14 = ((3171258311 ? 7749426609943524366 : 17161097504478643410));
                    var_15 = ((~(max((arr_12 [i_0] [i_1] [i_1] [i_0 - 2]), var_2))));
                }
            }
        }
    }
    #pragma endscop
}
