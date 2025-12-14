/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55969
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
    var_16 = ((unsigned short) ((((((/* implicit */_Bool) 652023573305898430LL)) ? (-652023573305898430LL) : (652023573305898445LL))) | (((/* implicit */long long int) max((1328533279), (((/* implicit */int) (signed char)112)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) var_3);
                        arr_11 [i_0] [(unsigned short)1] [(unsigned short)1] [i_0] = min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (2712044505U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1183702514626143285LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_1] [i_1] [(unsigned char)3] [i_1 - 1])))))))), (-652023573305898430LL));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        arr_14 [i_0] = ((/* implicit */short) min((arr_5 [i_0]), ((unsigned short)11039)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-8932)) + (2147483647))) >> (((var_1) - (2226343422U)))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -725188079250345058LL)))) & (max((var_14), (((/* implicit */unsigned long long int) -652023573305898431LL))))))));
                            arr_17 [(unsigned char)9] [(unsigned char)2] [i_2] [(unsigned char)9] [i_2] [i_2] [i_0] = ((/* implicit */long long int) min(((~(((unsigned int) (signed char)112)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)54486))) ? (((/* implicit */int) ((unsigned char) (signed char)(-127 - 1)))) : ((+(((/* implicit */int) var_9)))))))));
                            arr_18 [i_0 - 1] [(unsigned short)8] [(short)4] [(signed char)7] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) -652023573305898431LL)))));
                        }
                        for (signed char i_6 = 1; i_6 < 7; i_6 += 3) 
                        {
                            arr_21 [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0] = ((/* implicit */signed char) min((var_9), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7528414410684287539LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-725188079250345058LL)))) && (((/* implicit */_Bool) var_4))))));
                            arr_22 [i_0] [8] [i_0] [i_2] [i_1 - 1] [i_0] = ((/* implicit */signed char) (-(((long long int) var_2))));
                            arr_23 [i_0] [i_0] [i_4] [(signed char)0] [i_2] [2LL] [(signed char)6] &= (-((-(((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)64196)))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)8932)) | (((((/* implicit */_Bool) ((arr_15 [(unsigned short)7] [i_1 - 1] [(unsigned short)7] [i_1 - 1] [i_1]) << (((((/* implicit */int) (signed char)(-127 - 1))) + (130)))))) ? ((-2147483647 - 1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 7528414410684287539LL)))))))));
                            arr_24 [i_0] [i_0] = ((/* implicit */unsigned short) 2147483647);
                        }
                        arr_25 [(unsigned char)5] [(unsigned char)5] [i_2] [i_4] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 4) 
                    {
                        arr_28 [i_0 - 1] [i_1] [i_2] [i_0] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            arr_31 [i_0] [i_7 - 2] [5] [i_1] [i_0] = ((/* implicit */unsigned short) ((((_Bool) var_4)) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) var_2))));
                            var_19 = ((int) var_8);
                            arr_32 [i_0] [i_0] [i_2] [(_Bool)1] [i_2] [i_0] [6LL] = ((/* implicit */int) arr_29 [i_0] [i_1] [i_0] [i_0 - 1] [7LL] [i_0] [i_8]);
                        }
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            arr_35 [7LL] [i_1 - 1] [i_0] [7LL] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (signed char)(-127 - 1))))));
                            arr_36 [i_0] [i_0] [i_2] [i_9] [(unsigned short)5] [i_1] = ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (signed char)-90)) != (max((-1030425071), (((/* implicit */int) (unsigned short)40142))))))), ((signed char)-111)));
                        }
                    }
                    for (int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        arr_39 [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)65520)))) ? (((max((((/* implicit */unsigned int) (unsigned short)20716)), (var_1))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 + 1] [(unsigned char)8] [i_0 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(1365038353U)))) != (0ULL)))))));
                        var_20 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))))));
                        arr_40 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (unsigned short)38787))))))));
                        var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_7 [i_10] [i_10] [i_2] [(unsigned short)1] [(unsigned short)1])) < (((var_11) * (var_14)))))), ((~(arr_27 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_10])))));
                    }
                    arr_41 [i_0] [(unsigned short)1] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_19 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_1 + 1]), (((/* implicit */long long int) var_1))))) ? ((-(652023573305898430LL))) : (((/* implicit */long long int) ((int) (unsigned short)40142)))))), ((+(arr_16 [i_0] [1U] [(signed char)1] [i_2])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 1; i_11 < 9; i_11 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max((max((((/* implicit */int) (unsigned short)54367)), (-2147483647))), (((/* implicit */int) ((short) arr_29 [(unsigned char)7] [(unsigned char)7] [i_2] [2LL] [i_2] [(unsigned char)7] [(unsigned char)7]))))))));
                        arr_44 [i_0] [i_0] [i_1 + 1] [i_0] [i_11] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1376977937U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-49))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : ((+(2917989354U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        arr_45 [i_11] [i_0] [3U] [i_0] [i_0 + 1] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)31633)) + ((+(((/* implicit */int) (unsigned char)103)))))) << (((((/* implicit */int) (unsigned short)38396)) - (38390)))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (var_2)));
                    }
                    arr_46 [1U] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))) % ((+(var_11)))))));
                    arr_47 [i_0] [i_0] = var_10;
                }
            } 
        } 
    } 
}
