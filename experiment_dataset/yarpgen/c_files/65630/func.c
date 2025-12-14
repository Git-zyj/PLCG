/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65630
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((unsigned long long int) var_12)), (((((/* implicit */_Bool) var_3)) ? (8989688406488652366ULL) : (1250453225987135268ULL)))))) ? ((((!(((/* implicit */_Bool) var_15)))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59053))) >= (1250453225987135276ULL))))))) : (min(((-(var_6))), (((var_14) >> (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [14ULL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_0 [i_0 + 1])))) ? ((~(((unsigned int) arr_4 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_1 [i_1] [i_2]))) >= (((unsigned long long int) arr_1 [i_0] [i_0]))))))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_0 - 1] [i_0 + 1]));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_9);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)34)) >= (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            {
                arr_14 [i_3] [(unsigned short)15] = ((/* implicit */short) arr_4 [i_4]);
                arr_15 [i_4] [i_4] = ((/* implicit */unsigned long long int) max(((+(arr_0 [i_4]))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [13U] [i_3]))) >= (13406871015732162774ULL)))) < (((/* implicit */int) (short)-22707)))))));
                arr_16 [i_3] [i_4] = ((/* implicit */unsigned short) (short)-32765);
                arr_17 [i_3] [i_4] = ((/* implicit */signed char) arr_12 [i_3]);
            }
        } 
    } 
}
