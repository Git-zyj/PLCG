/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (((var_7 >> (1210 - 1194))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((((arr_0 [i_0] [i_1]) + (arr_0 [i_0] [i_1]))))));
                    var_17 = (arr_7 [i_0] [i_0] [i_0] [i_2]);
                    var_18 = ((+(((arr_1 [i_1]) + (arr_4 [i_0] [2] [i_2])))));
                }
            }
        }
        var_19 = ((arr_4 [i_0] [i_0] [i_0]) < 1);
        var_20 &= (arr_0 [i_0] [i_0]);
        var_21 = (((arr_7 [i_0] [i_0] [9] [i_0]) ? (arr_6 [9] [i_0] [i_0]) : (arr_5 [i_0] [6] [6])));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_22 = -var_0;
                    var_23 = (((arr_1 [i_0]) || (((12 ? 81 : (arr_6 [1] [9] [i_4]))))));
                    var_24 = (arr_8 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
