/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -40502412;
    var_11 = (min(var_4, (1 + -var_2)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((~(arr_1 [i_1])))));
                    arr_8 [i_0] [7] [i_0] = (32767 <= 30);
                    arr_9 [i_1] [i_0] [14] = (((((-32767 - 1) & 1)) * ((((min(141, (arr_7 [i_0])))) ? (arr_5 [i_0] [i_2]) : (arr_2 [i_0 + 1] [i_2 + 3])))));
                }
            }
        }
    }
    #pragma endscop
}
