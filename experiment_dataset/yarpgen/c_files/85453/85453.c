/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_19 = -1086148697090123324;
        var_20 = var_15;
        var_21 &= var_5;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((((-5054259512615519675 != var_8) ? 1496502526 : (min(9007199254740991, 255)))) % (max(9007199254740991, ((max(1, 255)))))));
        var_22 = (((arr_2 [i_1]) - ((((min(-1, -102))) ? 1186575580 : (arr_1 [i_1])))));
        arr_6 [i_1] &= var_10;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] |= ((var_2 ? 242 : ((4 ? -7 : 1411987627687935358))));
        var_23 += ((801338555 ? 2080374784 : 1186575580));
        arr_10 [i_2] [i_2] = ((((!(arr_0 [i_2]))) && (arr_1 [i_2])));
        var_24 = (31 * 0);
    }
    var_25 |= 3415653946;
    var_26 = (max(var_26, (0 | var_15)));
    #pragma endscop
}
