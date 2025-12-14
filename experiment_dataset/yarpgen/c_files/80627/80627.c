/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 0;
    var_12 = ((((var_3 / (var_2 ^ 1))) | 14582));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (((arr_4 [i_0 + 2] [i_1]) * 3570));
                arr_5 [i_0] [i_1] = (((arr_0 [i_0] [i_1 + 2]) || 3967818874406093026));
                arr_6 [i_1] = 27867;
            }
        }
    }
    var_14 = (var_9 + 50954);
    var_15 = ((((((var_0 + 2147483647) << (((var_5 <= var_8) - 1))))) ^ ((8919647767304800174 - (32767 ^ 2030981636)))));
    #pragma endscop
}
