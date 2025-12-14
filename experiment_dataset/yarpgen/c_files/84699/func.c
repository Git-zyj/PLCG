/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84699
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16848))) : (((((/* implicit */_Bool) arr_0 [(signed char)11])) ? (arr_4 [i_0] [(signed char)11]) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))))) ? (((((/* implicit */_Bool) (signed char)-115)) ? (((((/* implicit */_Bool) arr_2 [6U])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) 934810275U)))) : (((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_0 [i_0]);
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((int) (unsigned char)64)), (((((/* implicit */_Bool) arr_3 [(unsigned char)3] [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_0] [i_1 - 1])) : (-1673304559)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_1 - 1])) | (((/* implicit */int) arr_1 [3ULL] [3ULL]))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (arr_3 [i_0] [i_0]))) : (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (unsigned char)255)))))) : (arr_3 [i_0] [i_1])));
                var_12 = ((/* implicit */unsigned int) ((((arr_3 [i_1 - 1] [i_1 + 1]) - (arr_3 [i_1 + 1] [i_1 + 1]))) >= ((+(((/* implicit */int) arr_1 [11] [i_0]))))));
                var_13 |= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (+(1673304556)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [5]) : (arr_3 [7] [7]))) : ((+(arr_3 [i_0] [i_0]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))));
}
