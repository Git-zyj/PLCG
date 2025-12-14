/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8211
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_16 += ((/* implicit */short) (-(((/* implicit */int) ((_Bool) arr_2 [i_0])))));
        var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (max((max((arr_2 [i_0]), (arr_2 [(signed char)10]))), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            arr_5 [i_1 + 1] [(short)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(arr_4 [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0] [i_1 + 1])), (arr_2 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_2 [i_0]))) < (((/* implicit */long long int) ((unsigned int) arr_2 [i_0]))))))) : (min((max((arr_3 [i_1 + 1]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_4 [8]) : (arr_3 [i_1])))))));
            var_18 = ((/* implicit */unsigned int) min((((unsigned char) max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_3 [i_0])))), (arr_0 [i_0] [i_1])));
        }
        var_19 |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) min((arr_1 [i_0] [i_0]), (arr_1 [(signed char)15] [(signed char)15])))))));
        var_20 += ((/* implicit */unsigned int) ((long long int) arr_2 [i_0]));
    }
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_1))));
}
