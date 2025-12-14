/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_7;
    var_14 = (min(var_14, ((max((max((max(var_1, var_7)), (var_2 / var_2))), (~var_0))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (arr_0 [i_0] [i_0])));
        arr_3 [21] [1] = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_16 = (((var_1 ? var_11 : -3)));
        arr_8 [i_1] = ((-3 - ((33 >> (252852234513893933 - 252852234513893911)))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_12 [13] = (max((min(((((arr_4 [i_2]) < (arr_4 [i_2])))), (max(var_4, 252852234513893929)))), (((~(((var_6 && (arr_10 [i_2])))))))));
        var_17 = ((((((1 ? var_5 : 18193891839195657693)) << (252852234513893923 - 252852234513893898))) | ((18193891839195657685 ? 10 : ((var_1 ? 18193891839195657683 : 252852234513893933))))));
    }
    var_18 = (min((((-(var_9 * var_0)))), var_12));
    #pragma endscop
}
