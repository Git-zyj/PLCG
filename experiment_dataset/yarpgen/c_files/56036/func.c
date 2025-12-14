/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56036
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) arr_6 [i_0]);
                    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((arr_7 [i_0] [i_1] [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-79)))) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))))))))))));
                }
            } 
        } 
        var_12 = ((/* implicit */_Bool) min((max((var_0), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)220)), (var_1)))))), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_13 = ((/* implicit */signed char) var_5);
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3 - 1] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
        arr_13 [i_3] [i_3] = ((/* implicit */long long int) var_3);
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_5))));
        var_15 = ((/* implicit */short) (unsigned char)168);
        arr_14 [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_11 [1ULL] [i_3 - 1])) : (((/* implicit */int) arr_11 [i_3] [i_3 - 1]))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) ((unsigned int) min((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))), (min((-20412722), (((/* implicit */int) (unsigned char)225)))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-90)) / (((/* implicit */int) var_8))))), (min((var_1), (((/* implicit */unsigned int) arr_8 [i_4] [i_4] [i_4]))))))) / (min((((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */unsigned long long int) arr_4 [i_4])) : (var_0))), (((/* implicit */unsigned long long int) 3887263183879608707LL))))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_5] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */unsigned long long int) (~(var_1)))) : (arr_9 [i_5] [i_5 - 1] [i_5 - 1])));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min(((short)10801), (((/* implicit */short) (unsigned char)34))))) ? (arr_9 [i_5] [i_5 - 1] [i_5]) : (((/* implicit */unsigned long long int) ((long long int) arr_9 [i_5] [i_5 - 1] [i_5 - 1])))));
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned short i_8 = 3; i_8 < 11; i_8 += 4) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [i_5 - 1]), (arr_6 [i_5 - 1]))))) < (max((arr_16 [i_5] [i_7]), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (1700943290U)))))));
                        var_21 = ((/* implicit */int) (!((!(((_Bool) (short)-13184))))));
                        arr_31 [i_5] [i_5] [i_6] &= ((/* implicit */unsigned char) var_7);
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-10305)))))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)212))))))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned int) var_9);
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_9 = 2; i_9 < 12; i_9 += 2) 
            {
                arr_34 [i_5] [i_6] [(signed char)8] = (short)-13184;
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (~((~(((/* implicit */int) var_7)))))))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                var_26 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) ((signed char) (short)-27117))), (max((var_7), (((/* implicit */unsigned short) (signed char)105)))))))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 1; i_11 < 11; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_0)))))));
                            arr_42 [i_5] [i_11] [i_10] [i_11] [(_Bool)1] [i_12] [i_10] = ((/* implicit */unsigned long long int) var_6);
                        }
                    } 
                } 
            }
            for (long long int i_13 = 0; i_13 < 13; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    for (int i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        {
                            arr_52 [i_5 - 1] [i_6] [i_13] [i_15] [i_15] = ((/* implicit */short) arr_48 [i_15] [i_14] [i_14 + 1] [i_13] [i_6] [i_5]);
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_5 - 1] [i_5 - 1] [i_5 - 1]))) & (arr_32 [i_15] [i_14 + 1] [i_5 - 1] [i_14])))), (min((var_0), (((/* implicit */unsigned long long int) arr_32 [i_15] [i_14 + 1] [i_5 - 1] [i_14 + 1])))))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) (+((+(((/* implicit */int) arr_19 [i_5 - 1]))))))) - (min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (max((arr_3 [i_6]), (((/* implicit */long long int) var_8))))))));
            }
        }
        var_30 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (var_0))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_0 [i_5]))))) : (((/* implicit */int) arr_8 [i_5] [i_5 - 1] [i_5]))))), (arr_32 [i_5 - 1] [i_5] [i_5] [i_5])));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_17 = 0; i_17 < 13; i_17 += 2) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) arr_54 [i_16]))));
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (signed char i_20 = 1; i_20 < 12; i_20 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20588)) ? ((~(min((((/* implicit */unsigned long long int) arr_1 [i_16])), (8516541337595721266ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10801)))));
                                var_33 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_16]))) : (var_0))), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned short) var_8))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_11 [i_16] [i_16])) ? (var_0) : (((/* implicit */unsigned long long int) arr_50 [i_16] [i_17] [i_16] [i_19] [i_19])))) : (((((/* implicit */_Bool) arr_21 [i_16])) ? (12767982583930406442ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_16])))))))));
                                var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) ((_Bool) var_7))) != (((((/* implicit */_Bool) arr_11 [i_18] [i_18])) ? (((/* implicit */int) arr_29 [i_20] [i_17] [i_18] [i_17] [i_16])) : (((/* implicit */int) var_5))))))), ((+(((/* implicit */int) min((((/* implicit */unsigned char) arr_20 [i_16])), ((unsigned char)78)))))))))));
                                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (+((+(12767982583930406442ULL))))))));
                            }
                        } 
                    } 
                    arr_67 [i_16] [i_17] [(short)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24619)) ? (((/* implicit */int) arr_60 [i_16] [(_Bool)0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 738104176314736085LL)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)62016))))) : ((~(arr_27 [i_18] [i_17] [i_16])))));
                    var_36 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
                }
            } 
        } 
        var_37 = ((/* implicit */int) min((var_37), ((+(((/* implicit */int) min((((/* implicit */unsigned short) ((short) (_Bool)1))), (arr_51 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))))))));
        arr_68 [i_16] = (((_Bool)1) ? (((((min((-3559857082635281137LL), (((/* implicit */long long int) (short)10037)))) + (9223372036854775807LL))) << ((((-(((/* implicit */int) (signed char)-67)))) - (67))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
    }
    var_38 *= ((/* implicit */unsigned int) (~(min((var_0), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)23)))))))));
}
