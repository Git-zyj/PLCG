/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (min((min((max(3721, -536870912)), ((max(61814, -28626))))), var_5));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_19 *= ((!(((-805693479543064279 ? (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0 + 1]) : (arr_0 [i_0] [i_0]))) : 8)))));
        arr_2 [i_0 - 1] = (min((min(((347969412382086369 << (141 - 116))), (min(1468650901, (arr_1 [i_0]))))), (((8670123919053035658 || ((min(-8943, (arr_0 [i_0] [i_0])))))))));
        var_20 += ((~((~(993651308872817660 ^ -1088)))));
    }
    #pragma endscop
}
