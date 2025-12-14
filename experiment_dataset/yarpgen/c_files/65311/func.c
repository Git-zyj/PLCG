/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65311
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
                {
                    arr_6 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 2] [i_2])) / (arr_3 [i_0 - 4])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_13 [i_3] [i_2] [i_2] [2LL] [(_Bool)1] [i_3] = ((((/* implicit */_Bool) (~(15578867780465504498ULL)))) ? (((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_0 + 2] [i_0 - 4])) : (((/* implicit */int) ((var_5) >= (var_1)))));
                                var_12 *= ((/* implicit */_Bool) (unsigned char)97);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) ((1756216696) < (((/* implicit */int) var_3))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1756216722)) ? (-1832820497) : (-1756216696)));
                                var_15 *= ((/* implicit */short) -1159011540);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 4; i_8 < 11; i_8 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned char) 1756216696);
                        var_17 = ((/* implicit */unsigned int) ((int) (unsigned char)240));
                        /* LoopSeq 4 */
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            var_18 = ((/* implicit */int) max((var_18), (((int) var_3))));
                            arr_27 [i_0 - 1] [i_0 - 4] [(_Bool)1] = ((/* implicit */unsigned long long int) (+(((unsigned int) arr_5 [i_0] [i_9]))));
                        }
                        for (int i_10 = 0; i_10 < 13; i_10 += 1) 
                        {
                            arr_31 [i_7] [i_1] [7U] [i_8 - 3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_5)))) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0 + 1] [i_8] [i_7] [i_8 - 4])))));
                            arr_32 [i_0] [i_1] [i_7] [i_8 + 2] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) -1756216707)) ? (1756216677) : (1832820497)));
                            var_19 = ((/* implicit */int) (short)-23374);
                            arr_33 [i_0] [i_0 + 1] [i_0] [i_0 - 4] [i_0] [i_0] = ((/* implicit */unsigned short) 231687581);
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)240)) ? (3719272252U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 1) 
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (arr_22 [i_0 + 1] [i_8 + 1] [i_8 + 2] [i_8 - 4] [(short)3] [i_11])));
                            var_22 -= ((17186404925847155836ULL) % (((/* implicit */unsigned long long int) -1832820526)));
                        }
                        for (int i_12 = 3; i_12 < 11; i_12 += 1) 
                        {
                            arr_40 [(unsigned short)4] [i_8] [(unsigned char)12] [(unsigned char)11] [7LL] = ((((/* implicit */_Bool) ((unsigned short) (unsigned char)244))) ? (((/* implicit */int) (unsigned short)19369)) : (((/* implicit */int) ((6253768310229725811ULL) == (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_7] [i_8] [i_12] [i_0] [i_12]))))));
                            var_23 *= ((/* implicit */unsigned char) arr_0 [i_0]);
                        }
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -231687571)) ? (arr_18 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [(unsigned short)12] [(unsigned short)12] [i_1])))))) ? (((/* implicit */int) (_Bool)1)) : (((var_5) % (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0] [i_0]))))));
                    }
                    for (int i_13 = 2; i_13 < 12; i_13 += 2) 
                    {
                        var_25 += ((/* implicit */_Bool) (+(arr_25 [i_0] [i_7])));
                        arr_43 [i_0] [i_1] [i_7] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1201001685)) ? (arr_23 [i_13] [i_7] [i_1] [i_0]) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)121)));
                    }
                    for (unsigned short i_14 = 0; i_14 < 13; i_14 += 2) 
                    {
                        arr_47 [i_14] [i_14] [i_7] [i_14] [i_7] = ((/* implicit */unsigned long long int) ((arr_42 [i_0 - 3] [i_0 - 3] [i_0 + 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8172702659884265263LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0)));
                        arr_48 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1756216697)) % (13498633308764415645ULL)))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) (-(3719272250U))))));
                    }
                    var_27 = ((/* implicit */int) ((((/* implicit */int) arr_24 [i_0] [i_0] [i_0 - 3] [i_1])) != (((((/* implicit */int) var_3)) % (((/* implicit */int) (signed char)-13))))));
                }
                for (unsigned int i_15 = 1; i_15 < 12; i_15 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        for (signed char i_17 = 0; i_17 < 13; i_17 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) min((var_28), (var_10)));
                                arr_57 [i_15] [i_15] [i_15] [6LL] [i_17] [i_15] [i_17] = ((/* implicit */int) max((((long long int) (~(((/* implicit */int) var_2))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (4068360782U) : (((/* implicit */unsigned int) 77782365))))) ? (((/* implicit */int) ((short) var_5))) : ((+(((/* implicit */int) var_3)))))))));
                                var_29 *= ((/* implicit */long long int) max((((-231687571) - (((/* implicit */int) (unsigned short)60587)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)25228)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 3) 
                        {
                            {
                                arr_63 [i_1] [i_19] [i_15] [i_18 - 1] [11] = ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_21 [i_15] [i_15] [i_15] [i_15])), (6812715780089916733ULL)))) || ((!(((/* implicit */_Bool) arr_29 [i_0] [i_15 + 1] [i_19])))))) ? ((~(-231687571))) : (((int) arr_29 [i_0] [i_0 - 3] [i_15 - 1])));
                                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_9 [2] [i_1] [i_0 - 1] [i_0])))))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) (~(-8172702659884265281LL)))))));
                }
                var_32 = ((/* implicit */short) arr_9 [i_0] [i_1] [i_1] [i_1]);
                var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (3719272252U)));
                arr_64 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)233)) / (231687581)));
                arr_65 [i_0] [i_1] &= ((/* implicit */unsigned short) arr_38 [i_0] [i_0] [i_1] [i_1] [i_0]);
            }
        } 
    } 
}
