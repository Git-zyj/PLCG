/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65091
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((arr_5 [i_1] [i_1] [i_1 - 2] [i_1 + 1]) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-20)))));
                    var_13 = ((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_2] [i_1] [i_0])), ((unsigned short)2040)))), (((int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-8)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_0] [1U] [i_2] [i_4] [i_4] = (~(((((/* implicit */_Bool) var_11)) ? (var_9) : (arr_2 [i_2] [i_3]))));
                                var_14 = ((/* implicit */unsigned short) ((arr_2 [i_1] [(unsigned short)11]) + (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned char)111)))), ((!(((/* implicit */_Bool) (unsigned short)63))))))))));
                                var_15 = ((/* implicit */signed char) ((long long int) ((var_10) - (((/* implicit */int) arr_10 [i_0] [i_2] [18ULL] [i_3] [i_1 + 2] [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) var_9);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((((unsigned long long int) var_4)) - (22892ULL)))))) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)40)) >> (((((/* implicit */int) var_11)) - (14572)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)111)))) : (((((/* implicit */_Bool) (unsigned short)21347)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)228))) : (22820433682039905ULL)))))));
}
