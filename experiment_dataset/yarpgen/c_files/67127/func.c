/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67127
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 *= ((/* implicit */_Bool) ((short) ((unsigned int) min((var_2), (((/* implicit */unsigned int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_0] = ((/* implicit */unsigned int) var_7);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            var_15 &= ((/* implicit */signed char) ((min((-1858513479996431394LL), (((/* implicit */long long int) arr_8 [i_1 - 1] [i_1 + 1] [i_2 + 1] [i_1 + 1] [i_2 + 1])))) ^ (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))))));
                            arr_13 [i_4] [i_1] [i_2 + 1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) (!(((/* implicit */_Bool) -1858513479996431389LL))))));
                            var_16 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4])) < (((/* implicit */int) arr_7 [(_Bool)1] [i_1 + 1] [i_2 + 1])))))) : (max((((/* implicit */unsigned long long int) 1858513479996431404LL)), (arr_12 [i_3] [i_3] [i_3] [i_3] [i_3])))))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_3] [i_5] &= ((/* implicit */int) arr_2 [i_1]);
                            var_17 = ((/* implicit */unsigned long long int) var_11);
                            arr_17 [i_3] [i_3] [i_0] [i_0] [i_3] = ((/* implicit */short) (-(((var_11) ? (((/* implicit */int) (short)-22337)) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_3]))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551592ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_5)))) ? (var_0) : (((/* implicit */unsigned long long int) ((int) (unsigned short)59220)))));
                            arr_19 [i_5] [i_5] [i_1 - 1] [i_2] [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
                        }
                        for (long long int i_6 = 1; i_6 < 16; i_6 += 1) 
                        {
                            arr_22 [i_3] = ((/* implicit */unsigned short) ((long long int) 24576LL));
                            var_18 &= ((/* implicit */long long int) ((((arr_15 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1]) / (arr_15 [i_2 + 1] [i_3] [(unsigned char)3] [(unsigned char)3]))) == (((/* implicit */long long int) ((int) arr_5 [i_1 + 1] [i_2 + 1] [i_6 + 1])))));
                            var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_2 + 1] [i_2 + 1] [i_1 + 1])), (max((var_7), (((/* implicit */long long int) arr_2 [i_2 + 1]))))))) ? (-1858513479996431404LL) : (((/* implicit */long long int) -747177222))));
                        }
                        var_20 = ((/* implicit */long long int) ((unsigned short) arr_7 [i_2] [(unsigned char)8] [(unsigned char)8]));
                        arr_23 [i_3] [i_2 + 1] [i_1] [i_0] = ((/* implicit */short) arr_9 [i_3]);
                        arr_24 [i_0] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) var_4);
                        arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned short) 1858513479996431404LL);
                    }
                }
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        var_21 *= ((/* implicit */long long int) 0U);
        /* LoopSeq 1 */
        for (short i_8 = 1; i_8 < 24; i_8 += 4) 
        {
            arr_32 [i_8 - 1] [i_8 - 1] [i_8 - 1] = ((/* implicit */unsigned long long int) ((var_11) ? (((((/* implicit */_Bool) ((unsigned short) arr_28 [i_8 + 1]))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 339506584)) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (var_3)));
            arr_33 [i_8] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 6056277287619393596ULL)) ? (((/* implicit */int) (unsigned short)7421)) : (((/* implicit */int) (short)32767))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6316))) : (min((((long long int) (unsigned char)22)), (((/* implicit */long long int) (short)32744))))));
        }
    }
    var_22 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2366739936U))))), (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))))))), (var_5)));
    /* LoopSeq 2 */
    for (short i_9 = 0; i_9 < 18; i_9 += 3) 
    {
        var_23 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)25))) != (932101740852539951LL)));
        var_24 -= ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_34 [(signed char)0])) && (((/* implicit */_Bool) arr_21 [i_9] [i_9] [i_9] [i_9]))))))));
    }
    /* vectorizable */
    for (long long int i_10 = 2; i_10 < 13; i_10 += 2) 
    {
        var_25 = ((/* implicit */long long int) arr_35 [i_10]);
        var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_10 - 2] [i_10]))) / (1928227356U)));
    }
    /* LoopNest 3 */
    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
    {
        for (unsigned short i_12 = 2; i_12 < 19; i_12 += 2) 
        {
            for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 3; i_14 < 17; i_14 += 2) 
                    {
                        for (long long int i_15 = 0; i_15 < 20; i_15 += 3) 
                        {
                            {
                                var_27 |= ((/* implicit */long long int) (short)18550);
                                var_28 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_53 [i_15] [i_15])))));
                                var_29 += ((/* implicit */unsigned long long int) (short)-23342);
                                var_30 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) max((arr_49 [i_15] [i_14 - 2] [i_13] [i_12] [i_11]), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_11] [i_12 + 1] [i_13] [7LL] [i_14] [i_15]))))) : (((/* implicit */int) var_11)))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_11] [i_12] [i_13])))))) & (((((/* implicit */_Bool) (~(-9223372036854775800LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_0)))) : (((var_11) ? (arr_52 [i_11] [i_11] [i_12 - 2] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3898)))))))));
                    var_32 = ((/* implicit */short) arr_31 [i_11] [i_12] [i_13]);
                    var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((var_7) >= (((/* implicit */long long int) var_12)))) ? (((var_7) - (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) (+(339506584))))))) | (max((max((((/* implicit */unsigned long long int) 4294967295U)), (16345258452401231375ULL))), (((/* implicit */unsigned long long int) 1858513479996431389LL))))));
                }
            } 
        } 
    } 
}
