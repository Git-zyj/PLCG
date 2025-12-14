/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((arr_6 [i_1] [i_0]) ? (((min(var_4, (arr_3 [i_0]))))) : (min((6774733485892846369 && 4294967287), (((arr_0 [i_1]) ? (arr_4 [i_0]) : var_2))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_20 = ((-118 + (min(var_4, (arr_9 [i_2] [i_3])))));
                            arr_13 [i_3] [i_2] [i_2] [i_0] = (min((((arr_11 [i_2] [i_2] [i_2] [i_2]) ? ((((arr_3 [12]) + 106))) : (arr_6 [i_1] [i_2]))), ((max(-9223372036854775788, var_10)))));
                            var_21 = ((min((min(6774733485892846359, (arr_0 [i_0]))), var_12)));
                            var_22 = (min(var_22, (((((11672010587816705233 | (arr_11 [i_0] [i_1] [i_0] [i_3]))) ^ (~28083))))));
                        }
                    }
                }
                var_23 = (min(((+(min((arr_11 [i_1] [i_0] [i_0] [8]), var_3)))), (((max(8137008560727856568, var_8)) % ((min(34212, var_0)))))));
                arr_14 [i_1] [4] = 46931;
                var_24 = (((((((8128 && (arr_9 [i_0] [i_1])))) + (arr_8 [i_0] [i_0] [i_1] [i_1]))) > var_11));
            }
        }
    }
    var_25 = ((((var_8 ? (((-222856901 ? var_10 : 12995))) : (var_13 + var_4))) != ((((var_8 ? -12985 : 1))))));
    #pragma endscop
}
