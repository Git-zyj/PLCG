/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (arr_2 [i_0] [i_0])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_21 = 1;
                    var_22 = ((!(((var_17 ? 20310 : 1)))));
                    arr_9 [i_0] [i_0] [i_0] = (926442711963882732 != 1819516247822053332);
                }

                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    arr_12 [i_3] [i_3] [i_3] [i_3] = ((-471471638 ? (min(-111, (min(462, 33554432)))) : (((~(arr_10 [i_0] [i_0]))))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_1]);
                }
                var_23 = (((min(-4, (max((arr_10 [i_1] [i_1]), var_6)))) != ((((107348135 < (arr_6 [i_1])))))));
                arr_14 [i_1] = ((!((var_15 && ((min(var_8, 0)))))));
            }
        }
    }
    var_24 = ((17681 ? 65533 : ((max((var_2 <= 16455564713681617871), (max(var_17, 23785)))))));
    var_25 = var_12;
    var_26 = (max(var_26, (((1 / (((-379442636 % -1) ? (var_16 - -8746034657640693133) : (((min(111, 126)))))))))));
    #pragma endscop
}
