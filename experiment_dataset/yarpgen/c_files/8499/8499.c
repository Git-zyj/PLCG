/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((max(1565010606, -615645237))) ? var_12 : 172027213))) ? ((var_6 / ((min(-615645237, 1565010605))))) : (((-18165 << (var_6 - 8684813553432527611))))));
    var_18 = var_15;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(600540596, ((((-1565010602 != 615645236) ? -820355450 : 15946)))));
        var_19 = ((+(min((var_3 / -615645216), 6721))));
        var_20 = (arr_1 [i_0]);
        arr_4 [i_0] [i_0] = (((-(((arr_2 [i_0]) >> (615645238 - 615645208))))));
        var_21 = ((!(var_14 / -1565010617)));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_22 = (((((-1565010607 ? 4022475185 : 615645260))) ? ((-615645237 ? 8 : var_15)) : 615645239));
            var_23 = (~-820355454);
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_24 = 615645233;
            var_25 = (arr_0 [i_3]);
            arr_12 [i_1] = (arr_9 [i_1] [i_1] [i_3]);
            arr_13 [i_1] [i_1] = ((~(max((4294967295 && 1565010603), ((1565010621 ? (arr_5 [i_1] [i_3]) : (arr_11 [i_1] [i_1] [i_3])))))));
        }
        arr_14 [i_1] = ((min((arr_11 [i_1] [i_1] [i_1]), ((((arr_5 [i_1] [i_1]) != (arr_10 [i_1])))))));
        var_26 = (~3416608641);
        var_27 = var_14;
    }
    #pragma endscop
}
