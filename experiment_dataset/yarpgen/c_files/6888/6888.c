/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((((9190412990750606258 ? var_10 : 1)))) ? ((((!0) <= ((1 ? 1 : 869236681))))) : ((-((max(0, 1))))));
        arr_3 [i_0] &= var_10;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1 - 1] = 0;
        arr_8 [i_1] = ((((var_8 ? 9247 : 104)) | 1));
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = 26;
        arr_12 [i_2] [i_2] = ((~((-(!1)))));
        arr_13 [i_2] |= ((((max((10637880191526197656 <= 115), ((var_15 ? 97 : 1))))) ? (((!(arr_6 [i_2 + 1])))) : (arr_10 [i_2])));
        arr_14 [i_2] = 22223;
    }
    var_18 |= (max(1, 1));
    #pragma endscop
}
