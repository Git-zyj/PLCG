/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = ((((min((min(4294967295, (arr_2 [i_0] [i_1]))), (var_2 && 11137)))) ? ((min((~1473834531), ((max(var_5, 210)))))) : (max((arr_3 [i_0] [14] [i_1]), var_7))));
            var_11 = ((((!(arr_4 [i_0])))));
        }
        var_12 = (max(var_12, (arr_4 [i_0])));
        var_13 = var_2;
    }
    var_14 += var_0;
    var_15 = var_4;
    #pragma endscop
}
