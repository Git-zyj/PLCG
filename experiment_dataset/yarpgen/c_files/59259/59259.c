/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;
    var_13 = ((-((((var_4 ? var_4 : 0))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (((((max(6, 65535))) ? (!2) : 84)))));
        arr_3 [i_0] [i_0] = ((~((63 ? (arr_1 [i_0]) : (arr_2 [4])))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [8] &= (((((arr_0 [i_1] [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1])))) ? (min((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_1]))) : (arr_5 [i_1]));
        arr_7 [i_1] = (max((arr_0 [i_1] [i_1]), ((((arr_0 [i_1] [i_1]) != (arr_0 [10] [i_1]))))));
        arr_8 [16] &= (min((arr_4 [6]), -var_10));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_15 &= 2689988761756592082;
        var_16 = (min(var_16, (((((((arr_2 [i_2]) ? (min((arr_4 [14]), var_11)) : (1970506641 >> var_6)))) ? 65529 : (!65529))))));
        arr_11 [i_2] = min((!-65535), (arr_0 [i_2] [i_2]));
        arr_12 [1] &= ((!65529) != (((arr_4 [10]) ? (arr_4 [8]) : (arr_10 [i_2]))));
    }
    var_17 = (max(var_17, (~var_3)));
    var_18 = (min(var_18, var_9));
    #pragma endscop
}
