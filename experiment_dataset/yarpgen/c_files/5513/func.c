/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5513
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
    var_15 = ((/* implicit */int) (unsigned short)5868);
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_5 [i_0 + 1] [i_1] = (~(((/* implicit */int) min((arr_3 [i_0 - 1]), (arr_3 [i_0 - 1])))));
            var_16 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned short)62024)), (2557191961366812633ULL)));
            var_17 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_0])) : (((/* implicit */int) arr_3 [i_0 - 2])))), (((/* implicit */int) (short)-3111))));
        }
        var_18 -= ((/* implicit */unsigned short) var_14);
        var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1278003639)) % (max((arr_4 [i_0] [i_0 - 1] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)197)))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_13)), (max((((/* implicit */long long int) arr_0 [i_2] [i_2])), (min((arr_2 [i_2] [i_2]), (((/* implicit */long long int) var_3))))))));
        var_20 = ((/* implicit */unsigned short) (!(var_13)));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 9; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */int) var_1);
                                var_22 -= ((/* implicit */unsigned long long int) min((arr_12 [i_2] [i_4] [i_5 + 1]), (min((arr_12 [i_2] [i_3] [i_5 + 1]), (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 10; i_7 += 3) 
                    {
                        for (int i_8 = 1; i_8 < 9; i_8 += 2) 
                        {
                            {
                                arr_23 [(short)1] [(short)1] [i_7] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((arr_10 [i_2]), (((/* implicit */unsigned long long int) (short)-3106)))), (((/* implicit */unsigned long long int) ((unsigned int) (short)3110)))))) && (((/* implicit */_Bool) var_10))));
                                arr_24 [i_8] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_15 [i_2] [i_3] [i_4] [i_7 - 2] [i_4]))) ? (((((/* implicit */_Bool) arr_10 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_0))) : (((/* implicit */unsigned int) ((int) arr_2 [i_3] [1ULL]))))))));
                                var_23 = ((/* implicit */unsigned char) 568234876U);
                            }
                        } 
                    } 
                    var_24 = (-((+(((((/* implicit */_Bool) (short)-3103)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88))) : (var_1))))));
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_7))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) arr_7 [i_2] [i_2]);
                    var_27 = ((/* implicit */unsigned int) arr_13 [i_2]);
                }
            } 
        } 
    }
    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) 
    {
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))) * (((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) ((unsigned short) (signed char)30))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-3107))))))))))));
        /* LoopNest 3 */
        for (short i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_15 = 0; i_15 < 16; i_15 += 4) 
                        {
                            var_29 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) 16320)) : (-1LL)));
                            arr_44 [(short)6] [(unsigned char)12] [i_12] [i_13] [i_12] [i_12] = ((/* implicit */short) ((((((long long int) arr_33 [i_15])) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55374))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_14])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (var_2)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)23001)) / (var_4)))) ? (((((/* implicit */_Bool) arr_38 [i_11] [i_11] [i_13] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (short)3116))) : (arr_41 [i_11] [i_15] [i_14] [i_11] [i_11] [i_11] [i_11]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)6329)) < (arr_40 [6ULL] [i_12] [6ULL] [i_13])))))))));
                            arr_45 [i_11] [i_11] [i_13] [i_13] [i_14] [i_13] [i_13] = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) (signed char)-49)), ((short)19255)))))));
                            var_30 *= min(((short)-6323), (((/* implicit */short) (_Bool)1)));
                            var_31 = ((/* implicit */signed char) (~((~(((/* implicit */int) (short)6309))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned long long int i_16 = 2; i_16 < 13; i_16 += 2) 
                        {
                            var_32 = ((/* implicit */short) ((long long int) (-(((/* implicit */int) arr_43 [i_13] [i_16 + 3] [i_13] [i_13] [i_13] [i_16 - 2])))));
                            var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                        }
                        for (short i_17 = 1; i_17 < 15; i_17 += 4) /* same iter space */
                        {
                            var_34 = (~(((/* implicit */int) (_Bool)1)));
                            arr_51 [i_13] [i_12] [i_13] [i_14] [i_17 - 1] = ((/* implicit */signed char) min((34359738367ULL), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)1)))));
                            var_35 = (i_13 % 2 == 0) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_13] [i_17 + 1] [i_17 - 1] [i_13] [i_17 - 1] [i_17 - 1])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_13] [i_17 - 1] [i_17 + 1] [i_13] [i_17 + 1] [i_17 - 1])) >> (((var_0) - (1423958673U)))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_13] [i_17 + 1] [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_17]))) : (var_1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_13] [i_17 + 1] [i_17 - 1] [i_13] [i_17 - 1] [i_17 - 1])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_43 [i_13] [i_17 - 1] [i_17 + 1] [i_13] [i_17 + 1] [i_17 - 1])) + (2147483647))) >> (((var_0) - (1423958673U)))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_13] [i_17 + 1] [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_17]))) : (var_1)))));
                        }
                        for (short i_18 = 1; i_18 < 15; i_18 += 4) /* same iter space */
                        {
                            var_36 = ((/* implicit */int) arr_48 [i_13] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18] [i_18]);
                            arr_54 [i_11] [i_11] [(short)13] [(unsigned short)1] [i_18] [i_12] [i_13] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)59059)))))))));
                        }
                        for (short i_19 = 1; i_19 < 15; i_19 += 4) /* same iter space */
                        {
                            var_37 = ((/* implicit */signed char) max((var_37), (((signed char) min((arr_33 [i_19 - 1]), (arr_55 [i_19 - 1] [i_19 + 1] [i_19 - 1] [i_19 - 1] [i_19 - 1]))))));
                            var_38 = ((/* implicit */_Bool) ((var_13) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)5147)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (min((arr_41 [i_19] [i_19] [i_19] [i_19 + 1] [i_19] [i_19] [i_19]), (((/* implicit */long long int) var_0))))));
                            var_39 = ((/* implicit */unsigned char) var_13);
                        }
                        var_40 = ((/* implicit */int) ((long long int) (+(arr_46 [i_14] [i_13] [i_11]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 16; i_20 += 4) 
        {
            for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 4) 
            {
                {
                    var_41 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_20] [i_20] [i_21] [i_21])) << (((((/* implicit */int) (short)-6329)) + (6329)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-18))))))));
                    var_42 -= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_48 [i_21] [i_11] [i_11] [i_11] [i_11] [i_11])) && (((/* implicit */_Bool) arr_38 [i_11] [i_20] [i_11] [(_Bool)1])))));
                    arr_62 [i_21] [i_21] [i_21] = ((_Bool) (signed char)29);
                    var_43 -= ((/* implicit */short) min((((/* implicit */unsigned short) min((((/* implicit */unsigned char) arr_47 [i_11])), (arr_37 [i_21] [i_21] [i_21] [i_21])))), (((unsigned short) var_8))));
                    var_44 = ((/* implicit */unsigned short) (unsigned char)63);
                }
            } 
        } 
    }
}
