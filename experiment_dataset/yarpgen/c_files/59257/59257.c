/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 17770584254286526581;
    var_19 = var_10;
    var_20 |= var_6;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = ((46857 ^ ((18694 ? (arr_1 [i_0 + 1]) : ((max((arr_1 [i_0 + 1]), 18674)))))));
        arr_3 [1] [i_0] = ((-((32 / (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = 17770584254286526581;
        var_21 += (63 | 17770584254286526581);
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (((((max(1, -17833)))) % (((arr_0 [i_2]) ? (arr_1 [i_2 - 1]) : ((max(-17847, 17832)))))));
        arr_12 [i_2] = ((~((~((max(-17856, 101)))))));
    }
    #pragma endscop
}
