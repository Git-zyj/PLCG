/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (min((((!(-32767 - 1)))), (min((max(28075, 5663057527939088129)), 1714199355545344983))));
    var_18 = (min(((max((((var_1 ? 2460832333 : 29705))), ((var_2 ? -113 : (-9223372036854775807 - 1)))))), var_15));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_0] = (((((!((max((-32767 - 1), 203)))))) ^ ((max((arr_4 [i_0] [i_0] [7] [2]), (arr_3 [i_0 - 1] [i_0 + 2] [i_0 - 1]))))));
                    var_19 = (arr_3 [5] [i_1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
