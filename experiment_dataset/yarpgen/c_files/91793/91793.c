/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, 44));
    var_18 = var_1;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            arr_8 [i_1 - 3] = (min(((var_16 ? (arr_4 [i_1 - 1] [i_1 - 2]) : (arr_4 [i_1 - 1] [i_1]))), (((-1 <= ((((arr_2 [i_0] [i_0]) != var_12))))))));
            var_19 = ((!(arr_0 [i_0])));
            var_20 = (((arr_1 [i_1]) << (-43978 + 44001)));
            var_21 = (min(var_21, ((min(21565, (max(-25297, 21568)))))));
            var_22 = ((((arr_0 [i_1 + 1]) ? (arr_7 [i_0] [i_0]) : (((min((arr_7 [i_0] [i_0]), -45)))))));
        }
        var_23 = ((~(((arr_3 [i_0]) ^ ((min(21557, var_8)))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_19 [i_4 + 2] [i_4 + 1] [i_2] [i_4 + 1] = var_15;
                        var_24 -= (~var_10);
                        var_25 = (max(((((arr_13 [i_2] [i_2] [i_3 + 4]) / 43961))), (((arr_13 [i_2] [i_2] [i_3 + 4]) ? (arr_13 [i_2] [i_2] [i_3 - 3]) : (arr_17 [i_2] [i_2] [i_2] [i_2] [i_3 - 3] [i_3 - 3])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
