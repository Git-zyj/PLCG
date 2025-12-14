/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [17] [i_0]);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_10 = (arr_1 [i_0] [i_0]);
            var_11 = (max(var_11, ((((((max((arr_2 [i_0] [i_1]), (var_1 <= var_1))))) <= (((~1) ? (((((arr_0 [i_0]) <= -1460354774)))) : (max(16777215, 12948564464109687920)))))))));
            var_12 += var_6;
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_13 = var_2;
            var_14 = (((arr_6 [i_0] [i_0]) <= (max((((!(arr_6 [i_0] [i_2])))), (max(var_6, (arr_0 [i_0])))))));
            var_15 ^= 124;
        }
        arr_9 [i_0] = ((~((((-2147483647 - 1) <= (arr_6 [i_0] [i_0]))))));
    }
    var_16 = (max(var_16, var_6));
    var_17 = var_2;
    var_18 = (-var_4 <= (((((var_7 ? var_0 : var_6))) ? var_0 : ((min(var_4, var_3))))));
    var_19 = (!var_6);
    #pragma endscop
}
