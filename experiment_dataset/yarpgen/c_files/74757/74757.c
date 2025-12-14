/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = var_8;
        var_11 += (~63);
        var_12 = arr_1 [i_0];
        arr_2 [i_0] [i_0] = (~var_0);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 = (max(var_13, ((max(63, 1365596846)))));
        var_14 = (((var_6 && -var_2) & (((!(arr_4 [i_1]))))));
        arr_5 [4] [i_1] |= ((max(((var_5 ? var_3 : var_4)), (var_2 ^ 63))) > ((max((max(65535, 1358347780)), (var_6 ^ -1908778662)))));
        var_15 = ((((max((((var_0 && (arr_4 [16])))), var_9))) ? ((max(1953438396, -89))) : var_6));
        var_16 = (min(var_16, ((((((max(var_8, (arr_3 [i_1]))))) ? ((max((var_2 || 183), ((var_5 >> (3677865486 - 3677865475)))))) : ((((max(var_3, var_8))) ? ((((arr_4 [i_1]) % var_1))) : (((arr_3 [i_1]) ? 0 : (arr_1 [i_1]))))))))));
    }
    var_17 -= var_5;
    var_18 = 73;
    var_19 = (max(var_19, (((var_8 ? (((((0 ? var_3 : var_5))) ? ((var_8 ? var_6 : var_7)) : -var_5)) : var_6)))));
    var_20 = (max(var_20, ((max((((max(1, var_8)) % ((var_6 ? var_4 : var_0)))), (var_6 && 3407170542))))));
    #pragma endscop
}
