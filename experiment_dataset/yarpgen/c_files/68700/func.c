/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68700
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)16129)))) ? ((~(((/* implicit */int) (unsigned short)0)))) : ((((_Bool)1) ? (((/* implicit */int) arr_3 [i_0 + 3])) : (((/* implicit */int) arr_2 [i_1 + 2]))))));
                var_14 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                var_15 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(short)2])) ? (((/* implicit */int) (short)2164)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_11))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36389)) ? (((/* implicit */int) arr_2 [i_0 + 3])) : (((/* implicit */int) arr_2 [i_0 + 1])))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0 + 2] [i_1 - 2])))))));
                    arr_6 [i_0] [i_0] [i_0] [i_0 - 2] = ((((((/* implicit */_Bool) -1392954341)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_11))) << (0LL));
                    var_17 *= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])) : (var_3)));
                }
                for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((((/* implicit */int) arr_10 [i_5] [i_1] [i_3] [i_1] [0])), (var_3)));
                                var_19 &= ((/* implicit */unsigned char) max(((~(((/* implicit */int) var_4)))), ((~(((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                    arr_16 [i_3] = ((/* implicit */unsigned char) arr_9 [i_3] [i_0 + 2] [i_3]);
                    arr_17 [i_0] [i_3] [i_3] = max(((_Bool)1), ((_Bool)1));
                }
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    var_20 = ((/* implicit */signed char) arr_13 [i_0] [i_1] [i_1] [i_6] [i_6]);
                    /* LoopSeq 2 */
                    for (int i_7 = 1; i_7 < 15; i_7 += 2) 
                    {
                        var_21 = ((/* implicit */short) ((unsigned char) ((unsigned long long int) (signed char)-44)));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_1] [i_0] [i_7]))))) ? (((((/* implicit */_Bool) max((var_6), (((/* implicit */short) (_Bool)1))))) ? ((((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
                        {
                            var_23 |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_14 [i_0 - 2] [i_6] [i_7 - 1])) ? (((/* implicit */int) arr_14 [i_0] [i_7 + 2] [i_8])) : (((/* implicit */int) arr_14 [(unsigned char)11] [i_6] [(unsigned char)11]))))));
                            arr_25 [i_6] [i_6] [10] [i_6] = ((/* implicit */unsigned char) min((((arr_10 [i_0] [i_7] [i_0] [i_1] [i_0]) ? (((/* implicit */int) min((var_8), (arr_1 [i_6] [i_6])))) : (((/* implicit */int) ((11398690883303124839ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6] [i_1] [i_6] [i_1])))))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_7 + 1])) ? (((/* implicit */int) arr_8 [(unsigned short)14] [i_7 - 1])) : (((/* implicit */int) arr_8 [i_0] [i_7 + 1]))))));
                            var_24 = ((((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) arr_11 [i_6] [i_6] [i_6]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) min((7048053190406426789ULL), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [11U] [i_0])))));
                            var_25 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) var_6)))));
                            var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_6] [i_6] [(unsigned char)3] [i_6]))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) var_4);
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_19 [i_6] [i_7 + 1] [i_7 + 1] [i_9]), (arr_19 [i_6] [i_7 + 2] [i_9] [14])))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_12 [i_6] [i_7 - 1] [i_7 - 1] [i_6])), (var_3)))) : (max((-5363240210464896343LL), (((/* implicit */long long int) var_9))))));
                            arr_29 [i_0] [i_0] [i_6] [i_6] [i_9] [(short)10] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
                        {
                            arr_32 [i_6] = ((/* implicit */unsigned char) ((unsigned short) max((arr_22 [i_1] [i_1 - 1] [i_1 - 2] [13ULL] [i_1]), (arr_22 [i_0 - 1] [i_1] [i_6] [i_7] [i_10]))));
                            arr_33 [i_0 - 2] [i_0] [i_0] [i_6] [i_6] [i_0] [4U] |= ((/* implicit */short) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) arr_18 [i_10])) ? (((/* implicit */int) arr_18 [i_0 - 1])) : (((/* implicit */int) arr_18 [i_0 + 2]))))));
                            var_29 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) var_4)), (((long long int) ((unsigned long long int) (unsigned char)0)))));
                        }
                        arr_34 [i_0] [i_6] [i_6] [i_7] [i_1 - 2] = ((/* implicit */unsigned long long int) var_0);
                    }
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)168)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0] [i_11])) : ((-(((/* implicit */int) arr_9 [i_0 + 2] [i_1 - 1] [i_6]))))));
                        var_31 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (11398690883303124826ULL)));
                    }
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 4) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (int i_14 = 2; i_14 < 16; i_14 += 1) 
            {
                {
                    arr_47 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_14 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_14 - 1])) || (((/* implicit */_Bool) arr_39 [i_14 + 1]))))) : (((((/* implicit */_Bool) arr_39 [i_14 + 2])) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) arr_39 [i_14 + 2]))))));
                    var_32 = ((/* implicit */short) min(((unsigned char)88), (((/* implicit */unsigned char) var_0))));
                    arr_48 [i_13] [i_13] [i_14 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_12])) ? (((/* implicit */int) arr_39 [i_13])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_13])) || ((_Bool)1)))) : (((/* implicit */int) ((signed char) arr_39 [i_12])))));
                    var_33 = (_Bool)1;
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */int) max((((/* implicit */short) (unsigned char)93)), (var_9)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 1) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                arr_53 [i_16] [i_16] = ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
                arr_54 [i_15] [i_16] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_52 [15U] [15U] [(unsigned short)10]))))) ? (((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))) : ((~(((/* implicit */int) (unsigned char)140))))))), (max((18446744073709551610ULL), (((/* implicit */unsigned long long int) 4294967295U)))));
                var_35 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_49 [i_16])))) ? (((((/* implicit */int) (short)20341)) % (((/* implicit */int) (unsigned char)132)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551610ULL)))) ? (((/* implicit */int) min((arr_51 [i_15] [i_16]), (((/* implicit */unsigned short) var_5))))) : (((/* implicit */int) ((short) arr_51 [i_15] [i_15])))))));
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned long long int) ((unsigned char) var_3));
}
