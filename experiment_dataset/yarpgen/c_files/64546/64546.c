/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_5;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 *= ((((min((~61), (var_4 && 61)))) ? (((((var_4 ? 6117 : 61))) ? (arr_1 [i_0] [i_0]) : ((((arr_0 [10] [i_0]) <= var_11))))) : var_5));
        var_19 = (min(var_19, (((!(arr_2 [i_0] [i_0]))))));
        var_20 = ((-(min(6534289173265812242, (((-61 ? (arr_3 [7]) : var_14)))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_12 [i_2] [i_2] [i_2] = ((var_1 ? ((~(max((arr_5 [i_1] [i_2]), var_3)))) : ((((!(arr_5 [i_1] [i_2])))))));
            var_21 = (arr_8 [i_1] [i_2]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    {
                        var_22 = (min(var_22, -2074017926));
                        var_23 = 5054391502728262497;
                        var_24 *= var_5;
                    }
                }
            }
        }
        var_25 = 8811552667763251468;
        arr_19 [i_1] = ((1 ? (((((235 ^ (arr_8 [i_1] [i_1]))) > ((((var_16 + 2147483647) >> (6922952668274461100 - 6922952668274461096))))))) : (~var_13)));
        var_26 = (min(var_26, 229));
        arr_20 [1] &= (((((var_14 ^ 177) ? (!var_12) : (!0)))) & 8658654068736);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_27 = (((((arr_18 [i_5] [8] [i_5]) + 2147483647)) >> (((((((var_0 ? 197 : -1173029837))) ? 176 : 62847)) - 158))));
        var_28 *= (arr_13 [i_5] [i_5] [4] [i_5]);
    }
    #pragma endscop
}
