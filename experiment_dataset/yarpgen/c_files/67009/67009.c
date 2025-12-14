/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max(867, ((((min((arr_2 [i_0] [i_0]), var_12))) ? (arr_2 [i_0] [i_1]) : var_11))));
                var_17 = ((var_8 > (arr_2 [i_1 - 2] [i_1 + 3])));
                var_18 += ((((((max((arr_0 [i_0]), var_3)) - (max(-1852250265, -1852250261))))) ? ((((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0])))) : ((-(arr_3 [i_1 + 4])))));
                arr_5 [i_0] &= (arr_3 [i_0]);
            }
        }
    }
    var_19 = (min(((var_6 ? (max(1852250262, 17121051893239457257)) : (((var_8 ? 95 : 32754))))), var_5));
    #pragma endscop
}
