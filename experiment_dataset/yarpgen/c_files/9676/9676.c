/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = var_4;
        var_10 = 8966;
        arr_4 [1] [6] = -7622025516937568670;

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_11 = (((((8982 && (((-18405 ? 8976 : (arr_6 [i_0] [i_1 - 1] [i_1 - 1]))))))) <= (min(((max(8966, 1))), (((var_8 + 2147483647) >> (8990 - 8975)))))));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_10 [i_1] [10] = ((1 ? 1 : 236));
                arr_11 [i_0] [i_1 - 1] [i_2] [i_1] = ((!((((((365402338 ? var_4 : 33554400))) ? ((max(var_8, 8972))) : ((var_1 ? 32767 : 8966)))))));
            }
        }
        var_12 = (min(var_12, -527690754007670186));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_13 = (var_3 | (((((arr_12 [i_3] [i_3]) <= 13)))));
        var_14 = (arr_12 [i_3] [i_3]);
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_15 = (46132 && 67);
        var_16 = (max(var_16, ((min(-137438953440, ((((arr_14 [i_4] [i_4]) & var_2))))))));
        var_17 = (((-18405 ? 2278083772674550077 : (-4853292343706353522 - -4943558197776602047))));
        var_18 = ((~(arr_12 [12] [i_4])));
        var_19 *= 8967;
    }
    var_20 = var_0;
    var_21 *= var_2;
    #pragma endscop
}
