/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80797
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
    var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((66060288) & (((/* implicit */int) arr_0 [(unsigned char)6]))))) ? (((/* implicit */int) min(((signed char)(-127 - 1)), (((/* implicit */signed char) arr_1 [i_0]))))) : (arr_5 [i_0 - 1] [i_2] [i_1] [i_0 - 1]))), ((-(((/* implicit */int) (unsigned short)36578)))))))));
                        arr_8 [i_0 - 1] [(short)18] [i_2] [i_3] [i_0 - 1] [(_Bool)1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -12LL)))) ? (((/* implicit */unsigned long long int) var_18)) : (var_15)));
                    }
                    for (unsigned int i_4 = 3; i_4 < 21; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_4 [i_1 - 1] [i_2 + 1] [i_4 - 2])))) ? (max((-66060289), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned short)65121)) ? (((((/* implicit */_Bool) -571369696)) ? (((/* implicit */int) (_Bool)1)) : (-1))) : (-1797766365)))));
                        arr_11 [i_4] [i_2 - 1] [i_1] [i_4] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1])))));
                    }
                    for (int i_5 = 2; i_5 < 18; i_5 += 3) 
                    {
                        arr_14 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : ((-(903578647U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)36576))))));
                        var_23 = (~(((/* implicit */int) ((arr_9 [i_0] [i_1 + 1] [i_0] [19U]) > (arr_9 [1] [i_1 - 2] [(signed char)12] [i_0 - 1])))));
                        var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_5] [i_2] [i_1] [(short)8]), (((/* implicit */int) (unsigned short)65098))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)99))) * (16U))) : (((/* implicit */unsigned int) (+(1073733632))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7370)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [20]))))))))) : (var_9)));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        arr_18 [i_6] [i_6] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) arr_16 [i_2 + 3] [i_2 - 1] [i_2 + 3]))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) ((_Bool) arr_9 [i_0] [(unsigned char)20] [i_0] [i_0]))))))));
                    }
                    for (int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        var_26 &= ((/* implicit */int) var_11);
                        /* LoopSeq 4 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            arr_25 [i_0] [20] [i_8] [20] [i_8] = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2] [i_7]);
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((-3071740886368319983LL) | (var_9))))));
                            var_28 = ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_22 [i_8] [i_1 - 2] [i_2 + 3]), (arr_22 [i_0] [i_1 + 1] [i_2 + 3])))), (((((((/* implicit */int) var_2)) % (((/* implicit */int) (unsigned char)207)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [8U] [i_0 - 1])))))))));
                            var_29 = min((min((((((/* implicit */_Bool) (unsigned short)65126)) ? (-1073733657) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_24 [i_8] [12] [i_2] [i_2] [i_2] [i_1] [14U])))), (((/* implicit */int) arr_19 [i_0] [i_1] [i_2 + 1] [i_7])));
                            var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_2] [(unsigned char)18] [(unsigned char)18]))) - ((((_Bool)1) ? (((3524529159718586645ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120)))))));
                        }
                        for (int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            var_31 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_2 + 3] [i_9] [i_9] [i_1])) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) var_15))), (max((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0 - 1] [i_0])), (8061553314923428564LL))))))));
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (!(arr_3 [i_1 + 1] [i_1] [i_2 + 4]))))));
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (-3))))));
                            arr_29 [i_9] [6ULL] [6ULL] [i_0] = ((/* implicit */int) ((14922214913990964971ULL) / (14471719884785314200ULL)));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            var_34 &= var_4;
                            var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 1] [i_1 + 1] [i_2 + 3]))) | (var_14)));
                            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) var_16))));
                            var_37 = ((/* implicit */unsigned short) ((arr_5 [18LL] [i_2 - 2] [i_0 - 1] [i_0 - 1]) | (arr_5 [(unsigned short)17] [i_2 + 1] [i_0 - 1] [(_Bool)1])));
                        }
                        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            var_38 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_11)))) ? (((unsigned long long int) ((var_9) | (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [11LL] [(signed char)21] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)231)))))));
                            var_39 = ((/* implicit */long long int) (+(2091619906)));
                            arr_34 [i_0] [i_0] [i_0] [(unsigned char)15] [i_0 - 1] [3LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_17 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))))) + (((/* implicit */int) arr_10 [i_0] [(unsigned char)5] [(unsigned short)10]))))) ? (max((((((/* implicit */int) arr_23 [(_Bool)1] [i_7] [i_7] [17LL] [i_1] [(unsigned char)8] [6LL])) + (((/* implicit */int) (short)29401)))), (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) ((_Bool) 1406675425)))));
                        }
                        var_40 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0] [i_0 - 1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2 + 3] [i_0 - 1] [i_0]))) : (24U))), (((/* implicit */unsigned int) arr_22 [i_2 - 2] [i_0 - 1] [i_0 - 1]))));
                    }
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 8061553314923428577LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((8796093022207ULL), (((/* implicit */unsigned long long int) 2031861621U)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) (signed char)-70))))))));
                        var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) (+((~(arr_7 [i_0] [(short)7] [i_0 - 1] [i_12] [i_2]))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        for (int i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 453136440U)) ? (arr_4 [i_1 + 1] [i_1 - 1] [i_0 - 1]) : (((/* implicit */int) arr_39 [i_1] [i_1 - 2] [i_0 - 1])))), (((((/* implicit */_Bool) 453136451U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))));
                                arr_45 [i_13] [i_0] [(_Bool)1] [i_13] [i_14] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_43 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_15) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))))))) : (arr_26 [i_0 - 1] [i_1 - 1] [(short)3] [i_2] [i_2 - 2] [i_2] [i_13]))) >= (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [(_Bool)1] [i_1 - 1] [i_2 + 4] [i_13]))) : (var_0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_44 |= ((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) 453136451U)) ? (-408867421) : ((~(((/* implicit */int) var_11))))))));
}
