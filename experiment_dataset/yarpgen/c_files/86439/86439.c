/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -6066938000969329026;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((max(((max((arr_3 [i_1]), var_9))), ((16986 ? 29812 : var_5)))) == ((((((min(var_3, (arr_0 [i_0] [i_0])))) <= var_4))))));
                arr_6 [i_0] [i_1] [i_0] = 13773458864985840854;
            }
        }
    }
    #pragma endscop
}
