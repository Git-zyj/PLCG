/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (((min((arr_3 [i_0]), (min(2174961856, 536854528))))) ? (((arr_1 [i_0]) - 32767)) : (((((min(2174961838, var_0))) ? ((min((arr_0 [7]), var_5))) : (arr_1 [i_0])))));
                var_15 = (min(var_15, ((max(((23940 ? var_7 : 66060288)), (((-1076657881 | (arr_1 [i_1])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = var_12;
                            var_17 = ((((((min(32765, 91840558276486761)) & (((1076657893 ? 18755 : 6917529027641081856)))))) ? (max((min(var_9, 4294967285)), (arr_10 [1] [i_2] [i_0] [i_0]))) : 1991));
                            var_18 = (arr_0 [i_0]);
                            arr_12 [i_3] = max((((((var_4 ? 18 : var_6))) ? -534085719 : var_10)), ((((161 ? var_0 : (arr_5 [i_0] [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_10;
    #pragma endscop
}
