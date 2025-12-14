/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, 1208));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = ((-(arr_1 [19])));
        var_12 = ((((min(-4573863401256987370, (arr_2 [i_0] [i_0])))) ? ((4573863401256987379 ? (((arr_2 [i_0] [i_0]) ? -11198 : 245)) : 51)) : ((-((31 ? (arr_0 [i_0] [i_0]) : var_5))))));
    }
    var_13 = (((((var_4 ? var_5 : ((47 ? var_7 : var_3))))) ? (((((((var_7 ? var_4 : var_7))) != (max(var_9, -4573863401256987382)))))) : var_6));
    var_14 = var_7;
    #pragma endscop
}
