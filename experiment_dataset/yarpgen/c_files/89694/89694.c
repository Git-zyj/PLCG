/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((!(((14 ? 18446744073709551599 : var_4))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (max(var_11, (((-((~(arr_1 [i_0]))))))));
        var_12 = max((((((1 | (arr_0 [i_0])))) ? var_0 : ((65535 ? (arr_0 [i_0]) : var_3)))), (((4740129974134573014 && 16) ? 22 : 2)));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 += 1;
            arr_4 [i_0] [23] [i_1] = min(1977674534734443369, ((100 ? (min(18446744073709551609, 10344104899970973432)) : (min(var_0, -3077011864529022032)))));
            arr_5 [i_0] [i_1] = (((arr_0 [i_1]) ? (arr_2 [i_0] [i_1]) : 10344104899970973404));
            var_14 = ((20 ? ((min(1, (arr_1 [i_0])))) : (~var_9)));
            var_15 = ((((min(11200, 17272))) ? 18446744073709551591 : ((var_8 ? var_1 : var_6))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_8 [i_0] [1] [i_2] = var_7;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_16 = (min(var_16, ((max(((((((9 ? var_6 : var_9))) <= -1))), (min(65535, (arr_11 [i_2]))))))));
                        arr_14 [6] [i_2] [i_2] [i_0] [i_2] = (var_9 * -431);
                        arr_15 [i_0] [i_0] [i_2] [i_0] = 11561543107200398668;
                    }
                }
            }
            var_17 = (min(var_17, var_9));
        }
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            var_18 = (max(var_18, ((min((18446744073709551613 * var_7), ((-(max(var_4, var_0)))))))));
            var_19 = ((((375042273214786618 != (((var_1 ? var_2 : 0))))) ? ((37313 ? var_0 : ((((arr_1 [i_5]) ? (arr_6 [i_0] [i_5]) : var_7))))) : var_2));
            arr_19 [i_0] [i_0] [i_5 + 1] = var_6;
        }
        arr_20 [i_0] = -23;
    }
    #pragma endscop
}
