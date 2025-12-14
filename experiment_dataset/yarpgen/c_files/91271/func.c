/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91271
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)24576)) : (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        arr_10 [i_1] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 848479441)) ? (((/* implicit */int) var_3)) : (-1)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))))), ((+(((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_3 [i_2])))))));
                        var_13 = ((/* implicit */unsigned char) var_6);
                        arr_11 [i_2] [i_2] = (((-(((/* implicit */int) (signed char)(-127 - 1))))) / (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1])))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 10; i_5 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)1023)) ? (-1066666291010338080LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-4716)) != (((/* implicit */int) var_3)))))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [11] [i_4] [i_2] [i_1] [i_0])) | (((/* implicit */int) (signed char)127))))) > (min((((/* implicit */unsigned long long int) arr_3 [i_0])), (15871516649683203754ULL)))))))));
                                var_15 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(949361733U)))) ? (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) 1024801398U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0])))))))), (arr_17 [i_5] [i_5] [i_5 + 1] [i_5] [i_5] [i_5] [i_5])));
                                arr_18 [i_2] [i_1] [i_2] [i_5] [(short)2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */int) max((arr_0 [i_2] [i_4]), (var_4)))) : (arr_13 [i_0] [i_1 + 1] [i_1] [i_1])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_0] [i_4]))))), (var_10)))) : (max((((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_2])))))));
                                var_16 += ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_2 [i_4] [i_2]), (arr_0 [i_1 + 1] [i_1 + 1]))))));
                                var_17 = ((((arr_1 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5 - 2] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */int) ((unsigned short) arr_1 [i_2]))) : (min((var_1), (((/* implicit */int) arr_4 [i_4]))))))) : (var_0));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) ((short) arr_9 [i_0] [i_1 - 1] [i_2] [i_2]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        arr_22 [i_0] [i_0] [i_2] [i_2] [i_6] [i_6] = ((((/* implicit */unsigned long long int) arr_15 [i_2])) == (((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (5698935893050665057ULL))));
                        var_19 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_8)) || (((((/* implicit */_Bool) 2529039628029798269ULL)) || (((/* implicit */_Bool) 14427100455337461333ULL)))))));
                        var_20 ^= ((/* implicit */unsigned char) arr_1 [i_2]);
                        var_21 |= ((/* implicit */int) min((min((((((/* implicit */_Bool) 3080253228U)) ? (arr_21 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))), (arr_17 [i_0] [i_2] [i_1] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [5ULL] [i_6]))));
                    }
                }
                var_22 = ((/* implicit */unsigned char) arr_4 [i_1]);
            }
        } 
    } 
}
