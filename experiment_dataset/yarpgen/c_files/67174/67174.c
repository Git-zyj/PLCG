/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (27021597764222976 << 1);
        arr_4 [11] = 0;
        var_13 = (min((min((!1963630160), (~65524))), ((~(~145)))));
        arr_5 [0] [i_0] = arr_1 [11];
        arr_6 [i_0] = (18446744073709551608 & 140600049401856);
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_10 [i_1 + 1] [18] = (arr_9 [4]);

        for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
        {
            arr_14 [i_2 - 2] [i_1 + 3] [i_1 - 2] = (arr_12 [i_1 + 3]);
            var_14 = 126;
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_17 [i_1] [9] = (((arr_12 [i_1 - 1]) + (arr_12 [i_1 + 3])));
            arr_18 [i_1] = (((arr_11 [i_1]) ? (arr_12 [6]) : 7330520814248913815));
            var_15 &= (-9223372036854775807 - 1);
        }
    }
    var_16 &= var_9;
    #pragma endscop
}
