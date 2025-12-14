/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56002
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2780800773023114569LL)) ? (4016841777U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 3]))) : (2780800773023114576LL))))));
                        var_14 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_3 - 1]))));
                    }
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_15 |= ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                            var_16 ^= ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [24U]))) <= (4294967295U))) && (((/* implicit */_Bool) arr_3 [i_1] [i_0]))));
                            var_17 = ((/* implicit */signed char) (~(arr_7 [(short)7] [i_0] [(short)7] [i_2] [i_1] [i_5])));
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294967295U)))))));
                            var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_8 [i_4] [i_1] [i_1])) ? (6ULL) : (((/* implicit */unsigned long long int) 2780800773023114576LL))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_4]);
                            var_21 = ((/* implicit */_Bool) ((int) var_2));
                            var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [13LL] [i_1] [i_2])) ? (1252115037) : (((/* implicit */int) var_10)))) == (((/* implicit */int) ((((/* implicit */_Bool) -2780800773023114592LL)) || (((/* implicit */_Bool) 1379820597)))))));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1)))))));
                        }
                        var_24 = ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (arr_14 [i_0] [i_1]) : (arr_14 [i_0] [i_0]));
                        var_25 = ((/* implicit */_Bool) ((long long int) var_4));
                    }
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7])))));
                        var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_7] [i_1]))));
                        var_28 += ((/* implicit */signed char) var_7);
                    }
                }
                for (unsigned int i_8 = 1; i_8 < 24; i_8 += 3) 
                {
                    arr_22 [i_1] = ((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1] [i_8]);
                    arr_23 [i_8] [i_1] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) -2780800773023114605LL)) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) % (((/* implicit */unsigned long long int) 153339014U))))) || (((/* implicit */_Bool) min((240283071823457364ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0]))))))))));
                }
                var_29 ^= ((unsigned char) arr_7 [i_0] [(unsigned short)8] [(unsigned short)8] [i_0] [i_0] [i_1]);
                var_30 = ((/* implicit */unsigned int) ((arr_16 [i_0] [i_1] [i_1] [i_1] [i_1]) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)122))) : (0LL)))) ? (((/* implicit */int) (unsigned char)97)) : (var_7))))));
                var_31 = ((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((+(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1] [i_1])) ? (-2780800773023114605LL) : (var_12))))));
            }
        } 
    } 
    var_32 = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) : (2780800773023114568LL)))) ? (((/* implicit */unsigned long long int) 54807598U)) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)127))))) : (((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)158))) : (6778017331605186370LL)))))));
}
