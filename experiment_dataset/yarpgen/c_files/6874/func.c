/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6874
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
    var_15 = ((/* implicit */_Bool) var_5);
    var_16 *= ((/* implicit */short) var_13);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */short) var_0);
                    arr_9 [(short)13] [(short)21] [(short)1] [(short)13] = ((/* implicit */short) (((-(((/* implicit */int) var_2)))) + (max((((/* implicit */int) max(((short)0), (arr_6 [i_0] [(short)11] [(_Bool)1] [(_Bool)1])))), (((((/* implicit */_Bool) (short)29918)) ? (((/* implicit */int) arr_7 [i_2] [(_Bool)1] [i_2] [(short)13])) : (((/* implicit */int) (short)-6550))))))));
                    var_17 = ((/* implicit */short) ((((((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1])) * (((/* implicit */int) (short)-14526)))) * (((arr_1 [(short)21] [(short)12]) ? (((/* implicit */int) (short)-29918)) : (((/* implicit */int) ((((/* implicit */int) (short)31)) == (((/* implicit */int) var_12)))))))));
                    arr_10 [(short)18] [(short)5] [(_Bool)1] = ((/* implicit */short) var_6);
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = arr_14 [i_0] [i_0] [i_0] [i_0];
                                var_19 = ((/* implicit */short) max((((((/* implicit */int) ((((/* implicit */int) (short)-190)) >= (((/* implicit */int) var_1))))) - (((/* implicit */int) min(((short)-31786), (((/* implicit */short) (_Bool)1))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1] [i_2] [i_3 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */short) var_6);
}
