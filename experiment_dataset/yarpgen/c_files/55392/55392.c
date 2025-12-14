/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_1 - 1] = ((~(arr_0 [i_1 - 1])));
            arr_5 [i_0] [10] = 8515069892078780176;
            arr_6 [i_0] [i_1 - 1] = (((0 ^ 1) / 25305));
            arr_7 [i_0] [9] = (arr_0 [8]);
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_12 [12] [12] [i_2] = (-77 / -1851866740);
            arr_13 [i_2] = (arr_2 [i_0] [i_2]);
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_14 ^= 1851866752;
            arr_17 [i_0] = ((((((((min(1, 158)))) / 2443100555))) ? 0 : (arr_0 [i_0])));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_15 -= ((61443 ? -10445 : 25305));
            arr_20 [i_0] [i_0] = ((~((9223372036854775807 << (((min((arr_19 [i_0]), 2)) - 2))))));
            var_16 = (max(var_16, (arr_9 [i_0] [i_0] [i_4])));
            arr_21 [16] [16] = max((((1485279407 | (arr_15 [i_0] [i_0])))), (max(((46 ? 2 : -6157944861434807229)), ((0 / (arr_19 [i_4]))))));
        }
        arr_22 [i_0] [5] = ((-(((!(((-9223372036854775807 ? 1 : (arr_19 [i_0])))))))));
    }
    var_17 = 4084;
    var_18 = (min(0, 7154310658966865589));
    var_19 = ((((((((5624458643191068791 ? var_2 : var_0))) ? (6610962772796942970 < var_12) : (var_11 != -3318)))) ? ((var_0 ? var_11 : (6610962772796942976 - 88416051))) : (var_0 != var_8)));
    #pragma endscop
}
