/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72640
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
    var_10 = ((/* implicit */unsigned char) (((!(var_0))) ? (max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) var_1)))) : (((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])));
        var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((min((4266883510110159058ULL), (((/* implicit */unsigned long long int) var_3)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [6] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((17673744076712131506ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)223)) != (2147450880))))))))));
        arr_8 [i_1] = ((/* implicit */int) ((((arr_0 [i_1] [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) == (min((arr_0 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_7)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2580738852105474584LL)) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (arr_6 [i_1]))) : (((arr_6 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_14 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (var_8)))) ? (((/* implicit */int) min(((unsigned short)26246), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_2])) != (((/* implicit */int) var_1))))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (unsigned char i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                {
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min((((((/* implicit */_Bool) 1124724634)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), ((+(((arr_14 [i_2]) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_1 [(_Bool)1] [i_3])))))))))));
                    arr_17 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)1))))));
                    arr_18 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_15 [i_2] [i_4 + 2] [i_4] [i_4 + 1])) < (((/* implicit */int) var_0)))))));
                    arr_19 [(short)1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) arr_10 [i_4 + 1]))) + (2147483647))) << (((((((/* implicit */_Bool) arr_10 [i_4 + 1])) ? (arr_6 [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4 - 1]))))) - (1204805205U)))));
                    var_16 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_6 [i_4]), (((/* implicit */unsigned int) var_9))))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2]))))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_9 [i_4])))) ? ((((_Bool)1) ? (16344370829372061633ULL) : (((/* implicit */unsigned long long int) 2066868756U)))) : (((/* implicit */unsigned long long int) arr_13 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4 - 1])))));
                }
            } 
        } 
    }
    var_17 = var_8;
}
