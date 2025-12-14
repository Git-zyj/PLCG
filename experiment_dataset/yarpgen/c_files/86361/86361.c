/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [13] = (min(474785709, 474785714));
                arr_5 [i_0] [i_0] = ((((((((((arr_3 [i_0] [18] [i_1]) / (arr_1 [i_1]))) + 9223372036854775807)) >> (21656 - 21621)))) ? ((min((arr_2 [i_0]), (arr_1 [i_0])))) : 12));
            }
        }
    }
    var_17 = ((!((((((var_0 ? -224862172 : 127408628))) ? (max(var_2, var_15)) : (((0 ? -127408630 : var_6))))))));
    var_18 = ((var_6 ? (((((-224862186 ? 65503 : 1389365877))) / (min(-6685127079759849138, (-9223372036854775807 - 1))))) : (~1)));
    var_19 = 224862171;
    #pragma endscop
}
