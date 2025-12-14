/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68416
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */short) ((((/* implicit */int) max((((short) var_6)), (var_11)))) != (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_11))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */short) (((-(((/* implicit */int) arr_5 [(short)6] [i_1] [i_0])))) & ((~((-(((/* implicit */int) (short)26289))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] = (short)-27350;
                                arr_16 [i_1] [i_3] [i_2] [i_1] [(short)9] [i_1] = ((/* implicit */short) ((((((/* implicit */int) arr_13 [i_4 - 4] [i_1] [i_4 + 1])) + (((/* implicit */int) arr_13 [i_4 - 2] [i_1] [i_4 - 2])))) != (((/* implicit */int) min((arr_13 [i_4 - 2] [i_1] [i_4 - 2]), (arr_13 [i_4 - 1] [i_1] [i_4 - 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = var_12;
    var_16 = var_5;
}
