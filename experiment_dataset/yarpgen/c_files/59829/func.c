/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59829
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)88)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) * (var_6))) != (((/* implicit */unsigned int) var_5))))))));
    var_16 = ((/* implicit */unsigned int) 9223372036854775801LL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) min((var_7), (((/* implicit */unsigned long long int) var_0))));
                                var_18 = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) 9223372036854775801LL)) + (arr_5 [i_0] [i_1] [i_4 + 1]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_2 [i_0]))))))));
                                var_19 = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4 + 1]);
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] [1U] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((arr_7 [i_0] [i_0] [i_0]) - (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))));
                arr_15 [i_0] [i_1] = ((/* implicit */int) (~(((unsigned long long int) (~(9223372036854775799LL))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((int) var_11));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((((/* implicit */_Bool) ((long long int) var_14))) ? (((((/* implicit */unsigned long long int) var_2)) / (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_1)))))))) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))) - (187)))))));
}
