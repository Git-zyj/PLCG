/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((max((max(1501326271, 0)), var_6))), ((((((var_10 == (-9223372036854775807 - 1))))) * var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = ((var_1 ? ((~(min(10133814219029014430, 485378669)))) : ((((~var_3) ? (min(4061503884, 2793640996)) : var_1)))));
                    arr_8 [i_0] [i_0] [i_0] [i_2] = 2793641014;
                    var_15 = ((((!(((var_8 ? 1073741824 : 1368024306936573277))))) || (!var_12)));
                }
            }
        }
    }
    var_16 = ((max(var_5, (~var_9))));
    #pragma endscop
}
