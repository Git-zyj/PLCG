/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57476
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
    var_19 &= ((/* implicit */int) min(((((_Bool)1) ? (max((((/* implicit */long long int) var_13)), (var_15))) : (((/* implicit */long long int) ((/* implicit */int) var_17))))), (((/* implicit */long long int) min((var_3), (((((((/* implicit */int) var_7)) + (2147483647))) << (((((-1096286330) + (1096286360))) - (30))))))))));
    var_20 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                            {
                                arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (short)15);
                                arr_13 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_8 [i_0] [i_1] [i_2] [i_2] [i_4] [i_3]) || (((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_4 - 1] [i_3] [i_3] [i_3] [i_3] [i_2] [(unsigned char)1])) % (((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])))))));
                                var_21 = ((/* implicit */int) arr_5 [i_4] [i_2] [i_1 + 1]);
                                var_22 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */_Bool) -3685017214175169523LL)) && (((/* implicit */_Bool) -6LL))))) | (((/* implicit */int) max(((unsigned char)253), ((unsigned char)24)))))), (2147483641)));
                            }
                            for (int i_5 = 2; i_5 < 19; i_5 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_1 - 1] [i_0] [i_1 - 1] [i_0])), (((((/* implicit */int) arr_14 [i_0])) - (((/* implicit */int) (unsigned char)3))))))) ? (((/* implicit */long long int) -2034140611)) : ((-(17LL)))));
                                arr_17 [0ULL] [i_0] [i_2] [i_2] [(short)9] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (max((arr_4 [i_2]), (((/* implicit */unsigned int) var_0)))))) ? (((max((var_9), (((/* implicit */long long int) var_11)))) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)87)), ((unsigned short)65535)))))));
                                arr_18 [i_0 - 2] [i_1] [i_2] [i_0 - 2] [i_2] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1 + 3] [i_2]))))) - (((/* implicit */int) min((arr_1 [i_0]), ((signed char)-1)))));
                                arr_19 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (2225408457U))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0 - 2] [i_1 + 1] [i_2])))))));
                            }
                            var_24 = ((((((/* implicit */long long int) 1839152243)) - (var_15))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)248)))));
                            var_25 *= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) max((var_2), (var_6)))))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)32765))))));
                            var_26 &= ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 1) 
                {
                    for (unsigned char i_7 = 1; i_7 < 18; i_7 += 4) 
                    {
                        {
                            arr_27 [i_0] [i_0] [i_6 - 1] = var_4;
                            arr_28 [i_0] [i_1 + 2] [i_0] [i_7] = ((short) max((1839152243), (((/* implicit */int) (_Bool)1))));
                            arr_29 [i_0] [i_1 + 1] [i_6] = ((((((/* implicit */_Bool) arr_26 [i_0])) || ((((_Bool)1) || (((/* implicit */_Bool) var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (((((/* implicit */_Bool) arr_26 [i_0])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24830))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    arr_32 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((min(((unsigned char)238), (((/* implicit */unsigned char) (signed char)64)))), (((/* implicit */unsigned char) (_Bool)1))))) / (((/* implicit */int) (unsigned char)3))));
                    var_27 = ((/* implicit */short) min((((long long int) 1898695377)), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_14 [i_0 + 1])))))));
                }
                arr_33 [i_0] [i_0] = max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_0]))) < (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_0] [i_0]))), (arr_3 [i_0] [i_1] [i_1]));
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) min(((_Bool)1), ((_Bool)0)))) != (((((min((((/* implicit */int) var_4)), (var_3))) + (2147483647))) << (((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_1])) - (1)))))));
            }
        } 
    } 
}
