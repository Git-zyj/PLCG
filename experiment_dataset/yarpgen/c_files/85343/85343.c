/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((-(max(((24 ? var_0 : var_7)), ((max(10, 41919)))))));
    var_12 = var_8;
    var_13 *= var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((!(((26 ? (~30214166) : ((((((arr_0 [i_0] [i_0]) + 2147483647)) >> (var_8 - 2293788368)))))))));
        arr_4 [i_0] = (max(16, 226));
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = ((~(((((arr_2 [i_1] [i_1]) >= var_9)) ? var_7 : (~var_6)))));
        arr_8 [i_1] [i_1] = 7936;
        arr_9 [i_1] = ((116768822555355103 + (((-((var_6 ? var_10 : (arr_6 [5] [5]))))))));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        arr_12 [i_2] = ((!((var_3 < ((var_1 ? var_0 : 1))))));
        arr_13 [i_2] = var_1;
        arr_14 [i_2 + 1] = ((var_0 ? var_1 : var_5));
        arr_15 [i_2] [7] = (max(5428596580233873848, var_8));
        var_14 = ((((!(arr_11 [i_2 + 1] [i_2 + 2]))) ? (var_3 || 1766275226173703095) : (max(116, ((var_7 ? var_6 : (arr_0 [i_2] [i_2])))))));
    }
    #pragma endscop
}
