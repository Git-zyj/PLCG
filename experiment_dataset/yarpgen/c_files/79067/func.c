/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79067
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) (+(var_13)));
                            /* LoopSeq 4 */
                            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) 2147483647))), ((-2147483647 - 1))))), (var_3)));
                                var_18 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((arr_3 [i_1]), (3U)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1] [i_3])) && (((/* implicit */_Bool) (-2147483647 - 1)))))))))));
                                arr_13 [i_0 + 1] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) 7774441769535295791LL);
                                var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) arr_12 [i_1] [i_1])), (min(((unsigned short)65287), (((/* implicit */unsigned short) (unsigned char)255))))));
                                arr_14 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65260)) || (((/* implicit */_Bool) 2607401514999154751ULL))));
                            }
                            for (unsigned int i_5 = 2; i_5 < 16; i_5 += 4) 
                            {
                                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_6)))))));
                                arr_17 [i_1] [i_1] [i_2] [i_1] [i_5] [i_3] [i_1] = ((/* implicit */unsigned short) (short)-1);
                            }
                            /* vectorizable */
                            for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_15))) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) ((unsigned char) var_9)))));
                                var_22 = ((/* implicit */unsigned short) ((7774441769535295804LL) > (((/* implicit */long long int) 33554431U))));
                                arr_21 [i_0] [i_0 + 1] [i_0] [i_0 - 2] [i_1] [(unsigned char)13] [(_Bool)1] = ((/* implicit */_Bool) ((arr_6 [i_1] [i_3 - 2]) + (((/* implicit */unsigned int) 2147483647))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                            {
                                arr_24 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-116))));
                                var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                                var_24 = ((/* implicit */long long int) ((short) arr_1 [i_1]));
                            }
                            var_25 = ((((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (max((((/* implicit */unsigned int) (unsigned char)255)), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) ((8592366983104981310LL) >= (((/* implicit */long long int) 8388607)))))))) << (((max((((/* implicit */long long int) arr_1 [i_0 - 2])), (-3438946066122145200LL))) - (1736367322LL))));
                            arr_25 [i_0] [i_1] = ((/* implicit */long long int) ((signed char) ((unsigned short) -7999705396575118455LL)));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) ((arr_16 [i_0 + 1] [(unsigned char)3] [i_0 - 2] [i_0 + 1] [i_1] [i_0 + 1] [i_0 - 2]) + ((-(((unsigned int) var_12))))));
                /* LoopSeq 3 */
                for (unsigned int i_8 = 1; i_8 < 15; i_8 += 4) 
                {
                    arr_28 [16LL] [i_1] [16LL] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_15)), (((466654077404418735LL) % (((/* implicit */long long int) 1053638992U))))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) max((1259641559), (((/* implicit */int) max((((/* implicit */short) var_10)), (min(((short)-31052), (((/* implicit */short) (unsigned char)200)))))))));
                                var_28 = ((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) ((unsigned char) 2989821102U)))));
                            }
                        } 
                    } 
                    arr_35 [(signed char)8] [i_1] [(unsigned short)1] [i_8 - 1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (signed char)-24))))), (min((min((((/* implicit */unsigned int) var_10)), (arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [3U] [i_8]))), (var_11)))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        for (short i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) ((((arr_20 [i_0 - 1] [i_0] [i_8 + 1] [i_8] [i_12] [8ULL] [i_8 + 1]) - (arr_20 [i_0 - 2] [i_0] [i_8 + 2] [i_0 - 2] [i_12] [i_8] [(_Bool)1]))) + (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) var_9)) : (min((var_8), (((/* implicit */unsigned long long int) var_10))))))));
                                arr_43 [i_0] [i_0] [i_1] [(short)0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (signed char)-127))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 1; i_14 < 16; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 3) 
                        {
                            {
                                arr_51 [i_0] [i_1] [i_1] [i_14 + 1] [i_14 + 1] [11LL] [i_15] = ((/* implicit */long long int) ((unsigned int) var_15));
                                arr_52 [2LL] [2LL] [i_14 - 1] [i_1] [i_15] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)52538)) ^ (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((((/* implicit */_Bool) 15045070237860223669ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_1)))));
                    var_31 = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) (unsigned short)43802)) * (((/* implicit */int) (signed char)116)))));
                }
                for (int i_16 = 0; i_16 < 17; i_16 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_17 = 1; i_17 < 13; i_17 += 4) 
                    {
                        for (short i_18 = 0; i_18 < 17; i_18 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) max((-3438946066122145200LL), (((/* implicit */long long int) arr_27 [i_18] [i_1] [i_17 + 4]))))) ? (arr_33 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_16] [i_1]) : (((/* implicit */long long int) var_11))));
                                var_33 = ((/* implicit */unsigned short) (((-((~(arr_41 [i_0] [i_1] [i_16] [(unsigned char)15] [i_18]))))) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15730)))));
                            }
                        } 
                    } 
                    arr_60 [i_1] [i_16] [i_1] [i_1] = ((/* implicit */unsigned int) var_6);
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((3808733477984489541ULL), (((/* implicit */unsigned long long int) (+(var_13))))))) ? (((((/* implicit */_Bool) arr_16 [i_0] [(unsigned short)12] [i_0 + 2] [i_0] [i_16] [(short)2] [i_1])) ? (-6274983122958842235LL) : (((/* implicit */long long int) min((var_11), (var_11)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1224349794U)) ? (arr_41 [16U] [i_0 - 1] [13] [i_1] [i_16]) : (arr_38 [i_0 - 1] [i_1] [i_16] [i_16])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 17; i_20 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned int) ((max((var_1), (arr_50 [i_0] [(unsigned short)6] [11ULL] [i_0] [11ULL]))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_55 [i_0 - 1] [i_0 - 2])) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)31051)), ((unsigned short)48808)))))))));
                                var_36 = var_13;
                                var_37 *= ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 1; i_21 < 15; i_21 += 3) 
                    {
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */short) (unsigned char)102)), ((short)3))));
                                arr_74 [i_1] [i_1] = ((/* implicit */long long int) var_1);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned int) var_5);
}
