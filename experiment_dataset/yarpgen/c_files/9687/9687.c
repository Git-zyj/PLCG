/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = ((((4151259442 && (arr_0 [i_0] [i_0]))) ? (arr_1 [i_0]) : 18446744073709551599));
        var_17 &= (min(7541666823198052597, (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_18 = (max(var_18, ((max((min((arr_2 [i_1]), (!0))), (((((min((arr_3 [i_0] [i_1]), var_8))) ? var_15 : ((max(17231, var_3)))))))))));
            arr_5 [i_0] = ((var_11 ^ ((((var_15 >= (arr_0 [i_0] [i_1])))))));
        }
    }
    var_19 = var_7;
    var_20 = var_6;
    var_21 = ((var_4 != (max(((max(var_8, var_8))), var_9))));
    #pragma endscop
}
