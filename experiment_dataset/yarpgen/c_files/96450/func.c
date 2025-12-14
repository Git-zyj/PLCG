/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96450
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
    var_12 = ((/* implicit */unsigned char) ((long long int) var_0));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (var_2)));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((int) 9223372036854775786LL)) & (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (signed char)-60))))));
                var_15 = ((/* implicit */int) min((var_15), ((~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2483869703U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16083))))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
                {
                    var_16 = (!(((/* implicit */_Bool) -1651119737)));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */short) ((unsigned int) arr_6 [i_0 - 3] [i_1] [i_0 - 2] [i_3]));
                        arr_10 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) (signed char)110);
                        arr_11 [i_0] [i_0] [i_0 - 2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (~(arr_9 [i_0 - 2] [i_0 + 2] [i_0 + 1] [i_0])));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0 + 1])) & (((/* implicit */int) arr_5 [i_0 + 2]))));
                    }
                    for (long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                    {
                        var_19 *= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 - 3]))));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned short) (_Bool)0)))));
                        arr_14 [i_4 - 1] [i_4 - 2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned int) 400080609U));
                    }
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_1] [i_6] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */long long int) ((unsigned short) arr_13 [i_0 - 1] [i_1] [i_2]));
                            arr_23 [i_0] [i_0] [i_0] [i_0 - 4] [i_0 - 3] [i_6] [i_0 - 3] = ((/* implicit */unsigned short) arr_20 [i_0 + 1] [i_1] [i_2] [i_2] [i_1] [i_2] [i_1]);
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_9 [i_6] [i_5] [i_2] [i_0 + 3]))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_19 [i_0] [i_0] [i_0] [i_1] [i_2] [i_5] [i_7]))));
                            arr_27 [i_0 - 1] [i_1] [i_2] [i_5] [i_5] [i_7] = var_5;
                        }
                        arr_28 [i_0 - 3] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0 + 1]))));
                    }
                }
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
                {
                    var_23 ^= ((/* implicit */unsigned int) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) arr_29 [i_0 - 3] [i_1]);
                                arr_39 [i_1] [i_10] [i_8] [i_8] = ((/* implicit */unsigned short) max((8114717292756705439ULL), (((/* implicit */unsigned long long int) ((unsigned char) max((arr_36 [i_0 + 2] [i_1]), (var_5)))))));
                            }
                        } 
                    } 
                    arr_40 [i_0 - 4] [i_1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(1651119730)))) <= (var_8)))) : ((~(((/* implicit */int) ((_Bool) 1651119722)))))));
                    /* LoopSeq 2 */
                    for (long long int i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
                    {
                        arr_44 [i_0] [i_0 - 2] [i_0] [i_0] |= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned char) 2415345795U))), (var_0)));
                        arr_45 [i_0] [i_0] [i_1] [i_8] [i_8] [i_11] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [i_1] [i_8] [i_0 + 3] [i_8] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0 + 3] [i_1] [i_8] [i_0 + 1] [i_11] [i_0]))) : (var_5)))) ? (((((/* implicit */_Bool) 1651119738)) ? (arr_15 [i_0 - 2]) : (arr_15 [i_0 - 3]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_0 - 1] [i_8] [i_8] [i_11]))))));
                    }
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 3) 
                        {
                            var_25 = ((unsigned short) ((int) (unsigned short)37044));
                            arr_51 [i_13] [i_1] [i_8] [i_12] [i_13] [i_13] = ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) arr_24 [i_13] [i_13] [i_13])) && (((/* implicit */_Bool) (unsigned char)106)))) ? (((/* implicit */unsigned long long int) arr_12 [i_0 + 3])) : (var_8)))));
                            var_26 = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned char) 1029351575))), (((((/* implicit */_Bool) arr_36 [i_0 - 4] [i_0])) ? (4721709710548626639LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                        }
                        /* vectorizable */
                        for (long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            var_27 *= ((/* implicit */unsigned int) ((arr_7 [i_0] [i_1] [i_8] [i_14]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13127)))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_14]))) | (arr_6 [i_0 - 4] [i_1] [i_8] [i_12])));
                            arr_54 [i_14] [i_12] [i_14] [i_1] [i_0] = ((/* implicit */unsigned int) (signed char)-57);
                            arr_55 [i_14] = ((/* implicit */unsigned int) arr_50 [i_1] [i_8] [i_14]);
                        }
                        arr_56 [i_12] [i_8] [i_1] [i_0 - 1] = ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-46))))));
                        var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_32 [i_0 - 2] [i_0]))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_12])) ? (max((((/* implicit */unsigned int) (_Bool)1)), (arr_33 [i_12] [i_8] [i_1] [i_0]))) : (((/* implicit */unsigned int) 1651119749)))) >> (((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_8] [i_0 - 3])) ? (arr_7 [i_0 + 1] [i_1] [i_8] [i_0 + 2]) : (arr_7 [i_0] [i_1] [i_8] [i_0 - 1]))) - (7200887665466755438ULL))))))));
                    }
                }
            }
        } 
    } 
}
