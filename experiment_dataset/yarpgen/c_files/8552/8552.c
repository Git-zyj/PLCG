/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_16 = ((!((max(180, 65535)))));
        var_17 = (((((-(arr_2 [i_0])))) & (!var_3)));
        arr_3 [i_0] = ((((min(((-3862829870961969016 ? 237 : -1086496431877859233)), (arr_0 [i_0])))) ? (((((1086496431877859233 ? 718485956 : 0))))) : (((arr_2 [i_0]) ^ (((8191 ? 3054844526 : var_5)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 -= (max((((((((min(1, -8))) + 2147483647)) << ((((((min(var_15, (arr_1 [0])))) + 103)) - 11))))), (arr_2 [0])));
        arr_6 [i_1] = ((-((+(min((arr_1 [8]), (arr_0 [i_1])))))));
    }
    var_19 = (min(var_19, var_15));
    var_20 -= -8630885874013597853;
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_21 -= (max((arr_8 [i_5 + 3]), (min(((min((arr_15 [i_5 + 3] [i_5] [i_5] [i_5 + 3]), 3862829870961969015))), (arr_8 [i_5 + 2])))));
                                var_22 = arr_13 [i_2] [i_2] [i_2];
                            }
                        }
                    }
                    arr_18 [i_2] [i_3] [i_3] = (((max(3862829870961969015, (var_5 && -3862829870961969016))) ^ (~0)));
                    var_23 -= var_9;
                }
            }
        }
    }
    #pragma endscop
}
