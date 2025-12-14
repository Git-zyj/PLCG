/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85477
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) 1045161967))));
    var_17 = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)2)))))));
    var_18 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)254)), (-1045161968)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_19 = var_3;
                            var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_13) ? (((/* implicit */int) (unsigned char)228)) : ((~(((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */unsigned int) 1762121562)) : (min((var_8), (((/* implicit */unsigned int) var_2))))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_3]))))) : (arr_2 [i_1 + 1])))) ? (((((/* implicit */_Bool) min((arr_0 [i_2 - 1]), (((/* implicit */unsigned short) var_12))))) ? (((/* implicit */int) ((short) -1045161968))) : ((~(((/* implicit */int) arr_7 [i_2])))))) : (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((/* implicit */int) arr_0 [i_1 - 1]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_22 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_4 + 3] [i_5])), (arr_1 [i_1] [i_1 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 551788093)) && (((/* implicit */_Bool) arr_0 [i_1]))))) : ((~(((/* implicit */int) (unsigned char)5))))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_2)) - (1189)))))), (((((/* implicit */_Bool) var_1)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29958)))))))));
                        var_23 = ((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) arr_4 [i_4] [i_1 - 1] [i_4 + 2])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_4]))));
                        var_24 = ((/* implicit */short) var_8);
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)27)))))) + (-1045161968)));
                    }
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_2))));
                    var_27 = ((unsigned short) (unsigned short)34419);
                    arr_17 [i_0] = ((/* implicit */unsigned char) 551788093);
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)30)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (short)-111)))) >> (((((int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))) - (218)))));
}
