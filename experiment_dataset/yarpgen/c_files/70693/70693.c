/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 ^= (max((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1]))), (77 >> var_5)));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 = ((((((max((arr_6 [i_0] [4]), var_11)) ? ((82 ? var_10 : var_1)) : ((min((arr_3 [i_0]), var_11)))))) ? 15004889224409582257 : ((min((((arr_6 [i_1] [i_2]) ? (arr_7 [17] [i_1]) : -87)), ((min(18947, 0))))))));
                    var_16 -= ((+(((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_6 [i_1] [i_2])))));
                    var_17 = (min(var_17, var_12));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [i_3] = (arr_4 [i_0]);
                    var_18 = (((((arr_10 [i_0] [i_1] [i_0] [i_3]) >> (-82 + 112)))) ? ((var_5 ? 87 : (arr_3 [i_0]))) : var_5);
                    arr_13 [i_0] [i_3] [i_1] [i_0] = ((arr_11 [i_3 + 3] [i_3 - 1] [i_3 + 3]) != ((3985164756595358942 >> (18947 - 18946))));
                    arr_14 [i_0] [i_3] = (var_12 + 46588);
                }
                var_19 = var_13;
                arr_15 [i_0] [i_0] [i_1] = (max(((54 * (arr_6 [i_0] [3]))), (var_11 || 40)));
                arr_16 [i_0] [i_1] = (arr_0 [i_0]);
            }
        }
    }
    var_20 = -87;
    var_21 = 1274564234098085185;
    var_22 = ((var_13 % (var_13 ^ var_12)));
    #pragma endscop
}
