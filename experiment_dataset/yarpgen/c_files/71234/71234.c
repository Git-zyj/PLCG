/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(-1, 1);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = ((524803351 ? 37468 : 2));
        var_22 ^= ((!(arr_1 [2] [8])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 = ((((!((((((arr_2 [3]) + 2147483647)) << (var_5 - 18164305797744831565)))))) ? -23333 : ((max(1, 1)))));
        arr_4 [i_1] = (i_1 % 2 == zero) ? ((((min((18014398509481983 == 688966416), -0)) >> (((arr_3 [i_1] [i_1]) - 19092))))) : ((((min((18014398509481983 == 688966416), -0)) >> (((((arr_3 [i_1] [i_1]) - 19092)) + 7222)))));
    }
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        var_24 = ((((((max((arr_5 [i_2]), -1))) ? -6433476698586173206 : 8938609177217997464)) == (arr_6 [i_2] [i_2])));
        arr_7 [i_2 - 1] [i_2] = 0;
    }
    #pragma endscop
}
