/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (min(var_6, var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [3] [i_1] [i_2 - 1] = (((arr_6 [i_1] [i_2 + 1] [i_2]) ? 254 : (((!79) * ((~(arr_6 [i_2] [i_1 + 1] [i_0])))))));
                    var_11 = var_8;
                    var_12 = (min((min((arr_0 [i_2 - 1]), (arr_0 [i_2 - 2]))), (arr_0 [i_2 - 2])));
                }
            }
        }
    }
    var_13 = ((((!(21 < 0)))));
    #pragma endscop
}
