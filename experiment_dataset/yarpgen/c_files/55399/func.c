/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55399
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
    var_19 ^= max((((unsigned long long int) var_7)), (var_16));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */short) ((var_12) ? (((/* implicit */int) arr_3 [i_0] [7LL] [i_0])) : (((/* implicit */int) arr_0 [i_1]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_0] [i_1] [i_3])), (var_17)));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((max((arr_10 [i_3 - 1] [i_3] [i_3] [i_3 - 1]), (((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (arr_10 [i_0] [i_0] [i_2] [i_3 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))))))), (((/* implicit */unsigned int) ((unsigned char) arr_1 [i_1]))))))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_3 [i_2] [i_2] [i_3]), (((/* implicit */unsigned char) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_3 - 1] [i_3 - 1])) ? (arr_5 [i_1 + 1] [i_3 - 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 + 1] [i_3 - 1] [i_3]))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) (signed char)-15)) + (37)))))))))));
                        var_23 ^= ((/* implicit */unsigned short) (signed char)41);
                    }
                    var_24 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_0])), (arr_9 [i_0] [i_2])))) ? (min((var_15), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (((/* implicit */unsigned long long int) arr_6 [12U]))));
                }
            } 
        } 
    } 
}
