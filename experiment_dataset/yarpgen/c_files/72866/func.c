/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72866
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
    var_11 = ((/* implicit */signed char) 1100981240);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    arr_7 [(signed char)4] [i_0] [i_1] [7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 179489732725179690ULL)) ? (((((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)7] [i_0])) / (arr_3 [i_0] [i_1] [i_2]))) : (((((/* implicit */int) arr_1 [i_2])) * (((/* implicit */int) arr_1 [i_1]))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) max(((signed char)35), ((signed char)52)))) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (arr_4 [i_2]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [6ULL] [(short)3])) ? (arr_4 [i_0]) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */long long int) var_2)), (var_0)))))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)35)) ^ ((~(((((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0])) | (arr_4 [i_1])))))));
                    arr_10 [i_0] [0LL] [i_2] = (((+((~(((/* implicit */int) (signed char)63)))))) >= (((int) arr_0 [i_1] [i_2])));
                }
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_3]))) + (65534ULL)))) ? (((/* implicit */int) (short)-23645)) : ((~(((/* implicit */int) var_7)))))) >= (max(((+(((/* implicit */int) (unsigned short)32752)))), ((-(((/* implicit */int) (unsigned char)248))))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0]) + (((/* implicit */int) arr_12 [(short)11] [i_1] [i_4]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-10170)) || (((/* implicit */_Bool) (signed char)-47))))) : (((/* implicit */int) (signed char)-66)))))));
                                arr_22 [i_0] [i_0] [i_1] [i_0] [i_5] = (+(((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])) * ((+(((/* implicit */int) (signed char)35)))))));
                                var_13 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0]))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-47))) + (4572704641138523992ULL)))))));
                            }
                        } 
                    } 
                }
                arr_23 [i_0] = ((/* implicit */short) ((var_0) | (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) (short)-32162)))) != (((/* implicit */int) arr_19 [i_0] [i_0] [i_1]))))))));
                var_14 = ((((arr_4 [i_1]) != (arr_4 [i_1]))) ? (((((/* implicit */int) (unsigned short)2006)) ^ (((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) 6521903342999252419LL)) ? ((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1])))) : (((int) arr_6 [i_0] [i_1] [11ULL] [i_1])))));
                var_15 = ((/* implicit */int) (unsigned char)247);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_3);
}
