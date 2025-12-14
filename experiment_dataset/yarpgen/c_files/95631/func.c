/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95631
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_1))))), (((unsigned long long int) var_0)))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [(short)7] [i_3] [(unsigned char)11] = ((/* implicit */_Bool) var_6);
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (var_1))))) : (((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [4ULL] [i_3]))))))) ? (arr_7 [i_0] [i_0] [i_2] [i_3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 25166894965882534LL)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (unsigned char)29)))))));
                        var_17 = ((/* implicit */unsigned char) var_12);
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((unsigned int) var_14))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) min((arr_8 [4LL] [(signed char)1] [i_0] [i_1] [i_0]), (var_10)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_13) : (((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_2] [(unsigned char)2])))) : (((arr_2 [i_0]) ? (arr_4 [i_0] [i_1]) : (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) arr_6 [i_0]);
    }
    var_19 |= ((/* implicit */short) var_0);
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 1291653306U))) ? (max((min((9223372036854775807LL), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
}
