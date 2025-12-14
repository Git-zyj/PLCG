/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 = var_15;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (min((max(0, ((var_11 ? (arr_0 [i_0]) : var_5)))), ((max(var_2, ((-531772027 ? 0 : var_11)))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = var_1;
                    var_19 = (arr_8 [i_0] [i_1 - 2]);
                    arr_9 [i_0] [i_0] [i_2] = 8;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = -1026603675;
        var_20 = (((arr_10 [i_3 - 1]) ? (arr_10 [i_3 + 2]) : var_8));
        var_21 = (9854466793044073594 ? ((4294967295 ? var_5 : 112060105)) : var_13);
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_22 = ((var_13 ? 6033670391797623852 : var_13));
        var_23 += ((-1 ? ((min(((0 ? 107252970 : 1)), ((min(1783607445, 1)))))) : ((94 ? var_5 : ((((arr_16 [i_4] [i_4]) ? (arr_16 [i_4] [i_4]) : 0)))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = (((arr_3 [i_5] [i_5]) >= (arr_17 [i_5])));
        var_24 = (((((var_8 ? var_4 : var_12))) ? 1 : 1));
    }
    #pragma endscop
}
