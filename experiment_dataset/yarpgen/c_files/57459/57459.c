/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_10 = (max(var_10, ((((~(~1638134858))) << (((((var_3 | 1) & var_3)) - 9069194301404536976))))));
        var_11 = (max(var_11, (max(var_9, (max((~29003), ((var_8 >> (var_2 - 7475185999853090560)))))))));
        var_12 = var_0;
    }
    var_13 = (((((var_6 ? var_2 : (((1638134858 ? var_6 : -1638134859)))))) ? (((!(var_8 * 1)))) : (((!((max(795642173, var_2))))))));
    #pragma endscop
}
