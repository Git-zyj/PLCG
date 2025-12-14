/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 += (max(var_6, 3883666727411324666));
                arr_6 [i_0] [i_1] = ((((max((max(-3883666727411324666, (arr_4 [11] [i_0 - 1]))), ((min(var_7, -3883666727411324676)))))) ? (min(-3883666727411324686, -6547188884055275418)) : ((((~89) ? ((((arr_5 [i_0 + 1] [i_0 + 1] [i_0]) << (19454 - 19437)))) : (3072 | 946402839))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_11 = (((arr_3 [i_0] [i_1]) ? (arr_5 [i_2] [i_1] [i_2 + 2]) : 3102));
                    arr_9 [2] [i_2] [8] = (((arr_8 [i_2]) < var_4));
                    var_12 = 131;
                }
                for (int i_3 = 3; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_1] [i_3] [i_3] = ((((min(var_0, (min(var_9, 18446744073709551612))))) ? (arr_10 [i_0 + 1] [i_1] [i_1] [i_1]) : ((min(-var_6, 19454)))));
                    var_13 = (min(var_6, var_9));
                    var_14 = (max(((((arr_1 [i_1] [1]) * var_1))), (((var_9 & ((-3883666727411324688 ? var_7 : 99)))))));
                    arr_14 [i_0] [i_3] [i_3] = var_3;
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_15 = ((arr_16 [i_4 + 1] [i_4 + 1] [i_0 - 1]) * (arr_16 [i_4 + 1] [i_1] [i_0 - 1]));
                    var_16 ^= (arr_8 [1]);
                }
                for (int i_5 = 3; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_17 = min((((((var_2 ? (arr_10 [0] [i_1] [i_1] [i_5]) : -1542800143764882354))) ? 63 : ((var_9 ? (arr_4 [i_0] [i_5]) : var_1)))), (arr_10 [1] [1] [i_5 + 1] [i_0 + 2]));
                    arr_20 [3] [i_0] [i_1] [i_5] = (max((((55 || ((min(16069985159959089078, (arr_0 [0]))))))), var_8));
                }
                var_18 = ((-((2147483644 ? 120 : 89))));
                var_19 = var_5;
            }
        }
    }
    var_20 = var_8;
    var_21 = ((((max(var_7, -132))) && var_6));
    #pragma endscop
}
