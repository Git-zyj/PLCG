/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_10));
    var_15 &= var_0;
    var_16 = var_13;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (arr_0 [i_0]);
                    arr_8 [i_1] [i_1] [i_2] = (549578571 || -549578571);
                }
            }
        }
        var_18 = (max((((!(arr_6 [i_0] [17] [11])))), var_12));
        var_19 = ((((min((((arr_3 [i_0]) ? var_9 : var_9)), var_5))) ? 1 : ((var_13 ? ((var_7 ? (arr_3 [i_0]) : (arr_7 [i_0] [i_0] [12] [1]))) : ((((var_3 >= (arr_3 [i_0])))))))));
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_20 += (arr_1 [i_3]);
        var_21 = (max(var_21, (((((min((var_3 * var_3), -var_10))) ? (max(1, 8236396631514268289)) : (arr_7 [12] [i_3] [i_3] [12]))))));
        arr_12 [i_3] [i_3] = ((~(((arr_1 [i_3]) ? (arr_0 [i_3]) : (((var_11 || (arr_4 [12] [i_3]))))))));
        var_22 = (((!var_0) ? (min((arr_10 [i_3] [i_3]), var_7)) : ((((((arr_1 [i_3]) ? (arr_7 [i_3] [i_3] [i_3] [4]) : var_3))) ? (arr_10 [i_3] [i_3]) : (arr_2 [14] [i_3] [i_3])))));
        arr_13 [i_3] = ((min(6370014021050643351, 1)) / ((var_13 ? (arr_6 [i_3] [i_3] [i_3]) : var_6)));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_23 += ((((min((arr_3 [i_4]), (arr_6 [i_4] [i_4] [i_4])))) || ((min((((arr_3 [i_4]) ? (arr_1 [i_4]) : (arr_5 [i_4] [12] [i_4]))), (((var_2 || (arr_1 [i_4])))))))));
        var_24 = (max(var_24, ((((1757920456 < 146) ? (((-1 ? 69 : 536870911))) : (max(-var_12, (((arr_2 [18] [6] [20]) & var_4)))))))));
        arr_16 [i_4] |= var_5;
        var_25 = (((max(1, 17169079617274996088)) % (((arr_6 [16] [0] [i_4]) * (arr_15 [i_4] [i_4])))));
    }
    #pragma endscop
}
