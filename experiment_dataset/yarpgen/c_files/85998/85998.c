/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((((-8921398407393085188 ? 4294967295 : -1)))), var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((-(arr_3 [i_1 - 1]))))));
                var_21 = 255;
            }
        }
    }
    var_22 -= (((286518924 ? ((0 ? 10 : 7853672858364473661)) : (((max(242, var_3)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_23 = min((((var_5 / (-9223372036854775807 - 1)))), ((((var_6 ? 16 : var_10)) * -var_13)));
                var_24 = ((!(arr_5 [i_3] [6] [0])));

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_25 = ((!(!-678545509416855007)));
                    arr_14 [i_2] [i_3] = (arr_1 [1]);
                }
            }
        }
    }
    #pragma endscop
}
