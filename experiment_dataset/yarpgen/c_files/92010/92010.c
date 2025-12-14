/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 = (min(var_20, ((((((22 ? (arr_5 [i_2] [i_1] [i_0] [i_0]) : (arr_1 [i_0])))) ? (((arr_1 [i_0]) ? (arr_1 [i_2]) : 18409136218610122593)) : ((((arr_1 [i_1]) ? (arr_5 [i_0] [1] [i_2] [5]) : (arr_1 [i_1])))))))));
                    var_21 = (-(min(((var_11 ? (arr_4 [i_0] [15] [i_0]) : (arr_1 [i_0]))), (200 ^ var_14))));
                    var_22 |= 81;
                    var_23 = var_14;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_24 = arr_8 [2] [2] [i_3] [i_3];
                    var_25 = (((((9136 >> (var_11 - 109)))) <= 0));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_26 = 3478368186535797353;
                    var_27 = 133;
                    var_28 = ((212 ? ((var_19 ? (arr_8 [i_0] [i_0] [i_0] [11]) : 185)) : (arr_8 [i_0] [i_1] [10] [i_4])));
                    var_29 = -9136;
                }
                var_30 = var_19;
            }
        }
    }
    var_31 = ((!(((3478368186535797353 ? (!9223372036854775792) : 4294967295)))));
    var_32 = -9223372036854775792;
    #pragma endscop
}
