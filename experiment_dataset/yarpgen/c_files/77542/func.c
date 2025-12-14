/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77542
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_10 = ((unsigned int) max((var_7), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_2)), (arr_2 [i_0]))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            var_11 *= ((/* implicit */signed char) ((((unsigned int) arr_14 [i_0] [i_1] [i_4 - 2] [i_3] [i_4 + 1])) + (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)13443)), ((unsigned short)4531)))))));
                            var_12 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)-4)), (((((/* implicit */_Bool) ((signed char) var_8))) ? (1413641697503180113ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_9 [i_0])))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 3; i_5 < 9; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_3] [i_1] [i_0]))))) && (((/* implicit */_Bool) arr_7 [i_0] [i_5 - 2]))));
                            var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_0] [i_1] [i_2]))));
                            arr_19 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (17033102376206371490ULL)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 4; i_6 < 9; i_6 += 2) 
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_6 - 1] [i_6] [i_6 + 3])))))));
                            arr_25 [i_0] [i_0] = ((/* implicit */signed char) ((int) (+(var_1))));
                            var_14 = ((/* implicit */signed char) max((17033102376206371517ULL), (((/* implicit */unsigned long long int) -8427669221572091154LL))));
                            arr_26 [i_0] [i_1] [i_2] [i_2] [i_3] [i_6] = ((/* implicit */long long int) var_5);
                        }
                        var_15 = ((((/* implicit */_Bool) (-((+(5205032372369897647LL)))))) && (((/* implicit */_Bool) 8427669221572091182LL)));
                        var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))) << (((((/* implicit */_Bool) -8220246970252836596LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_3] [i_3])))))) : (17033102376206371502ULL)))));
                        arr_27 [i_0] [i_1] = ((/* implicit */short) ((max((((/* implicit */long long int) arr_10 [i_3])), (var_1))) > (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_3])) << (((((/* implicit */int) var_9)) - (10602))))))));
                    }
                } 
            } 
        } 
        arr_28 [i_0] [i_0] |= ((/* implicit */unsigned long long int) max((5205032372369897647LL), ((~(var_4)))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7] [i_7])) ? (arr_1 [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7] [i_7] [i_7]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_7] [i_7] [i_7])))))));
        var_18 = (~((-(7472694927155545803LL))));
        var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))), (((unsigned int) var_0))));
    }
    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
    {
        arr_34 [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)32767))));
        /* LoopSeq 1 */
        for (long long int i_9 = 1; i_9 < 18; i_9 += 2) 
        {
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_9 + 3] [i_8])) & (((/* implicit */int) (short)-32757))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_9 + 2] [i_8])) | (((/* implicit */int) (unsigned char)108))))) : (var_4))))));
            /* LoopSeq 4 */
            for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                arr_41 [i_8] [i_9] [i_10] = ((/* implicit */unsigned int) (short)32752);
                arr_42 [i_8] = ((/* implicit */_Bool) arr_36 [i_9] [i_9]);
                var_21 = ((/* implicit */unsigned long long int) var_4);
            }
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                arr_45 [i_9 + 1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) -1783413215)) ? (arr_38 [i_8] [i_8] [i_8] [i_8]) : (arr_38 [i_8] [i_8] [i_8] [i_8])));
                var_22 = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) 7472694927155545797LL)) < (17033102376206371502ULL)))));
                arr_46 [i_11] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_9] [i_9 + 1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62107)))));
            }
            for (long long int i_12 = 3; i_12 < 20; i_12 += 1) 
            {
                arr_51 [i_12] [i_12] [i_12] [i_12] = arr_37 [i_8] [i_8];
                arr_52 [i_12] [i_12 + 1] [i_12] = ((/* implicit */int) max((((_Bool) var_4)), (((((unsigned long long int) var_0)) <= (((unsigned long long int) var_1))))));
            }
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
            {
                arr_55 [i_8] [i_13] [i_13] = ((int) 17033102376206371517ULL);
                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_33 [i_9] [i_13])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_31 [i_8] [i_8])))) ^ ((+(((/* implicit */int) var_2))))));
                var_24 = ((/* implicit */unsigned char) ((long long int) 7760050943321738856LL));
            }
            arr_56 [i_8] [i_9] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)18), (((/* implicit */unsigned char) (signed char)-111))))) ? (max((arr_39 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned long long int) (signed char)-73)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 3278838857U))))))) ? (((/* implicit */unsigned long long int) var_4)) : (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)4145)))), (((((/* implicit */_Bool) (unsigned short)4129)) ? (var_8) : (var_7)))))));
        }
        var_25 = ((/* implicit */unsigned long long int) ((int) max((((((/* implicit */_Bool) 14554062524186696711ULL)) ? (((/* implicit */int) (signed char)-118)) : (-2147483642))), (((/* implicit */int) ((unsigned char) 4356063649786748441LL))))));
    }
    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 2) /* same iter space */
    {
        var_26 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) var_5)))) : (((((/* implicit */int) arr_47 [i_14] [i_14] [i_14])) ^ (((/* implicit */int) arr_31 [i_14] [i_14]))))))));
        arr_59 [i_14] [i_14] = ((/* implicit */unsigned long long int) var_3);
    }
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((long long int) var_3)))) ? ((-(max((17033102376206371502ULL), (1413641697503180086ULL))))) : (((/* implicit */unsigned long long int) ((unsigned int) max((var_8), (((/* implicit */unsigned long long int) var_1))))))));
}
