/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((-20891 ? 1 : 10265090318899356492))), (~var_13)));
    var_21 = var_11;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(((arr_1 [i_0 - 2]) ? var_15 : var_2))));
        var_22 = (max(var_22, ((((((~(arr_0 [i_0 + 1])))) ? (((max(var_3, var_6)))) : ((var_9 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 2]))))))));
        var_23 = ((((-(arr_0 [i_0 - 2]))) > ((min((arr_0 [i_0 + 1]), var_18)))));
        arr_3 [i_0] [i_0] = var_13;
    }

    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_24 = ((((arr_5 [i_1]) && (arr_1 [i_1]))));
        var_25 = var_16;
        arr_6 [1] = (((((min(var_1, var_11)))) ? -var_9 : (221 || var_9)));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_26 = (min(var_26, ((((3016083064624952760 % (min(593916251220469894, -3420547392196467317))))))));
        arr_11 [i_2] [i_2] = (arr_0 [i_2]);
        var_27 = (min(var_27, ((((((arr_7 [i_2]) | (~var_4))) < (min(var_6, (max(var_1, var_4)))))))));
        var_28 = (min((((1 || ((min(-1820553004730134648, 17283)))))), (((arr_10 [i_2]) ? (arr_10 [i_2]) : (arr_10 [i_2])))));
        var_29 += var_4;
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_30 = (max(var_30, ((-var_9 <= ((min((arr_7 [i_3]), (((arr_10 [8]) & (arr_13 [i_3] [i_3]))))))))));
        var_31 = var_9;
    }
    #pragma endscop
}
