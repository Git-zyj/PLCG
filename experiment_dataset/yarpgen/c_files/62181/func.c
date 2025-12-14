/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62181
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
    var_19 = (+((+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_6))))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((long long int) var_8))))) ? (var_5) : (var_14)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_18 [i_4] [i_1] [i_2] [i_3] [i_4] [i_2] [i_2] = max((((((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */int) arr_8 [i_0 - 2])) : (((/* implicit */int) var_11)))) / (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_18))))))), (min((min((1128128955), (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_12 [0] [i_2] [i_3 - 2] [i_4])) : (arr_14 [i_1]))))));
                                var_21 = ((/* implicit */int) (~(min((((/* implicit */long long int) var_12)), (((((/* implicit */long long int) ((/* implicit */int) var_11))) + (-1935058895032601152LL)))))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 2263378587U)) ? (((((((/* implicit */_Bool) 3080943403U)) || (((/* implicit */_Bool) 7522091310598814800LL)))) ? (var_14) : (-5083932565750239470LL))) : (((/* implicit */long long int) ((((arr_2 [2U] [i_2] [i_1]) % (1128128944))) * (((/* implicit */int) (!(((/* implicit */_Bool) 4294967292U))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) var_15);
                    var_23 = ((/* implicit */int) (((~(max((var_16), (((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0 - 3])))))) / (((unsigned int) -1215476247))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (~(((524287U) / (((/* implicit */unsigned int) var_0))))))))))));
}
