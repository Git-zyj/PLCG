/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82882
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
    var_12 = ((/* implicit */unsigned long long int) (((~(var_9))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)61391)) ? (((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (unsigned short)53560)) : (((/* implicit */int) (short)-10)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 14095873486228236749ULL))))))))));
    var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (var_9))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [15U] [(short)19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10797))) : (var_10))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (var_9))))))))));
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 24; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (unsigned char)111))));
                        arr_13 [10ULL] [i_1] [i_3] [i_2 + 1] [i_2 - 1] [i_3 + 1] = ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10797)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [(signed char)15]))))) || (((/* implicit */_Bool) arr_11 [(signed char)16] [i_2 - 1] [i_3]))))), ((signed char)-57)));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((unsigned long long int) max(((~(((/* implicit */int) arr_7 [(unsigned short)16])))), (((/* implicit */int) (short)10794))))))));
                    }
                    var_17 = ((((/* implicit */_Bool) (short)-201)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_2 - 1])) || (((/* implicit */_Bool) var_2))))) : (((((/* implicit */int) (signed char)125)) + (((/* implicit */int) arr_0 [i_2 - 1] [i_2 + 2])))));
                    var_18 = ((/* implicit */unsigned char) (-(((((((/* implicit */int) (signed char)-124)) + (2147483647))) << (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned char)17]))) : (3138243315472533221LL))) - (41894LL)))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_4))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_11)));
}
