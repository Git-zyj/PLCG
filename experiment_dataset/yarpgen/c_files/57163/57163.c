/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (min(var_14, ((min(47, (max((min(var_7, (arr_1 [i_0] [i_0]))), (((!(arr_0 [i_0])))))))))));
        var_15 = (max(var_15, ((((((var_1 <= var_1) ? -var_0 : 1701948371)) + (((min(3, (arr_1 [i_0] [i_0]))) << (((((arr_2 [1] [1]) ? 37748 : (arr_2 [i_0] [i_0]))) - 37727)))))))));
    }
    var_16 = (max(var_16, ((((~var_4) << var_2)))));
    var_17 = (min(((var_9 ? (15316 & var_13) : (!var_0))), (((var_2 >= ((min(var_10, var_4))))))));
    #pragma endscop
}
