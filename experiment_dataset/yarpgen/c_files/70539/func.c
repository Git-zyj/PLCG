/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70539
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned short)54026))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [(unsigned short)3] [i_4] = ((/* implicit */long long int) (unsigned short)62880);
                                var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1] [i_4])) ? (((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_1 - 1] [i_0 + 1])) : (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_2] [i_0 - 2] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_8 [i_3] [i_2] [i_0 - 2] [i_0 - 2]))))), ((~(arr_2 [i_4])))))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)11510)) ? (((unsigned long long int) arr_9 [i_0 - 2])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3405528136U)) ? (((/* implicit */int) ((var_4) > (arr_1 [i_3])))) : (((/* implicit */int) (unsigned short)11502)))))));
                                arr_14 [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max(((+(((/* implicit */int) (unsigned short)54025)))), (((/* implicit */int) min((arr_11 [(_Bool)1] [i_3] [(_Bool)1] [i_3] [i_3]), (arr_11 [i_4] [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_0 + 1]))))));
                            }
                        } 
                    } 
                    var_23 |= ((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) (_Bool)1))));
                    arr_15 [i_0] [i_1 + 2] [i_2] [i_0 - 1] = ((/* implicit */int) var_19);
                }
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            {
                                arr_30 [i_6] [i_6] [i_6] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */signed char) var_14);
                                var_24 = ((/* implicit */unsigned short) min((min((arr_1 [i_6]), (arr_1 [i_8]))), (((((/* implicit */_Bool) arr_1 [i_6])) ? (arr_1 [i_7]) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            arr_36 [i_11] [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) min((arr_29 [i_5] [(short)3] [i_6] [i_10] [i_11]), (((/* implicit */unsigned short) arr_17 [i_7])))))))) < (min(((~(((/* implicit */int) arr_33 [i_5] [i_6] [i_7] [i_10] [i_7])))), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_17 [0ULL])) : (((/* implicit */int) var_12))))))));
                            var_25 *= ((/* implicit */unsigned int) var_0);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3405528136U)) ? (889439160U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11502)))));
                            arr_39 [i_5] [i_6] [i_7] [i_10] [(unsigned short)0] &= ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_27 [(unsigned short)6] [i_10] [i_7] [(unsigned short)6]), (arr_27 [i_5] [i_6] [i_7] [4ULL]))))));
                        }
                        arr_40 [i_6] [8] [i_6] [i_6] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) arr_17 [i_6])), (arr_6 [i_5] [(unsigned short)7] [(unsigned short)7] [i_5]))), (((/* implicit */unsigned int) ((arr_17 [i_5]) ? (((/* implicit */int) arr_17 [i_5])) : (arr_1 [i_5]))))));
                        var_27 = (unsigned short)5552;
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        var_28 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (_Bool)1)), (arr_6 [i_13] [i_7] [i_6] [i_5])))));
                        var_29 = arr_35 [i_6];
                        /* LoopSeq 3 */
                        for (long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            arr_46 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11509))) > (16214621434975064041ULL)));
                            var_30 = ((/* implicit */signed char) 879284301U);
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) arr_49 [i_5] [i_6]);
                            var_32 = ((/* implicit */short) min(((-(((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_6])))), (((/* implicit */int) ((_Bool) (signed char)-98)))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) 12769500209733866151ULL)) ? (((/* implicit */int) arr_10 [i_15] [i_13] [i_7] [i_6] [i_5])) : (((/* implicit */int) arr_27 [(short)7] [9LL] [4LL] [i_6]))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) 
                        {
                            arr_52 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5])))))) : (max((((/* implicit */unsigned int) (unsigned short)33850)), (arr_6 [i_5] [i_5] [i_5] [i_5])))));
                            arr_53 [i_6] [i_6] [i_6] [i_13] [i_16] = ((/* implicit */unsigned short) arr_4 [i_6]);
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 889439161U)) ? ((-(((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)60284)))))) : (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (short)-17296)))), (((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) var_6)))))))));
                        }
                    }
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned long long int) arr_43 [i_5] [i_5] [i_5] [i_5] [i_5]);
    }
    /* LoopNest 2 */
    for (long long int i_17 = 1; i_17 < 11; i_17 += 2) 
    {
        for (long long int i_18 = 2; i_18 < 10; i_18 += 1) 
        {
            {
                var_36 = ((/* implicit */unsigned short) ((11U) << (((((/* implicit */int) ((short) arr_4 [i_17 - 1]))) - (27876)))));
                var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_7 [i_17] [i_18] [(signed char)7])))) && (((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) arr_0 [i_18] [i_17 + 1])))))));
                var_38 = ((/* implicit */unsigned short) arr_6 [i_17 - 1] [1LL] [i_17 - 1] [i_18]);
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned long long int) var_17);
    /* LoopSeq 1 */
    for (unsigned short i_19 = 0; i_19 < 16; i_19 += 1) 
    {
        arr_61 [i_19] = ((/* implicit */unsigned long long int) max((((arr_59 [i_19] [i_19]) / (arr_59 [i_19] [i_19]))), (((((/* implicit */_Bool) var_8)) ? (arr_59 [i_19] [i_19]) : (arr_59 [i_19] [i_19])))));
        var_40 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (-8129455894842304291LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) arr_10 [i_19] [i_19] [13U] [i_19] [i_19])))) != (((/* implicit */int) (_Bool)1))));
        arr_62 [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_19] [i_19])) ? (((/* implicit */long long int) ((((_Bool) (signed char)-75)) ? (var_4) : ((~(((/* implicit */int) var_12))))))) : (min((arr_7 [i_19] [i_19] [i_19]), (arr_7 [i_19] [i_19] [i_19])))));
        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) var_18))));
        var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) ((unsigned short) var_7)))));
    }
}
