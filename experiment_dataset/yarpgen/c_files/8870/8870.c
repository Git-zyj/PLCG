/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 ? ((((var_5 < var_10) ? (max(717922798, var_10)) : (((31 ? 214 : 214)))))) : var_9));

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_12 = (max(214, (max((arr_1 [i_0 + 1] [i_0 + 1]), -85))));
        arr_2 [i_0] = ((var_1 * (((((var_6 / (arr_0 [i_0 - 1]))) / 214)))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((236 / (((((var_5 ? (arr_5 [i_1]) : var_6))) ? (~var_0) : 214))));
        var_13 = (((arr_1 [i_1] [i_1]) ? ((((max((arr_1 [i_1] [i_1]), -1076205603))) ? 14903354885168002611 : (var_5 != 11044014450144433866))) : var_7));
        arr_7 [i_1] = ((~(((!((max((arr_5 [i_1 + 1]), var_6))))))));
        var_14 = 41;

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_15 = (arr_9 [i_2] [i_2] [i_2]);
            var_16 *= ((((!4725) < (arr_9 [i_1 - 1] [14] [i_1]))));
            var_17 = ((((max(((max((arr_5 [i_2]), (arr_5 [i_2])))), ((18446744073709551615 ? var_1 : 149))))) ? ((-((41 ? (arr_3 [i_1]) : (arr_0 [i_1]))))) : (arr_3 [i_1 + 1])));
            arr_11 [i_1] [i_2] [i_1] = var_5;
        }
    }
    var_18 = ((235 ? var_5 : (((!(((var_9 ? 41 : var_7))))))));
    #pragma endscop
}
