/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63718
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
    var_20 = ((/* implicit */unsigned long long int) var_14);
    var_21 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (((var_2) / (((/* implicit */unsigned long long int) var_3)))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_6)))) : (((/* implicit */int) var_18))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_22 = ((/* implicit */long long int) ((max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)8160)) : (((/* implicit */int) var_4)))))) << (((((((/* implicit */_Bool) (unsigned short)8160)) ? (((/* implicit */int) arr_0 [(short)15])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [(short)16] [i_0])) : (((/* implicit */int) arr_0 [i_0])))))) + (19923)))));
        var_23 *= ((/* implicit */unsigned char) ((((unsigned int) (unsigned short)57376)) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((((/* implicit */int) (unsigned short)8151)) - (8151))))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) || ((_Bool)1)));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) arr_1 [i_0] [i_1])), ((short)15)))) * (((/* implicit */int) arr_2 [i_0] [i_0] [16ULL]))));
        }
    }
    for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((arr_7 [i_2] [i_2]) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_2])) : (((/* implicit */int) var_18)))) : (((arr_7 [5LL] [i_2]) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) var_12))))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_6 [i_2]) < (var_2)))) << (((((/* implicit */int) var_4)) - (16375)))));
    }
}
