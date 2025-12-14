/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_4, (((var_8 ^ 32767) ? var_12 : var_14))));
    var_16 -= (min(((var_4 ? var_6 : var_11)), (((((254 ? var_12 : 3326413033740092607))) ? ((max(56905, var_12))) : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((max((arr_0 [8] [i_1]), (max(-124, (((arr_2 [0] [i_1]) ^ (arr_3 [i_1]))))))))));
                arr_4 [i_0] [i_1] = (min((min(var_7, (min(45456, -1)))), (((var_11 >= ((var_6 ? 0 : -201800309392696401)))))));
                arr_5 [i_0] = (((((((max(var_10, 35569))) ? (((arr_0 [10] [i_0]) ? -28853 : (arr_3 [6]))) : (((arr_2 [i_0] [i_0]) ? 7 : var_8))))) ? (!1792) : (arr_2 [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
