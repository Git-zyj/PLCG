/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63985
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_2 + 3] [i_2 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_2 + 1]))))) ? (((arr_3 [i_2 + 2]) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_3 [i_2 + 1])))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_9)))))));
                    }
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_2 + 2] [i_2 - 1] [i_2 + 4]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), ((short)1023))))))))));
                    var_14 ^= ((/* implicit */short) max((((((/* implicit */_Bool) max((var_8), (((/* implicit */int) (short)0))))) ? (((((/* implicit */_Bool) var_4)) ? (1290166412404925773LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */long long int) var_1)))), (max((((arr_5 [i_0] [i_1] [i_2]) - (arr_7 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1290166412404925776LL)) ? (var_0) : (var_9))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) var_1)), (var_12))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9))))));
}
