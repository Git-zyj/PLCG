/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_20 = var_18;
        var_21 += (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_22 ^= (max((((min(var_0, (arr_0 [i_1]))) << (max(-1577427111, 1)))), 3588093135119971654));
        var_23 = (max(var_5, (arr_2 [i_1] [1])));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2] = ((var_11 || (arr_7 [i_2])));
        arr_9 [i_2] = -16;
        var_24 = (min(((((arr_6 [i_2]) ? (arr_6 [i_2]) : (arr_6 [i_2])))), ((1 ? 1 : 6170543654455182191))));
        var_25 += ((var_1 ? 65524 : ((max((arr_1 [i_2] [i_2]), (arr_1 [i_2] [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_26 = (max((((1 || (arr_12 [i_3])))), (((arr_12 [i_3]) ^ (arr_10 [i_3] [i_3])))));
        var_27 = (min(var_27, ((min(144115188075855871, ((((18302628885633695744 < var_16) ? (1 - 1) : (arr_10 [i_3] [i_3])))))))));
        arr_14 [i_3] = ((((arr_11 [i_3] [i_3]) ? (arr_11 [i_3] [i_3]) : (arr_11 [i_3] [i_3]))));
        var_28 = (max(var_28, ((min(((6170543654455182188 ? (120 <= 18302628885633695745) : ((18302628885633695750 ^ (arr_11 [i_3] [15]))))), ((((arr_11 [i_3] [i_3]) ? 21 : (arr_11 [i_3] [i_3])))))))));
        var_29 = var_10;
    }
    var_30 = ((((((min(var_5, var_13)) ^ (((var_2 ? var_13 : 1)))))) ? var_13 : (((!(var_6 | -1998459605))))));
    #pragma endscop
}
