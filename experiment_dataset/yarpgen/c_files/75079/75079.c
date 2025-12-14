/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min(((~(min(3925366503317601158, var_6)))), (((((min(var_16, 1959631331))) ? (min(1281093365, 1)) : 551))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = ((33285996544 ? ((((((max(982528920011977661, 2005422051183633938))) || (arr_1 [i_2] [i_1]))))) : (((arr_1 [i_0 + 1] [i_1]) + -var_7))));
                    arr_7 [i_0] = ((((min(2013265920, ((min(-11872, 11871)))))) ? (min((((670 ? 54535 : 1))), (((arr_3 [i_0] [i_1] [i_2]) ? (arr_2 [i_1] [i_1]) : -3082)))) : (~var_1)));
                    var_19 = -7956091465808688234;
                }
            }
        }
    }
    #pragma endscop
}
