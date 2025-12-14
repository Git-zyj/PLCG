/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += 536739840;
    var_12 = (min((((var_6 % (var_7 >= var_0)))), var_4));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 + 2] [i_0] = 4917732743282888728;
        arr_3 [11] = 3238013142658936852;
        var_13 = 25002682;
        var_14 = min((arr_1 [i_0]), (min((arr_1 [6]), (arr_0 [i_0] [i_0]))));
        var_15 = max((((-(min(536739840, 1804472852))))), (((arr_1 [i_0]) ? 1536916203 : (arr_0 [i_0 - 2] [i_0]))));
    }
    var_16 = (-6775126980839709853 ? -3516591372443381118 : -3238013142658936853);
    #pragma endscop
}
