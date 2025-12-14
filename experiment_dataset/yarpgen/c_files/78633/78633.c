/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (max((1 < 1), (max(var_8, var_1))));
    var_14 = ((((((var_5 / var_9) ? var_9 : ((var_5 ? 1 : var_12))))) ? var_11 : ((min(((var_4 ? 0 : 505600886)), var_7)))));
    var_15 = var_6;
    var_16 = (((((var_4 ? var_7 : var_0) >> (!var_12)))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 2] = (~-var_8);
        arr_3 [i_0] [1] = var_12;
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((((arr_5 [i_1] [i_1]) % (arr_6 [i_1 + 1])))));
        arr_8 [i_1] = ((((min(-4, var_12))) ? (((+((var_1 ? (arr_6 [i_1]) : 234))))) : ((((((arr_5 [i_1] [i_1]) ? -927080376 : var_3))) ? var_4 : ((0 ? (arr_4 [i_1]) : (arr_5 [i_1] [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_17 = (min(var_17, (((1 + ((-1426120716511989585 ? (((arr_12 [i_2]) - 653175676)) : 1)))))));
        var_18 = (arr_9 [i_2] [1]);
        var_19 &= ((234 ? 4 : 108));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_20 &= (arr_13 [i_3]);
        var_21 = (((arr_9 [i_3] [1]) % ((-(arr_11 [i_3])))));
        var_22 = (min(var_22, ((((arr_10 [i_3]) ? (arr_14 [i_3]) : (arr_12 [i_3]))))));
        var_23 -= ((3587186423 ^ (((arr_11 [i_3]) ? (arr_9 [i_3] [i_3]) : (arr_11 [i_3])))));
    }
    #pragma endscop
}
