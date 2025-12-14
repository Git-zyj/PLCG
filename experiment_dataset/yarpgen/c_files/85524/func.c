/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85524
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7924670440615858178LL))))) : (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_6))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_9 [i_3] [i_1] [i_0])))))));
                        arr_11 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) min(((~(((var_14) - (((/* implicit */int) (signed char)-118)))))), (((/* implicit */int) var_7))));
                        var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) arr_4 [i_3])))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        arr_14 [i_4] [i_4] = (~(((/* implicit */int) arr_13 [i_4] [i_4])));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (short i_6 = 2; i_6 < 16; i_6 += 3) 
            {
                {
                    var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 0LL))) ? (arr_19 [i_6 - 2] [i_6 - 1] [i_6 - 2] [i_6 + 1]) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_5]))) : (-1LL)))));
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_8 = 1; i_8 < 15; i_8 += 2) 
                        {
                            arr_27 [i_4] [i_6] [i_6 + 2] [i_7] [i_8] = ((/* implicit */signed char) arr_26 [i_4] [i_4]);
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(((/* implicit */int) arr_16 [i_6 - 1] [i_6 + 1] [i_6 - 2])))))));
                            arr_28 [i_4] [i_5] [i_5] [i_6] [i_7] [i_8 + 2] = ((/* implicit */unsigned long long int) ((signed char) arr_15 [i_7] [i_5]));
                            arr_29 [i_6] [i_7] [i_6] [i_5] [i_6] = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_23 [i_6]))))));
                            arr_30 [i_4] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((arr_20 [i_8] [i_8] [i_7] [i_6 - 1] [i_5] [i_4]) + (2147483647))) >> (((arr_20 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) + (547241228)))));
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            arr_35 [i_7] [i_5] [i_7] [i_6 + 1] [i_6] [i_7] [i_9 + 1] |= ((/* implicit */long long int) (((-(((/* implicit */int) (signed char)-118)))) | (((/* implicit */int) var_16))));
                            arr_36 [i_9] [i_6] [i_4] [i_5] [i_6] [i_4] = ((short) (unsigned short)47884);
                        }
                        for (signed char i_10 = 2; i_10 < 15; i_10 += 3) 
                        {
                            arr_40 [i_4] [i_5] [i_6] [i_7] = (~(((/* implicit */int) (signed char)22)));
                            arr_41 [i_4] [i_5] [i_5] [i_6 - 2] [i_6] [i_10 + 4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -8027941254119644860LL))));
                        }
                        for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 8027941254119644859LL)) ? (arr_19 [i_4] [i_6] [i_7] [i_11]) : (((/* implicit */long long int) var_14)))) - (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_4] [i_5] [i_5] [i_6]))))))));
                            var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_6 + 2] [i_6 - 1] [i_6] [i_6 + 1])) ? (arr_19 [i_6 + 3] [i_6 - 1] [i_6 + 2] [i_6 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        arr_44 [i_4] [i_4] [i_5] [i_5] [i_6] [i_7] &= ((/* implicit */_Bool) ((short) arr_20 [i_4] [i_5] [i_5] [i_6 - 2] [i_6 + 3] [i_7]));
                    }
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1854696021U)) ? (((/* implicit */int) arr_37 [i_6] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_33 [i_6] [i_6] [i_6 + 1] [i_6] [i_6]))))) : (0LL)));
                        arr_49 [i_6] [i_5] [i_5] [i_5] = ((((/* implicit */int) arr_33 [i_4] [i_4] [i_6] [i_12] [i_6 - 1])) <= (((((/* implicit */_Bool) arr_19 [i_4] [i_5] [i_6] [i_12])) ? (var_14) : (((/* implicit */int) (_Bool)1)))));
                        arr_50 [i_6] [i_5] [i_4] [i_12] |= ((/* implicit */_Bool) arr_46 [i_12]);
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_53 [i_4] [i_4] [i_6] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_24 [i_4] [i_6] [i_6 - 1])) : (var_3)))));
                        var_26 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_6] [i_6] [i_4] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_6] [i_6] [i_6 + 3] [i_6 + 3] [i_4] [i_6 + 1] [i_6]))) : (arr_42 [i_6 + 3] [i_6 + 2] [i_4] [i_4])));
                        arr_54 [i_6] [i_5] [i_6 - 1] [i_13] = ((/* implicit */long long int) (~((+(((/* implicit */int) var_1))))));
                        /* LoopSeq 3 */
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            var_27 &= ((/* implicit */short) ((((/* implicit */int) arr_37 [i_4] [i_5] [i_6] [i_13] [i_6])) / ((+(((/* implicit */int) var_15))))));
                            arr_57 [i_6] [i_5] [i_5] [i_6] = arr_20 [i_14] [i_13] [i_6] [i_5] [i_4] [i_4];
                            arr_58 [i_4] [i_5] [i_6 + 1] [i_13] [i_14 + 1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8192))) : (arr_12 [i_14 + 1])));
                            var_28 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_31 [i_4] [i_4] [i_5] [i_6] [i_13] [i_14 + 1] [i_6]))))));
                        }
                        for (unsigned int i_15 = 2; i_15 < 18; i_15 += 2) 
                        {
                            arr_61 [i_6] [i_13] [i_6] [i_6 + 3] [i_4] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_45 [i_15 - 2] [i_15] [i_6 - 1] [i_6] [i_6 + 1] [i_6 + 2]))));
                            arr_62 [i_4] [i_6] [i_13] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_42 [i_4] [i_4] [i_6] [i_4])))) ? (((/* implicit */int) ((0LL) > (((/* implicit */long long int) ((/* implicit */int) var_5)))))) : (arr_59 [i_15 - 2] [i_15] [i_15 + 1] [i_15 + 1] [i_15 - 1])));
                            var_29 ^= ((/* implicit */short) ((_Bool) arr_20 [i_6 - 2] [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 2]));
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((arr_19 [i_4] [i_4] [i_6] [i_6]) * (0LL))))));
                            var_31 = ((/* implicit */int) arr_42 [i_6] [i_5] [i_15] [i_13]);
                        }
                        for (long long int i_16 = 0; i_16 < 19; i_16 += 1) 
                        {
                            arr_65 [i_4] [i_4] [i_4] [i_5] [i_6] [i_13] [i_16] = ((/* implicit */int) (unsigned short)6713);
                            var_32 ^= ((/* implicit */_Bool) (~(arr_34 [i_4] [i_4] [i_4] [i_4] [i_4])));
                            var_33 += ((/* implicit */unsigned short) ((short) arr_22 [i_6 + 1] [i_6 + 1] [i_6 - 2]));
                        }
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) var_1))));
                    }
                    arr_66 [i_5] [i_6] = ((/* implicit */unsigned long long int) (+((~(var_19)))));
                }
            } 
        } 
    }
    for (short i_17 = 0; i_17 < 19; i_17 += 2) 
    {
        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) 2147483647))));
        var_36 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_17 [i_17]), (arr_17 [i_17]))))));
    }
    var_37 = ((/* implicit */_Bool) (~(min((((var_12) ? (-3438081763665862534LL) : (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) var_0))))));
    var_38 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) -229490513)) > (-2168385768588481272LL)))) < (((/* implicit */int) var_16))))), ((~(max((var_3), (((/* implicit */unsigned long long int) (_Bool)0))))))));
}
