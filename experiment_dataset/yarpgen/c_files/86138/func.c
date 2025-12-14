/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86138
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (min((max((((/* implicit */long long int) (signed char)24)), (1272960038938194494LL))), (((/* implicit */long long int) (signed char)18))))));
    var_19 = ((/* implicit */_Bool) 12U);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (arr_0 [(_Bool)1] [(_Bool)1]) : (((arr_3 [i_0]) * (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (arr_0 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9950)))))))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)18)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19701))))) << (((((/* implicit */int) (signed char)-24)) + (34)))))) ? (((/* implicit */int) arr_1 [i_0] [19U])) : (((/* implicit */int) (_Bool)0)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_7 [i_0] [7ULL] [(_Bool)1] = ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
                    var_22 = ((/* implicit */_Bool) min((var_22), (((((var_4) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_2])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_1] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))) != (arr_3 [i_3])));
                        var_23 += ((/* implicit */_Bool) (unsigned short)0);
                    }
                }
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((arr_3 [i_0]) << (((arr_3 [i_1]) - (3162761630U))))) : (arr_3 [i_0])));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */long long int) (signed char)47))));
}
