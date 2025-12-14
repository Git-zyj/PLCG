/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84364
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)40914)), (max((((/* implicit */long long int) -2023393678)), (arr_2 [i_0 - 3] [i_1])))));
                    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40914))) * (var_16))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 2])))));
                }
            } 
        } 
        var_22 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (unsigned short)60427)) : (((/* implicit */int) (unsigned short)16262)))), ((~((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
    for (signed char i_3 = 3; i_3 < 13; i_3 += 1) 
    {
        var_23 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24622)) / (((/* implicit */int) arr_6 [i_3 + 2]))))) - (var_12)));
        var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_6 [i_3]), (arr_6 [i_3]))))))), (((arr_7 [i_3] [i_3]) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) var_13)))))))));
        arr_8 [2ULL] = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((max(((unsigned short)40914), (arr_6 [i_3]))), (((/* implicit */unsigned short) var_4))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)126)) ? (-2023393663) : (((/* implicit */int) arr_6 [i_3]))))) & (max((arr_7 [i_3] [i_3]), (((/* implicit */unsigned int) arr_6 [i_3]))))))));
        arr_9 [i_3] |= ((/* implicit */unsigned char) var_19);
        var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) arr_6 [i_3 - 3]))), (min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned short) (signed char)-114))))), (var_18)))));
    }
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27771)) ? (((((/* implicit */_Bool) (unsigned short)37763)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5108))) + (var_17))) : (((/* implicit */unsigned long long int) ((2023393663) >> (((var_5) + (415890642)))))))) : (var_18)));
}
