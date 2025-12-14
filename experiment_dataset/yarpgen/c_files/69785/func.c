/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69785
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)27646))))) ? ((+(((/* implicit */int) min((((/* implicit */short) (unsigned char)24)), ((short)-10368)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_1]) % (((/* implicit */long long int) -1302660829))))))))));
            var_19 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) 747697925U)) : (var_3))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (_Bool)1)) : (1302660829)))) ? (((((((/* implicit */int) var_0)) + (2147483647))) >> (((var_8) - (12215642566066369385ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) -1302660852)) || (((/* implicit */_Bool) (short)-10368))))))))));
        }
        for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((((_Bool)1) ? (14514990768582215987ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10372))))) - (((/* implicit */unsigned long long int) -1))))) ? (13) : ((((+(((/* implicit */int) (unsigned char)160)))) - (((/* implicit */int) arr_1 [i_0] [i_0]))))));
            arr_9 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_0 [13LL]))))));
            arr_10 [11ULL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [9ULL] [i_0])) ? (((/* implicit */long long int) ((var_11) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) < (((/* implicit */int) (signed char)-32))))) : (((((/* implicit */int) (unsigned short)21988)) / (((/* implicit */int) (short)-19736))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)119)) ? (1302660829) : (-3)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-17895))))) : (arr_7 [i_0] [i_2] [i_2])))));
        }
        arr_11 [4LL] |= min((var_4), (((/* implicit */unsigned int) -1302660819)));
        arr_12 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) var_6)), (var_10)))), ((~(1302660814)))))) ? ((((~(var_8))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-25223))))));
    }
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))) ? (((/* implicit */unsigned long long int) (+((+(-1302660811)))))) : (var_8)));
    var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_1)))))))) ? (((((((/* implicit */int) (short)-10368)) | (((/* implicit */int) var_11)))) ^ (((/* implicit */int) var_12)))) : (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        for (long long int i_7 = 3; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_22 += ((/* implicit */short) ((int) (_Bool)1));
                                arr_25 [i_3] [i_4] [i_4] [i_6] [i_5] = (((((!(var_11))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)21988)))) | (((/* implicit */int) (!((_Bool)1)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_3] [i_4] [i_3] [i_5] [i_3] [i_4] [i_3 - 1])) <= (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_24 [i_3] [i_4] [i_3] [10] [i_3] [i_4] [i_3 - 1])) : (((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_3 + 1])))))))));
                }
            } 
        } 
    } 
}
