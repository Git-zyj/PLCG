/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59255
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
    var_15 = ((/* implicit */unsigned char) ((unsigned short) max(((-(var_0))), (max((((/* implicit */int) var_8)), (1965729774))))));
    var_16 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_2)), (max((var_6), (((/* implicit */unsigned long long int) var_2)))))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) 1965729774))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */int) min((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_7 [i_0] [i_1] [i_2] [i_3])))) ? (max((var_12), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))))), (var_6)));
                        arr_11 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((max((arr_2 [i_2 + 1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_1))))))) / (var_5)));
                        var_18 -= ((/* implicit */unsigned int) (short)22792);
                        var_19 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(arr_0 [i_1] [i_2 + 1])))) % (((((/* implicit */_Bool) arr_9 [8U] [i_2] [8U])) ? (var_5) : (arr_2 [i_2 - 1] [i_3])))));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_2 - 1] [(unsigned short)17] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_6), (min((((/* implicit */unsigned long long int) (unsigned short)65527)), (var_12))))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */int) arr_10 [i_2] [i_2] [(_Bool)1] [i_2 - 1] [i_1] [i_2])), (var_0))), (((/* implicit */int) arr_8 [i_0] [i_2] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [(signed char)16]))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_1] [i_2] = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)3152)) : (var_7)))), (max((((/* implicit */unsigned int) var_10)), (arr_9 [i_0 + 2] [i_1] [i_2]))))), (((/* implicit */unsigned int) max((((/* implicit */int) ((var_7) != (-1965729796)))), (((((/* implicit */int) (short)3152)) & (((/* implicit */int) var_14)))))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_2])) ? (((/* implicit */int) (unsigned short)17883)) : (((/* implicit */int) var_10))))) ? (((var_5) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (arr_17 [i_0] [i_0] [i_0] [10U] [i_0] [i_0 + 2] [i_1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_13 [i_2] [i_0] [i_1] [i_0] [i_2])))) - (((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3152))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1239950545)) ? (((((/* implicit */_Bool) (short)-3136)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_16 [i_0] [i_2 + 1] [i_2 + 1] [i_0 - 1] [i_2 + 1])))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) arr_8 [i_0] [20U] [i_0] [i_0 + 1] [i_0] [i_0 - 1]);
    }
}
