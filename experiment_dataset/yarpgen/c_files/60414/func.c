/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60414
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
    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)127)), (((((((/* implicit */int) (short)31766)) << (((18446744073709551615ULL) - (18446744073709551608ULL))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)127)) ? (3619225736U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (min((var_13), (((/* implicit */unsigned int) arr_2 [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)17)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) arr_4 [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)58299)) - (((/* implicit */int) ((1ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61)))))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) var_14)) : ((-(((/* implicit */int) (unsigned char)171))))))) ? ((~(max((322863078405550672LL), (((/* implicit */long long int) (short)-13)))))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)0)))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) arr_3 [i_0] [i_1] [i_3])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_14))) + (arr_1 [i_0]))) : (((/* implicit */long long int) (+(var_5))))))) ? (((((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2] [i_3])) - (14522113717472598853ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)1)) : (arr_6 [i_3] [i_2] [i_2] [i_0])))))) : (((/* implicit */unsigned long long int) max(((((_Bool)1) ? (((/* implicit */long long int) -1780633247)) : (6023677003326452019LL))), (max((((/* implicit */long long int) 3904175484U)), (-322863078405550673LL))))))));
                            var_24 |= ((/* implicit */unsigned short) ((((((2147483647) % (((/* implicit */int) arr_3 [i_0] [i_0] [16ULL])))) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) + (((/* implicit */int) (short)16868))));
                        }
                    } 
                } 
                var_25 += arr_8 [0U] [i_0] [0U] [i_0];
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 19ULL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */int) min((var_27), (((int) min((arr_14 [i_4 + 2]), (arr_14 [i_4 - 1]))))));
                                var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_8])) > (((/* implicit */int) arr_17 [i_8])))))));
                                var_29 = ((/* implicit */short) min((-1603044484), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)66))))) ? (((/* implicit */int) (short)22521)) : (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (unsigned short)23404)) : (((/* implicit */int) (signed char)-27))))))));
                                var_30 = (i_6 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_12 [i_4 - 1] [i_4 - 2]))) ? (((((((/* implicit */int) arr_13 [i_4 + 2] [i_7] [i_4 + 2])) + (2147483647))) << (((arr_5 [i_6] [i_6]) - (2454149518U))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6] [i_5] [i_5] [i_6] [i_7] [i_8])) ? (arr_1 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (short)12674)))))) ? (((((/* implicit */int) arr_4 [13ULL] [i_5])) / (((/* implicit */int) arr_10 [i_4 - 1])))) : (((((/* implicit */int) arr_4 [i_5] [i_5])) / (((/* implicit */int) var_8))))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_12 [i_4 - 1] [i_4 - 2]))) ? (((((((/* implicit */int) arr_13 [i_4 + 2] [i_7] [i_4 + 2])) + (2147483647))) << (((((arr_5 [i_6] [i_6]) - (2454149518U))) - (461778379U))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6] [i_5] [i_5] [i_6] [i_7] [i_8])) ? (arr_1 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (short)12674)))))) ? (((((/* implicit */int) arr_4 [13ULL] [i_5])) / (((/* implicit */int) arr_10 [i_4 - 1])))) : (((((/* implicit */int) arr_4 [i_5] [i_5])) / (((/* implicit */int) var_8)))))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)114)) > (((/* implicit */int) ((18446744073709551604ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))));
                }
            } 
        } 
    } 
}
