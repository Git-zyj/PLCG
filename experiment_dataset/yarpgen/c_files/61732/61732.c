/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_5 > (((var_7 ? 4194362682 : 24983)))))));
    var_21 = (min(var_16, (max(62, 0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_22 |= (max(0, (~-1913454070998761760)));
                arr_6 [i_0] [i_0] = 1075315542;
                var_23 = ((-(-3865578433574015576 + var_7)));
                arr_7 [i_1] [i_0] [i_0] = (((((~(max((arr_3 [i_0] [i_0]), 62))))) || ((var_12 <= (min((arr_1 [i_0] [i_0]), 1))))));
                arr_8 [21] [i_1] [1] = (min(17366, 9067322295975303661));
            }
        }
    }
    #pragma endscop
}
