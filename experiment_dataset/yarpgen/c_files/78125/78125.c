/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        var_19 &= 17907187321788214141;
                        var_20 = (((2445185101477541013 / (arr_6 [i_3] [i_1] [i_0]))));
                        var_21 = (max(var_21, (((-(~317187028))))));
                        arr_13 [1] [i_1] [i_2] [1] [i_3 - 3] = (arr_11 [i_3 - 2] [i_2] [i_2] [i_0 - 1]);
                        var_22 = (min(var_22, -94));
                    }
                    var_23 &= var_1;
                }
            }
        }
    }
    var_24 = ((((24576 ? (((max(var_16, var_13)))) : (min(var_6, var_9)))) < ((((var_12 % var_3) / var_5)))));
    #pragma endscop
}
