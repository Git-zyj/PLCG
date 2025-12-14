/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5676
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
    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) var_12))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((arr_2 [(signed char)12] [(signed char)12]) ? (min((580256959413268528ULL), (((/* implicit */unsigned long long int) (unsigned char)113)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1397548005)) ? (2179544698734362999ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) 33554431ULL);
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [15U] [i_0]))) : (arr_6 [i_1] [i_1 - 4] [i_2] [i_2])));
                    var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(unsigned short)10])) ? (arr_5 [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 3])))));
                }
                for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    var_24 = (+(((((/* implicit */_Bool) max((33554431ULL), (((/* implicit */unsigned long long int) arr_3 [24U] [i_1] [i_0]))))) ? (((arr_8 [i_0] [i_1] [i_0]) ? (arr_7 [i_0] [i_1] [i_1] [i_3]) : (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1 + 2] [i_1 + 2] [i_3])))))))));
                    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((~(arr_7 [i_3] [i_3] [i_1] [(signed char)8]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned char) var_17)))))))))));
                    var_26 = (!(((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) arr_2 [i_0] [i_0])))))));
                }
            }
        } 
    } 
}
