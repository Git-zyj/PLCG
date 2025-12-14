/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (min((max(((((arr_7 [i_0] [i_0] [i_0] [i_0]) & (arr_2 [i_2])))), (((arr_0 [5]) ? 3337021026 : -10)))), (((((((arr_1 [i_1]) ? (arr_2 [i_0]) : 0))) ? (arr_5 [i_0] [i_0] [i_0] [i_2]) : (arr_4 [8] [8]))))))));
                    var_16 |= (((~3150414581568565941) >> (((max((min((arr_3 [i_0] [i_1] [i_2]), var_3)), (arr_8 [i_0] [i_0] [i_0]))) - 16196157487950221783))));
                    arr_9 [i_0] [i_0] [i_0] = (((arr_3 [i_0] [5] [5]) & (((var_10 << (((arr_0 [i_1]) - 29)))))));
                    var_17 ^= 0;
                }
            }
        }
    }
    var_18 |= ((((max(2340, var_10))) ? var_7 : var_5));
    var_19 = (max(((~(min(var_3, -814638537)))), var_2));
    #pragma endscop
}
