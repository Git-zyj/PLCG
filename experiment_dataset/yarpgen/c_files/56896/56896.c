/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_16 = ((((max(((min(1, (arr_0 [i_0])))), 828896941))) ? 10627665143254917087 : (((~((min(var_0, (arr_1 [i_0])))))))));
        arr_2 [i_0] = ((((32767 > 32758) % (arr_1 [i_0]))) >= (arr_1 [i_0 + 2]));
        var_17 += ((~(((!(arr_0 [i_0 - 1]))))));
        arr_3 [i_0] = ((max(18446744073709551615, var_4)));
        var_18 = (max(var_18, ((((min(17412613551572168971, (((!(arr_0 [i_0 - 1]))))))) ? ((7 ? (-2147483647 - 1) : (((arr_1 [i_0]) + 23)))) : ((~(arr_0 [i_0 - 2])))))));
    }
    var_19 = 127;
    #pragma endscop
}
