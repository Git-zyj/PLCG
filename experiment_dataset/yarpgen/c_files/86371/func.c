/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86371
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) (~(18060611431047540619ULL))))));
    var_11 |= ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned char) var_4);
                    var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((var_4) + (5230661084001585900LL))))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    arr_12 [i_0] [i_3] [(unsigned short)7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_7 [i_0] [i_3])), (((338829974U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47)))))));
                    var_14 -= ((/* implicit */_Bool) ((unsigned short) (((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))))));
                }
                var_15 = 899330400;
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_4)))) ? ((((!(((/* implicit */_Bool) (unsigned char)167)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((var_3), (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 1) 
    {
        var_17 = ((/* implicit */_Bool) (~(((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))) >= (2955820622U)))) | (((/* implicit */int) arr_13 [i_4 + 3] [i_4 + 2]))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((((/* implicit */int) (unsigned char)154)) != (((/* implicit */int) (unsigned short)12559)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_4 + 1])) ? (1973869840U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4 + 1])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned short)15117)))))) - (arr_0 [i_4 - 1])))))));
    }
}
