/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93786
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) var_4))), (((((/* implicit */int) (!((_Bool)1)))) >> (((max((((/* implicit */long long int) (short)8192)), (var_16))) - (6706400934513515816LL))))))))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_18)) > (var_7))) ? (((int) max((var_15), (((/* implicit */unsigned char) var_3))))) : (max((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_4))))), ((-(((/* implicit */int) (short)-8178)))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [(unsigned short)2]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    var_22 = ((int) ((((((/* implicit */_Bool) (short)8192)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)992))) : (arr_3 [(signed char)4] [i_0]))) | (arr_3 [i_2 + 1] [i_0 - 3])));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)222))))), (((unsigned short) arr_1 [i_0 - 1]))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((5442123340874103463ULL) > (((/* implicit */unsigned long long int) arr_4 [i_0]))))) : (max((((/* implicit */int) (unsigned char)222)), (var_7))))))))));
                }
            } 
        } 
    }
    for (long long int i_3 = 2; i_3 < 10; i_3 += 4) 
    {
        var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)64531)) | (((/* implicit */int) arr_7 [i_3]))))) + (((unsigned int) 3271022423782745711LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_6 [(unsigned short)13] [i_3] [11ULL] [(_Bool)0])))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)41)), (6017133456358997946LL)))) ? (((((/* implicit */_Bool) var_9)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_8 [i_3]) & (arr_0 [i_3 + 1] [(unsigned char)11]))) << (((var_13) - (1725382623U)))))) ? (((((/* implicit */long long int) ((((var_11) + (2147483647))) << (((((/* implicit */int) var_18)) - (178)))))) * (min((arr_4 [i_3]), (((/* implicit */long long int) var_2)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((arr_1 [i_3]), (((/* implicit */signed char) arr_9 [5ULL])))))))));
    }
}
