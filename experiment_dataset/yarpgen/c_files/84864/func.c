/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84864
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18618))) : (0ULL))))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) 13431471385586716182ULL)))))) / (((((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) arr_1 [i_0]))))) + (arr_0 [i_0 + 1]))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_17 -= ((/* implicit */long long int) ((((/* implicit */int) (signed char)-64)) * (((/* implicit */int) (unsigned char)46))));
            arr_5 [i_0 + 4] [i_0 + 4] [i_1] |= ((/* implicit */unsigned char) ((short) min((arr_2 [i_0 + 1]), (((/* implicit */short) (!(var_9)))))));
            var_18 = ((/* implicit */unsigned int) ((((long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned char)3]))) : (arr_0 [i_0])))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)46918)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_14))))))))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_7)))) || (((/* implicit */_Bool) (unsigned char)74))));
        }
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned long long int) var_13)), (var_0)))));
}
