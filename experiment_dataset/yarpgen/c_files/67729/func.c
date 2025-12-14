/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67729
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (4907444938996570798ULL)));
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((6590689095169258777ULL) / (((/* implicit */unsigned long long int) var_5)))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (var_16)))))) ? (((((/* implicit */_Bool) ((long long int) var_15))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2591771595U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)7749), (((/* implicit */short) (_Bool)1)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_12))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 11856054978540292816ULL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)175))) / (arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)73))) : (arr_0 [i_1])))))) ? (((((2544820100617808902ULL) != (((/* implicit */unsigned long long int) arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) (unsigned char)224))))) : (((((/* implicit */_Bool) arr_3 [2ULL] [i_1])) ? (15901923973091742685ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [i_0] [(signed char)6])), ((+(arr_0 [i_1]))))))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (((-(((/* implicit */int) arr_3 [i_0] [i_1 - 1])))) - (((/* implicit */int) arr_2 [(unsigned char)2]))))), (((((/* implicit */_Bool) (-(11856054978540292838ULL)))) ? (((((/* implicit */unsigned int) 1834878660)) - (92060267U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_1] [i_1 - 1]))))) != (min((((/* implicit */unsigned int) arr_3 [i_1] [i_1 + 1])), (2193439993U)))));
            }
        } 
    } 
}
