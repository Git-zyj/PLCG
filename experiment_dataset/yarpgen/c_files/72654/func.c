/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72654
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0])) << (((((/* implicit */int) var_0)) - (71)))))) ? (((/* implicit */int) ((unsigned short) arr_6 [13] [i_2]))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)43757)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (arr_5 [i_1] [(unsigned short)5] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (728597113927395928LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) var_12))))))))));
                    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_0] [i_2])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_2] [i_1])) : (((/* implicit */int) var_11))))))), ((~(arr_5 [i_0] [i_1] [i_0] [i_2])))));
                    arr_8 [(short)13] [i_1] [i_0] = ((/* implicit */short) var_9);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_11);
    var_16 = ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) var_6)), (var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-21)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4)))))) : (var_5));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (short)5679)) : (-516141436)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))));
}
