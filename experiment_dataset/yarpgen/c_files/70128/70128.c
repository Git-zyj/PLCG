/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_0 > (~134217727))))) < var_16));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [6] [i_1] [6] [14] = var_0;
                    var_20 = var_18;
                    var_21 *= ((~(((arr_6 [i_0 + 1] [i_0 - 1] [i_1]) ? (!var_6) : (~1)))));
                }
            }
        }
    }
    #pragma endscop
}
