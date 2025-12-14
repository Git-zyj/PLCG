/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(((31559 % 30720) ? ((max(1, 114))) : ((var_9 ? var_9 : 227))))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((((var_7 ? -var_0 : (((var_2 || (arr_1 [i_0]))))))) * (min((57 ^ 9007199254740991), (28 >= 228)))));
        var_12 = (((((43 ? 37258 : ((1965332824083987945 ? 7 : 198))))) ? 34 : (((arr_1 [i_0]) ^ ((-5427886168658113488 ? 0 : 0))))));
        var_13 = (min(var_13, 1));
    }
    var_14 = 1;
    #pragma endscop
}
