/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78300
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) min((var_9), (((/* implicit */signed char) (_Bool)1)))))))) ? (((((long long int) (_Bool)1)) | (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) arr_4 [(unsigned char)5]);
                /* LoopSeq 2 */
                for (long long int i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)1583)) : (((/* implicit */int) (signed char)108))))) ? (((/* implicit */int) var_17)) : ((+(((/* implicit */int) (_Bool)1)))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1 + 1] [i_0 - 1] [i_0])) << (((((/* implicit */int) arr_7 [i_1 + 1] [i_0 - 2] [i_0])) - (24578)))))) ? (((/* implicit */int) (!((_Bool)1)))) : ((-(((/* implicit */int) arr_0 [i_1 + 2])))))))));
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)2044))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_21 &= ((((((/* implicit */_Bool) -8517501592248768256LL)) ? (526198871U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 1])) / (((/* implicit */int) arr_2 [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 3])) ? (((/* implicit */int) arr_2 [i_0 - 3])) : (-316344923))) : (((((/* implicit */_Bool) -4759931)) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 - 1]))))));
                    var_23 |= arr_11 [i_1] [i_3];
                }
            }
        } 
    } 
}
