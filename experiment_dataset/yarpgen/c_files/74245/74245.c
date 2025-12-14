/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = 0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 31580;
        arr_3 [i_0] [i_0] = -5563125929151076082;
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = ((((((((31599 ? var_0 : var_2))) ? (var_11 - -31600) : ((((arr_4 [i_1]) ? 0 : var_6)))))) ? ((1 ? (34 == 0) : (arr_5 [i_1]))) : ((((arr_5 [i_1]) + ((-31610 ? -19461 : var_9)))))));
        arr_7 [i_1] [8] |= ((-((-19461 ? 9067543529317042326 : (arr_5 [1])))));
        arr_8 [i_1] [i_1 - 1] = (3441570337 * 2);
        var_22 += ((((var_5 ? 9067543529317042326 : (((arr_4 [1]) ? var_4 : 11272537087781193429)))) % 32767));
        arr_9 [i_1] = ((((-(arr_4 [i_1])))) ? 3415631848 : (((31599 ? 0 : 1))));
    }
    #pragma endscop
}
