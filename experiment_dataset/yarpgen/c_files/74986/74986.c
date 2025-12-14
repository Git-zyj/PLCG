/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((0 ? -1 : 7));
    var_13 = (var_4 ^ -5);

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_4 [1] [1] = (min((min(7, ((max(0, -1))))), (!-4)));
        var_14 = ((((min((arr_2 [i_0]), (arr_0 [i_0 - 1])))) ? 6386261057749075313 : (((-(13039 && var_3))))));
    }
    var_15 = ((0 ? 33814 : -6));
    #pragma endscop
}
