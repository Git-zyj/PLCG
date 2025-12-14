/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_18 = (min(var_18, ((~(max(var_9, ((var_12 ? var_16 : 51932))))))));
            var_19 = max(18446744073709551596, -38);
            var_20 = (((((var_6 ? 4934438943946103696 : var_6)))));
        }
        var_21 = (((var_2 ? var_13 : 0)));
        var_22 = ((!(~var_7)));
    }
    var_23 = (max(((6 ? (~49) : (((19424 >> (var_3 - 13351651795170409449)))))), ((max(((-9085759375397256347 ? var_9 : var_14)), ((max(var_5, 3))))))));
    var_24 = ((((max(((0 ? 85262398 : 19442)), 0))) ? ((((-49 + 2147483647) >> (var_14 - 165)))) : (min(var_10, 4294967283))));
    #pragma endscop
}
