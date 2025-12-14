/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70779
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_14)) - (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27413))) == (var_9)))) : (((/* implicit */int) var_12))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((arr_2 [i_0]) != (((/* implicit */long long int) ((((((/* implicit */int) var_7)) >= (((/* implicit */int) var_2)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((var_8) <= (arr_0 [i_0])))))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((541381141U) ^ (arr_0 [i_0 - 1])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)253)) >= (((/* implicit */int) var_16))))) : (((/* implicit */int) (short)-31318))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_6 [(unsigned char)5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) ^ (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((var_9) >= (541381141U))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)-31318)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)32767)), (var_18))))) : (((2262552914U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54)))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) arr_9 [i_2] [i_2] [i_2] [i_2])), (((1105071774U) - (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max(((unsigned short)18519), (((/* implicit */unsigned short) (unsigned char)19))))) >= (((/* implicit */int) arr_4 [i_1])))))))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_3 + 1])) << (((((/* implicit */int) arr_8 [i_3 + 3] [i_3 + 3])) - (461)))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1] [i_3 + 3])) * (((/* implicit */int) arr_10 [i_2] [(unsigned char)9]))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 + 3]))) / (1080863910568919040LL))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                {
                    var_24 = ((/* implicit */_Bool) 0LL);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            {
                                arr_21 [i_1] [i_5] [i_1] [i_6] [(_Bool)1] = ((/* implicit */unsigned short) min((((max((1105071775U), (((/* implicit */unsigned int) var_11)))) % (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_20 [i_7] [i_6] [i_5] [(short)9] [(unsigned char)11]))))))), (((((arr_13 [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_5] [(unsigned short)0] [i_5])) & (((/* implicit */int) (_Bool)0)))))))));
                                arr_22 [i_1] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */signed char) var_9);
                                arr_23 [i_5] [i_5] = (i_5 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) ((var_3) >= (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)144)) | (((/* implicit */int) var_18)))))))) << (((((((/* implicit */long long int) ((((/* implicit */_Bool) (short)24728)) ? (((/* implicit */int) arr_19 [i_1] [i_5])) : (((/* implicit */int) var_1))))) % (min((((/* implicit */long long int) var_17)), (432345564227567616LL))))) - (4107LL)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) ((var_3) >= (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)144)) | (((/* implicit */int) var_18)))))))) << (((((((((/* implicit */long long int) ((((/* implicit */_Bool) (short)24728)) ? (((/* implicit */int) arr_19 [i_1] [i_5])) : (((/* implicit */int) var_1))))) % (min((((/* implicit */long long int) var_17)), (432345564227567616LL))))) - (4107LL))) - (57152LL))))));
                            }
                        } 
                    } 
                    arr_24 [i_5] [i_5] [i_5] [(unsigned char)1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4] [i_4])) * (((((/* implicit */int) arr_18 [(unsigned char)7] [i_5])) / (((/* implicit */int) (unsigned char)244)))))) ^ (((/* implicit */int) arr_9 [(unsigned char)5] [i_4] [i_4] [i_1]))));
                }
            } 
        } 
    }
}
