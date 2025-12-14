/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((14613538777141199104 ? ((var_8 ? (min(153, var_2)) : (((min(var_0, 155)))))) : ((((!(((562400197607424 ? 153 : 1)))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 += var_9;
                    var_18 = ((((((max((arr_3 [i_0] [i_0 - 2]), var_3))) && ((max(156, (arr_4 [5] [i_1])))))) || ((max(-43, ((155 ? 0 : -111)))))));
                    var_19 = 62303;
                    var_20 = (min(var_20, (arr_2 [i_0])));
                    arr_8 [i_2] = var_6;
                }
            }
        }
    }
    #pragma endscop
}
