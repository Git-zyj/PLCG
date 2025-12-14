/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84940
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
    var_19 = ((/* implicit */unsigned int) 12446772841018320426ULL);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [(unsigned short)16] [i_1] [(short)6] = ((/* implicit */unsigned int) min((var_8), (((/* implicit */long long int) max((((/* implicit */int) var_6)), (1073676288))))));
                arr_7 [1LL] [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)-975)) ? (2851196936U) : (1882710042U))), (((/* implicit */unsigned int) ((signed char) arr_2 [i_1] [i_1] [i_0])))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_20 += ((/* implicit */signed char) max(((-(((/* implicit */int) (short)975)))), (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (short)-975))))))));
                    arr_10 [i_0] [(unsigned short)16] [i_2] [i_2] = ((/* implicit */unsigned short) (-(1421662721U)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        arr_14 [i_0] [(short)14] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_3] [i_3]))) / (2412257243U)));
                        var_21 = ((/* implicit */unsigned short) 0ULL);
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            var_22 += ((/* implicit */short) (!(((/* implicit */_Bool) -1073676281))));
                            var_23 ^= (((~(12446772841018320426ULL))) & (((/* implicit */unsigned long long int) (~(arr_8 [i_4])))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 12446772841018320426ULL)) || (((/* implicit */_Bool) 1882710042U))));
                            var_25 = ((/* implicit */short) max((var_25), ((short)953)));
                            arr_21 [i_2] [i_3] [i_2] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_3] [(short)7] [i_5])) ? (((/* implicit */int) (signed char)118)) : ((~(2147483647)))));
                            arr_22 [(signed char)2] [i_3] [(short)15] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned short) (signed char)106)));
                        }
                        var_26 = ((/* implicit */signed char) ((_Bool) arr_15 [9U] [i_2] [i_1] [9U] [17] [i_0] [9U]));
                        var_27 = ((/* implicit */long long int) (_Bool)1);
                    }
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) 2412257275U))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 18; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            {
                                arr_30 [i_0] [(unsigned short)12] [i_6] [(unsigned short)4] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) -1073676289))) ? (((/* implicit */int) ((short) (unsigned char)112))) : (((/* implicit */int) (signed char)15))));
                                var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(13315481184245613990ULL))), (((/* implicit */unsigned long long int) (~(var_18))))))) ? ((+(3407545933U))) : (((/* implicit */unsigned int) ((arr_20 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 2]) + (((/* implicit */int) var_13)))))));
                                arr_31 [i_0] [18U] [i_6] [i_6] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((10328374325475915640ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16383)))))) ? (3448159546U) : (33552384U)));
                                arr_32 [16LL] = ((/* implicit */signed char) arr_8 [i_0]);
                                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3195)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((short) ((int) 1206962136U))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */long long int) ((-1073676258) + (((/* implicit */int) var_10))));
                    arr_33 [i_0] [i_0] [i_1] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)3215)))))))));
                    arr_34 [i_6] [(signed char)9] [(short)3] [(unsigned char)12] = ((/* implicit */signed char) max(((~(18))), ((-(((/* implicit */int) (signed char)118))))));
                    arr_35 [(short)13] = ((/* implicit */signed char) var_5);
                }
                arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 32767)) ? (((((((/* implicit */_Bool) 3088005159U)) ? (((/* implicit */unsigned long long int) 1024592974U)) : (18446744073709551615ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)0)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-118)))))));
                arr_37 [i_0] [i_0] [(unsigned char)5] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) arr_26 [i_0] [i_0] [(unsigned short)7] [i_1])) >= (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) (short)21041)) ? (((/* implicit */int) (short)9469)) : (((/* implicit */int) var_7))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) var_7);
}
