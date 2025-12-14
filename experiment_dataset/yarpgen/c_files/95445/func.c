/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95445
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
    var_18 = ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)56660)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_19 = arr_3 [i_0];
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_13)), (var_11))), ((((_Bool)1) ? (arr_5 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-12408)), (var_11)))) || (((/* implicit */_Bool) max((arr_9 [i_0] [i_1] [i_2]), (((/* implicit */unsigned short) arr_8 [i_0]))))))))) : (((var_0) | (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])) ? (4261082741643412003LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))))));
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))) + (max((arr_2 [i_0] [i_2]), (((/* implicit */unsigned long long int) var_2))))));
                }
                for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((arr_13 [i_0] [i_0] [i_0]) ^ (arr_13 [i_1] [i_1] [i_1])))) : (((((/* implicit */unsigned long long int) 4261082741643412003LL)) + (18446744073709551601ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12))))) ? ((((_Bool)1) ? (1499397543U) : (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (-2099200149)))))))));
                    var_21 = ((/* implicit */long long int) ((min((1378151720U), (((/* implicit */unsigned int) arr_7 [i_3])))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_3]))) : (3577515368U)))));
                    arr_15 [i_0] [i_1] [i_3] = ((/* implicit */signed char) var_15);
                    var_22 = ((/* implicit */unsigned long long int) ((min((max((var_0), (var_11))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) | (arr_13 [i_3] [i_1] [i_0])))))) & (var_8)));
                }
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                            {
                                var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199))) % (1499397520U)));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_4] [i_4] [i_6]))));
                            }
                            for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                            {
                                arr_26 [i_0] [i_7] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) >> (((4261082741643412003LL) - (4261082741643411985LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_0 [i_0] [i_4])))))) : (arr_24 [i_0] [i_1] [i_4] [i_5] [i_5] [i_7])));
                                var_25 = ((/* implicit */unsigned int) ((long long int) min((var_11), (((/* implicit */long long int) var_14)))));
                            }
                            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                            {
                                var_26 = ((/* implicit */signed char) 17ULL);
                                arr_31 [i_8] [i_5] [i_4] [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_14)) ? (((var_16) ^ (((/* implicit */unsigned long long int) 4294967278U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8] [i_5] [i_4] [i_1] [i_0]))))));
                            }
                            var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) 1499397543U)) ? (((/* implicit */long long int) 0)) : (var_8))) >= ((-(arr_25 [i_0] [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
                var_28 += ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) ((((arr_19 [i_0] [i_1] [i_1] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)46))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */int) max((var_0), (((/* implicit */long long int) ((((var_16) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (0LL)))))))));
    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((max((((var_13) ? (9223372036854775806LL) : (var_0))), (((/* implicit */long long int) ((var_6) - (4294967293U)))))) >= (max((((/* implicit */long long int) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))))))));
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            {
                arr_38 [i_10] [i_9] [i_9] = ((/* implicit */unsigned long long int) var_1);
                arr_39 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)22875)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (max((((/* implicit */int) (short)31646)), (arr_32 [i_9]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_10] [i_9])) ? (((/* implicit */int) arr_37 [i_9] [i_10])) : (((/* implicit */int) arr_34 [i_10]))))) ? (((/* implicit */int) ((_Bool) (short)-12408))) : (((((/* implicit */int) (short)22526)) << (((((/* implicit */int) var_15)) - (46411)))))))));
            }
        } 
    } 
}
