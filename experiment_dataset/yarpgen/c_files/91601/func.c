/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91601
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
    var_14 = ((/* implicit */unsigned int) (-(var_0)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) -1LL)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : ((+(arr_1 [i_0] [i_0])))))) : (((((/* implicit */_Bool) ((var_9) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */long long int) var_5)) : (arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */_Bool) var_12);
        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_0 [i_0]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_5) : (arr_1 [i_0] [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_16 += ((/* implicit */_Bool) ((((/* implicit */int) (!(arr_4 [i_1])))) & ((((+(((/* implicit */int) var_3)))) - ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
        var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741824)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_1] [i_1])))) ? (((arr_4 [(signed char)2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (arr_1 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((-1073741824) & (arr_6 [i_1] [i_1])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_1] [i_1]) >> (((((/* implicit */int) var_3)) + (16948)))))) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) 1073741837)) ? (((/* implicit */int) (unsigned short)28041)) : (((/* implicit */int) (_Bool)1)))))))));
    }
    var_18 = ((/* implicit */unsigned long long int) var_12);
}
