/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = -8129837966300139267;
                var_12 = (arr_0 [i_1 - 2]);
                arr_7 [i_0] [i_1] [i_0] = ((((-11946929836989270355 / ((max(var_3, (arr_0 [i_0])))))) * (((!var_7) % var_1))));
            }
        }
    }
    var_13 = (min(var_13, (((-(max(var_9, (min(var_2, var_0)))))))));
    #pragma endscop
}
