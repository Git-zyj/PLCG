/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83935
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
    var_20 = ((/* implicit */unsigned int) min(((short)15090), (((/* implicit */short) var_14))));
    var_21 *= ((/* implicit */signed char) var_14);
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) min((((int) (-(-1915955951)))), (((/* implicit */int) var_9)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_0] |= ((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned long long int) (-(1915955950)))), (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (2017612633061982208ULL))))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2017612633061982208ULL)) ? (arr_12 [i_2] [i_2 + 1] [i_2] [i_2 - 1]) : (arr_12 [i_2 - 1] [i_2] [(signed char)7] [i_2 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1]))) : (((((/* implicit */_Bool) ((var_17) << (((2017612633061982208ULL) - (2017612633061982179ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2 - 1])) && (((/* implicit */_Bool) 16429131440647569407ULL)))))) : (max((((/* implicit */unsigned int) 1915955951)), (var_13))))))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned char) arr_7 [i_0]);
    }
}
