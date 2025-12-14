/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95551
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
    var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(-1)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_9)))) & (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11)))) & (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_11)))))))));
    var_17 = ((/* implicit */signed char) (-(((((((/* implicit */int) var_12)) % (605888573))) ^ (((((/* implicit */int) var_3)) - (var_14)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((int) var_13))) : (max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (3547993433U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (var_0)))))))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((unsigned char) 511LL))) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                            var_20 = ((/* implicit */int) ((((((72057594037927935ULL) <= (((/* implicit */unsigned long long int) 0)))) ? (((((/* implicit */_Bool) -605888574)) ? (arr_10 [(short)10] [(short)7] [i_1] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) var_14)))) >> ((-(((-1) / (((/* implicit */int) var_10))))))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) arr_5 [i_3] [i_3])), (var_13)))) << (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_1] [i_1])))) - (15415)))))) ? ((-(605888574))) : (max((((((/* implicit */int) var_1)) & (((/* implicit */int) (unsigned short)62842)))), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-87)), (var_1))))))));
                            arr_11 [i_3] [i_3] [i_2] [i_2] [i_3] [i_0] |= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_4 [i_3] [i_1] [i_0]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)6316))) > (4295869743035841243LL)))) : (((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_6)) + (1865)))))))), (((((((/* implicit */int) arr_5 [i_0] [i_0])) >= (((/* implicit */int) (short)8519)))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_3])) ? (arr_10 [i_0] [i_0] [(unsigned char)6] [i_3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))))) : (((((/* implicit */_Bool) arr_6 [(unsigned char)13])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)59))) : (arr_10 [i_0] [i_3] [i_2] [1LL] [1LL])))))));
                            var_22 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((var_4) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-59)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)-59)))) : (max((((/* implicit */unsigned long long int) var_14)), (arr_6 [i_0])))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_8 [(short)17] [(short)17] [i_0] [i_0] [i_0]) && (arr_8 [i_0] [(unsigned char)16] [(unsigned short)14] [(unsigned short)3] [i_0])))), (min((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_1] [i_1])), (var_4)))));
            }
        } 
    } 
}
