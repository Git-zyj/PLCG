/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76944
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
    var_11 = ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (var_6)))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_2))))) & (((/* implicit */long long int) ((/* implicit */int) (signed char)16))));
    var_12 &= ((unsigned int) ((long long int) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) min((var_8), (((/* implicit */long long int) (_Bool)1))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) arr_4 [i_0] [i_1]);
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */signed char) arr_7 [5LL] [i_1] [i_1] [i_0]);
                    arr_11 [i_0] [i_1] [14LL] [i_2] = ((/* implicit */long long int) ((arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (((((/* implicit */_Bool) ((short) arr_8 [i_0]))) ? (((/* implicit */unsigned long long int) (~(var_9)))) : (((unsigned long long int) (_Bool)1)))) : (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]))))) ? ((((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) (-(var_2))))))));
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_9 [3LL] [i_1 + 1] [i_2]))));
                }
            }
        } 
    } 
}
