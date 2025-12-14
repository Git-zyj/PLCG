/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = (var_6 | var_14);
    var_21 = var_4;
    var_22 = ((min(-306924327, 12030899395266078329)) | var_9);

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_23 = (!var_1);
        var_24 = (((((arr_0 [i_0]) - (arr_0 [i_0])))) | (min((arr_0 [15]), (arr_1 [i_0] [4]))));
        var_25 = (min(var_25, ((((!var_18) <= (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))));
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_26 += min(21, (arr_5 [i_1]));
        var_27 = var_1;
    }
    #pragma endscop
}
