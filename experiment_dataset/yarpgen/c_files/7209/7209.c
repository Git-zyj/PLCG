/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_4 ? -31110 : 9223372036854775807))) ? var_8 : ((-((max(var_8, -26286)))))));
    var_11 = (min(var_11, (((+(((0 && var_4) ? -1895 : (!0))))))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_12 = ((((~(var_2 * var_0))) <= (((var_6 != 2876825055399749277) << (((max(-31102, var_4)) - 4294936189))))));
        var_13 = (((arr_0 [i_0 + 2] [i_0]) != (arr_0 [i_0 + 1] [i_0 + 2])));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_4 [i_1] = ((-(!-31110)));
        var_14 = ((-(15962303496510825665 >= -5702)));
        var_15 &= ((((max(-76, (arr_3 [i_1 + 1])))) ? ((14542534055599909203 ? (arr_2 [i_1 + 2]) : ((((!(arr_3 [i_1]))))))) : 1));
        var_16 = (max(var_16, var_8));
    }
    var_17 = (min(var_17, ((max((max(var_8, (0 ^ 0))), var_9)))));
    #pragma endscop
}
