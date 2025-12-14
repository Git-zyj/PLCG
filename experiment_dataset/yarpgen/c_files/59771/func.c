/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59771
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((_Bool) var_1)))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-10531)) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (((var_3) + (((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (var_7)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (-933868152684756292LL) : (8628373489521618762LL)));
                    arr_9 [i_2] [i_2] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 + 4])) ^ (((/* implicit */int) arr_0 [i_0]))))), ((-((((_Bool)1) ? (8628373489521618762LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)29)))))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) arr_0 [i_1]))));
                        arr_13 [i_0] [(short)9] [(short)10] [i_3] [i_3] = ((/* implicit */unsigned char) (((~(34359738367ULL))) != (((((/* implicit */_Bool) 12813452179678825761ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24))) : (0ULL)))));
                        arr_14 [i_0 + 3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967294U)) ? (min((-1656752631802502861LL), (((/* implicit */long long int) arr_7 [i_0 + 3] [i_0] [i_2])))) : (((/* implicit */long long int) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        arr_18 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) ((signed char) (unsigned short)11503))) : (((/* implicit */int) ((short) (signed char)16)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            arr_21 [(short)8] [(short)8] [i_2] [i_2] [(short)8] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1]))));
                            var_14 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4]))) < (arr_10 [(short)1] [i_0 + 3]))))));
                            var_15 = ((/* implicit */unsigned short) -3155070215655116109LL);
                        }
                        var_16 = ((/* implicit */_Bool) min((var_16), (((1299165428U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2])))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0 + 3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_0] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [6LL] [7] [i_0]))))))) : (min((var_6), (arr_5 [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_10 [i_0] [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-8828)) : (((/* implicit */int) var_4))))))));
                        var_17 = ((/* implicit */signed char) (short)-7681);
                    }
                    arr_26 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 34359738367ULL)) ? (arr_17 [i_0] [(signed char)9] [i_0]) : (((/* implicit */unsigned long long int) arr_23 [i_0] [i_1]))))))) ? (((/* implicit */unsigned long long int) 4294967268U)) : (max((((((/* implicit */_Bool) 34359738383ULL)) ? (18446744039349813233ULL) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) (signed char)28))))));
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (var_6)))) ? (((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */short) var_4))))) ? (((((/* implicit */int) var_1)) + (var_8))) : ((+(((/* implicit */int) var_2)))))));
}
