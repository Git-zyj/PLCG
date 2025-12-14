/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58463
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
    var_17 = ((/* implicit */long long int) var_5);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (var_12)))) ? (((((/* implicit */_Bool) (signed char)82)) ? (15825895934171440236ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    var_19 &= ((/* implicit */unsigned long long int) var_15);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((max((max((((/* implicit */unsigned int) arr_1 [i_1])), (arr_2 [i_1] [i_2]))), (((/* implicit */unsigned int) 1934315415)))) << (((arr_2 [i_1] [i_2]) - (2141613451U)))));
                    var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)14487)) && (((/* implicit */_Bool) (short)-4482)))), ((((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])))) && (((/* implicit */_Bool) arr_0 [i_0] [i_1]))))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)91))))) ? (max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_0 [i_2] [i_1]))))), (((((/* implicit */int) arr_1 [i_1])) ^ (((/* implicit */int) arr_1 [i_1])))))) : ((~((~(1047115317))))))))));
                    arr_8 [i_1] = ((/* implicit */unsigned long long int) (((!(((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) (unsigned char)227)))))) || (((/* implicit */_Bool) max((arr_1 [i_0]), (var_16))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_12))));
}
