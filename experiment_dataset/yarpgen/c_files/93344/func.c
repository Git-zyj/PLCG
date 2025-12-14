/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93344
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
    var_15 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_10)))))), ((+(((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_12)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) max((((max((arr_2 [i_0]), (arr_2 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */unsigned int) 1428006626)) : (arr_0 [i_0]))))), (((/* implicit */unsigned int) (short)4116))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (((arr_2 [i_1]) ? (268435455ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0])))))))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_2 - 1] [i_2 - 1])) ? (arr_10 [i_1] [i_2 - 1] [i_2 - 1]) : (arr_10 [i_0] [i_2 - 1] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_10 [6U] [i_2 - 1] [i_2 - 1])))) : (((((/* implicit */_Bool) arr_10 [8LL] [i_2 - 1] [i_2 - 1])) ? (arr_10 [(short)0] [i_2 - 1] [i_2 - 1]) : (arr_10 [i_1] [i_2 - 1] [i_2 - 1])))));
                        var_17 = ((/* implicit */unsigned short) ((min((arr_0 [i_0]), (arr_0 [i_0]))) | ((~(arr_0 [i_0])))));
                    }
                } 
            } 
        } 
    }
}
