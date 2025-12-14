/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((+(max((~var_12), ((var_11 ? var_5 : var_1))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(((max(var_4, 55))), var_8))) || (((9899244531241511815 ? var_3 : ((var_8 ? var_4 : (arr_0 [i_0]))))))));
        arr_3 [13] = (min(((((arr_1 [i_0] [i_0]) >= var_5))), ((var_3 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 = (max(var_16, ((((arr_0 [i_1]) ? (arr_5 [i_1]) : var_3)))));
        var_17 = (min(var_17, 113));
        var_18 = (max(var_18, (arr_5 [i_1])));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_19 = (((min((arr_7 [i_2] [i_1] [i_1]), (arr_4 [i_1]))) >= (((((((arr_6 [i_1]) || (arr_4 [i_2])))) << (var_10 - 589871476))))));
            var_20 = var_3;
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_21 = (max(var_21, (arr_9 [i_1] [i_3] [0])));
            arr_12 [i_3] [i_1] = ((((var_4 ? ((((arr_9 [i_3] [i_1] [i_1]) ? (arr_11 [i_3] [i_1]) : (arr_5 [i_1])))) : (arr_10 [i_1] [i_1] [i_3])))) ? (!var_12) : -51);
        }
        arr_13 [i_1] = ((((arr_10 [i_1] [i_1] [i_1]) >> (340048928846311951 - 340048928846311949))));
    }
    var_22 = (((((((max(var_6, var_12)))) <= var_7)) ? (~-9223372036854775797) : var_12));
    #pragma endscop
}
