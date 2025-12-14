/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((((((var_10 ? var_5 : var_5))) ? var_7 : var_7))) ? ((((((1073741824 << (((-783461702455886042 + 783461702455886070) - 28))))) ^ ((var_11 ? -783461702455886042 : -783461702455886047))))) : ((((min(var_7, var_10))) & (~var_1))))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 ^= ((((((((arr_5 [i_1]) << (var_4 - 14981698659748070437))) ^ (~-783461702455886042)))) ? ((((min(4368947082676121958, var_10)) > ((min(-1746836939, 2147221504)))))) : (((arr_2 [i_0 - 1] [i_2 - 1]) ? (arr_2 [i_0 - 1] [i_2 - 3]) : (arr_2 [i_0 - 1] [i_2 - 3])))));
                    var_14 = (arr_2 [i_0] [i_2]);
                    var_15 ^= 0;
                }
            }
        }
        var_16 = (arr_2 [i_0] [i_0 - 1]);
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_17 = (((arr_11 [i_3]) + (max(((min(var_2, 27391))), (arr_10 [i_3])))));
        var_18 |= ((((max(-1, 5))) ? var_2 : (((arr_11 [i_3]) ? var_0 : (-4368947082676121958 <= 3794423316)))));
    }
    var_19 = var_7;
    #pragma endscop
}
