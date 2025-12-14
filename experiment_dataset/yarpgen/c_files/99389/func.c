/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99389
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
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (short)-25069))) < (((2785952178567618833LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-25069))))))) || (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) >= (min((((/* implicit */long long int) (unsigned short)60688)), (5LL)))))));
                arr_5 [(unsigned short)7] [13] = max((((((((/* implicit */_Bool) (short)25080)) ? (((/* implicit */int) (unsigned short)59786)) : (((/* implicit */int) var_9)))) | (((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) (short)-25080)) + (25087))))))), (max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) (unsigned short)65535))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned short i_2 = 3; i_2 < 23; i_2 += 3) 
    {
        for (short i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            {
                var_20 *= (unsigned short)18952;
                var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */int) arr_6 [20])) & (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16383)) ? (var_0) : (((/* implicit */int) arr_6 [20]))))) || (((((/* implicit */_Bool) (short)821)) || (((/* implicit */_Bool) (unsigned char)250)))))))))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4848))) / (arr_16 [i_2] [i_5] [i_4] [i_5] [i_2] [i_6])))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned short)18192))))) : (((((/* implicit */_Bool) (short)25080)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)15508)))))) % ((~(2096896)))));
                                var_23 = ((/* implicit */unsigned short) (signed char)-109);
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_13 [i_2] [(short)7] [i_2] [i_6]), (((/* implicit */int) (unsigned short)60693))))) ? ((+(((/* implicit */int) arr_9 [i_2])))) : (((/* implicit */int) arr_6 [i_2]))))) & (((arr_15 [(unsigned short)22] [i_3] [i_4] [i_4] [i_5] [i_6]) - (((/* implicit */unsigned int) var_0))))));
                                var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)0)), (-1163678385)))) + (max((var_16), (((/* implicit */unsigned int) arr_6 [i_4]))))))) ? (((((/* implicit */int) arr_17 [i_3 - 1] [i_3] [i_6] [i_6] [i_2 - 1] [(short)8])) * (((/* implicit */int) (short)25100)))) : (((((/* implicit */_Bool) max(((short)25068), ((short)-19288)))) ? (((((/* implicit */_Bool) 134217727)) ? (((/* implicit */int) var_9)) : (-2))) : (((/* implicit */int) ((4294967282U) < (((/* implicit */unsigned int) 2147483647)))))))));
                                arr_19 [(unsigned short)6] [i_2] [(unsigned short)11] [(unsigned short)19] [i_6] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) (short)21607)), (502764782U))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-2105)))));
                            }
                        } 
                    } 
                } 
                var_26 *= ((/* implicit */short) arr_13 [i_2] [i_2] [(short)0] [(signed char)18]);
            }
        } 
    } 
}
