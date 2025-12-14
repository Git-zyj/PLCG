/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58022
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
    var_20 = ((/* implicit */unsigned int) ((_Bool) var_13));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((unsigned int) (short)-22728))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((int) arr_2 [i_0]);
                            /* LoopSeq 3 */
                            for (short i_4 = 2; i_4 < 21; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_4 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-7403)) | (((/* implicit */int) ((signed char) (~(((/* implicit */int) var_16))))))));
                                var_22 = ((/* implicit */int) ((unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_14 [21U] [(_Bool)1] [i_1] [i_2] [i_1] [i_0])) ? (var_7) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_4]))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 1; i_5 < 24; i_5 += 1) 
                            {
                                arr_19 [i_0] = (-(((unsigned int) arr_12 [i_0] [i_0] [i_0])));
                                arr_20 [9U] [i_1] [i_5 - 1] [(_Bool)0] [i_0] [(short)20] [i_5] = ((/* implicit */unsigned int) arr_2 [i_0]);
                            }
                            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                            {
                                arr_23 [i_2] [i_0] [i_0] [i_1 + 1] = ((/* implicit */signed char) ((long long int) arr_12 [i_0] [i_2] [i_3]));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [(signed char)5] [i_1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_1]))) : ((~(1134369537U)))));
                                var_24 = ((/* implicit */short) 3344438102U);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
