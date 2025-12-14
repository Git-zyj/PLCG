/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((var_8 ? var_4 : (!var_9))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (((var_6 % var_8) ^ ((~((min((arr_3 [2]), (arr_1 [5]))))))));
        var_14 = -6;
        var_15 = ((~((-7 ? (arr_2 [i_0]) : 1))));
        arr_5 [i_0] = ((((max(var_5, 9117739635291677855))) ? -1764066700 : var_3));
    }
    #pragma endscop
}
