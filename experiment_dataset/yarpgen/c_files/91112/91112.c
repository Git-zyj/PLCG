/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((var_4 == (((var_7 ? (1 || var_5) : (var_8 & 1))))));
    var_12 &= ((-(~var_10)));
    var_13 = var_9;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_14 = ((~(((!(!var_9))))));
        arr_2 [1] [i_0] &= arr_0 [i_0] [i_0];
        var_15 = (((((~(arr_1 [i_0 - 2])))) || ((1 < ((max(var_7, var_8)))))));
        var_16 = (max(var_16, (((((((arr_0 [i_0 + 4] [i_0 - 3]) && var_9))) << ((((23920 || var_3) >= (!209417997274450138)))))))));
        var_17 = (1 > -966);
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_18 = ((((((arr_3 [i_1]) * var_5))) ? ((161 << (-23763 + 23767))) : (max(((-7090 ? var_2 : var_1)), (1553 << var_3)))));
        arr_6 [i_1] [i_1] = (max((arr_4 [i_1] [i_1 + 3]), (((23763 + var_3) ? (arr_5 [3]) : -23752))));
        var_19 = (min(var_19, ((((((arr_3 [i_1 + 1]) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1 + 1]))) | ((-21657 | (arr_3 [i_1 + 1]))))))));
        arr_7 [i_1] = (((((((arr_3 [i_1 + 3]) == 1))) != ((((arr_5 [i_1]) && 0))))));
    }
    #pragma endscop
}
