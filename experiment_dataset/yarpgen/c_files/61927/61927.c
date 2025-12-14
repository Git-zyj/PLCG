/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((((max(var_9, var_5))) || var_5))), (min(((var_8 ? var_9 : var_5)), ((1 ? 1814762359 : 1183485448))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [8] [i_0] [i_1] = (arr_2 [i_0]);
                arr_7 [i_0] [i_0] [i_0] = (1814762359 ? 896 : 3005186229);
                arr_8 [i_0] [i_0] [i_0] = (max((min((arr_0 [i_1 + 3]), (1183485448 / 1814762359))), (arr_1 [i_0])));
            }
        }
    }
    #pragma endscop
}
