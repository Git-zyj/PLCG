/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65243
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-106))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_8)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (7546725005187657019LL)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (var_7)))))) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */_Bool) min((min((2889942612864213545ULL), (((/* implicit */unsigned long long int) (unsigned short)58117)))), (((/* implicit */unsigned long long int) max((arr_3 [i_0 - 2]), (max(((unsigned char)224), ((unsigned char)243))))))));
                    var_13 += ((/* implicit */unsigned long long int) 70368677068800LL);
                    arr_11 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) 1122019454))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) - (arr_2 [i_0])))))));
                    var_14 += ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))) < (max((arr_0 [i_2]), (((/* implicit */int) (unsigned char)168))))))) <= (((/* implicit */int) ((((/* implicit */int) min((arr_5 [i_2]), (((/* implicit */unsigned short) (_Bool)1))))) <= (((/* implicit */int) ((15556801460845338065ULL) != (((/* implicit */unsigned long long int) -907075137229249448LL))))))))));
                }
            } 
        } 
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) | (arr_7 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 18446744073709551615ULL)))) : (max((((/* implicit */unsigned int) arr_3 [i_0])), (0U)))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 4294967295U)))) & (max((arr_9 [i_0] [(unsigned char)8] [i_0]), (arr_7 [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (arr_0 [i_0]) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))) ^ (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) | (((/* implicit */int) (unsigned char)88)))))))));
    }
}
