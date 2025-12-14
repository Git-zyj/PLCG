/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [2]);
        var_18 = (!(arr_1 [i_0 + 3] [i_0 - 4]));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 = ((((~(arr_0 [i_0])))) || (arr_0 [i_0 - 3]));
                    var_20 = (((arr_6 [i_2 - 2] [1] [i_2]) ? (arr_6 [i_2 - 2] [i_2 - 2] [i_2 - 1]) : (arr_6 [i_2 - 2] [i_1] [8])));
                    var_21 *= ((((((arr_5 [3]) ? (arr_4 [i_0 + 1] [i_1] [i_2]) : 226))) ? (((0 - (arr_8 [i_0] [i_1] [i_2])))) : (arr_5 [i_0 - 3])));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_13 [i_3] = (((arr_3 [i_1] [i_2 - 2]) >= (arr_3 [i_1] [i_1])));
                        var_22 = (~113);
                        var_23 = 6743927051182165512;
                    }
                    var_24 = (arr_8 [i_0] [6] [5]);
                }
            }
        }
        var_25 = ((~((-(arr_7 [i_0] [i_0] [i_0] [2])))));
    }
    var_26 = var_8;
    var_27 = ((~(!var_14)));
    var_28 = ((var_2 > ((((~-6743927051182165512) || var_16)))));
    #pragma endscop
}
