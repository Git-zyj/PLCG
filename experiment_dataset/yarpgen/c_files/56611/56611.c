/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_16 = (max(var_16, 8051804629502031456));
        var_17 = (max(var_17, ((((((((arr_2 [i_0] [i_0]) + (arr_1 [i_0 + 2])))) * (max(10394939444207520158, var_3)))) / ((((((10394939444207520154 ? -82 : (arr_2 [i_0] [i_0])))) ? (((arr_0 [i_0]) / 16)) : ((-(arr_0 [i_0]))))))))));
        var_18 = (-(((arr_1 [i_0 - 2]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 1]))));
        var_19 = (((arr_1 [i_0]) + (~10394939444207520158)));
        var_20 = (((((arr_1 [i_0 - 1]) && (arr_1 [i_0 + 1])))) >= (arr_1 [i_0 - 2]));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (+(((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : 8051804629502031465)));
        var_21 ^= (arr_5 [i_1]);
        arr_7 [i_1] [i_1] = -10394939444207520184;
        arr_8 [i_1] = var_1;
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (((arr_9 [i_2] [i_2]) / 202));
        var_22 = (3806434962574994393 / 4365);
    }
    var_23 = ((~((var_0 - (((max(4486, var_15))))))));
    #pragma endscop
}
