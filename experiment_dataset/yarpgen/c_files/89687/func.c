/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89687
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
    var_12 = ((var_1) > (((max((var_6), (((/* implicit */long long int) (_Bool)1)))) >> (((((((/* implicit */unsigned long long int) var_1)) | (2777118662648522504ULL))) - (3962990331726131132ULL))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(var_5)))) | (min((var_10), (((/* implicit */long long int) var_9))))));
                    var_14 = ((/* implicit */_Bool) arr_4 [(unsigned short)6] [(unsigned short)6] [4U]);
                    var_15 = ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) (unsigned short)20907)) ? (((/* implicit */int) var_9)) : (arr_7 [i_0] [10LL] [i_2] [i_2])))))));
                    var_16 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) var_10)))) ? (((((/* implicit */int) (signed char)125)) ^ (((/* implicit */int) arr_0 [i_2])))) : (((/* implicit */int) var_2)))) > (((/* implicit */int) ((max((var_8), (((/* implicit */int) var_3)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))), (var_5))) >> (((min((((((/* implicit */_Bool) -1933467599)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_0)))))) - (20752)))));
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))) : (16735249239689075107ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) -813842437)))))))))));
}
