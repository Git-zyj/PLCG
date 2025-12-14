/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74859
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
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? ((-(((((/* implicit */_Bool) var_12)) ? (0) : (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) var_11)))))));
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((_Bool) (signed char)-21)))));
    var_21 += ((/* implicit */unsigned long long int) (unsigned short)45713);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (unsigned short)61045))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            arr_5 [i_0] [(unsigned short)6] [(unsigned short)6] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [5U])) : (0)))))));
            arr_6 [(unsigned short)2] |= ((/* implicit */_Bool) arr_4 [i_0] [i_1]);
        }
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)24))));
                    var_24 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_2] [i_3])) == (((/* implicit */int) var_11))))), (arr_3 [i_0] [6ULL])));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_8 [i_0] [i_0] [i_0]))));
                    arr_11 [i_0] [i_2] [i_3] |= ((/* implicit */unsigned short) (-(10)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_27 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) 2958560367U)) ? (((/* implicit */int) (signed char)4)) : (var_15)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            var_28 = (~(((/* implicit */int) (_Bool)1)));
            /* LoopNest 2 */
            for (unsigned short i_6 = 2; i_6 < 15; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    {
                        var_29 += ((/* implicit */long long int) arr_17 [i_4] [i_5] [i_5]);
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (!(((/* implicit */_Bool) -1718951154)))))));
                        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((arr_20 [i_6] [(unsigned short)6] [i_6] [i_6 - 2]) << ((((-(((/* implicit */int) var_5)))) + (19640))))))));
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) -263993307)) ? (((((/* implicit */_Bool) 5486181009833405533LL)) ? (((/* implicit */int) (_Bool)1)) : (arr_17 [i_4] [i_5] [i_4]))) : (((/* implicit */int) arr_18 [i_6 - 1] [i_6] [i_6])))))));
                    }
                } 
            } 
        }
        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [6ULL] [i_4] [i_4] [i_4])) ? (arr_15 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_4] [i_4])))));
    }
    /* LoopNest 2 */
    for (unsigned int i_8 = 1; i_8 < 24; i_8 += 4) 
    {
        for (unsigned long long int i_9 = 2; i_9 < 23; i_9 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                    {
                        arr_29 [i_8] [i_9] [i_10] [i_8 + 1] |= (+(arr_28 [i_8] [i_9] [i_10] [i_9 + 1] [i_8] [(signed char)20]));
                        var_34 &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (arr_24 [i_8] [i_8] [i_11]) : (arr_28 [i_8] [i_8] [i_10] [i_8] [i_8 + 1] [i_8])))));
                        var_35 += ((((/* implicit */_Bool) arr_24 [i_9 + 1] [i_8] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_24 [i_9 + 1] [i_9] [i_10]));
                    }
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
                    {
                        var_36 += ((/* implicit */signed char) ((int) (signed char)39));
                        var_37 &= ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) 24576U))));
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4011647653U)) ? (283319658U) : (((/* implicit */unsigned int) 350796697))))) ? (((((/* implicit */_Bool) arr_31 [i_8] [i_8] [i_8])) ? (arr_26 [i_8] [23U] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (arr_25 [i_9] [i_10]) : (((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_21 [i_8])) : (((/* implicit */int) (signed char)40))))) ? (((/* implicit */int) arr_31 [i_8 + 1] [i_8 + 1] [i_8])) : (((/* implicit */int) (unsigned short)21880))))))))));
                        var_39 &= ((/* implicit */long long int) var_5);
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (signed char)-40)) ? (arr_23 [i_8] [i_8]) : (var_14))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_31 [i_8] [i_8] [i_8])) ? (-263993307) : (((/* implicit */int) arr_33 [i_8] [i_10] [i_13]))))))))))));
                        var_41 &= ((/* implicit */signed char) 169399754);
                        var_42 ^= min((((/* implicit */unsigned int) min((arr_33 [i_8] [i_9 + 2] [i_8]), (arr_33 [i_8 - 1] [i_8 + 1] [i_8 - 1])))), (((((/* implicit */_Bool) 4224546194U)) ? (2964616265U) : (max((((/* implicit */unsigned int) arr_25 [10U] [i_13])), (2474459342U))))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_15 = 0; i_15 < 25; i_15 += 1) 
                        {
                            var_43 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_37 [i_10] [6ULL] [i_10] [i_9] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18180))) : (4436151991588192169LL))))))));
                            var_44 += ((/* implicit */unsigned int) arr_40 [i_8] [i_8] [i_8] [i_10]);
                            var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_40 [i_10] [i_8] [i_8 + 1] [i_10])) == (((/* implicit */int) arr_33 [i_15] [i_9] [i_8 + 1])))) ? (((/* implicit */int) arr_33 [i_8 + 1] [i_8 + 1] [i_8 + 1])) : (((/* implicit */int) ((((/* implicit */int) arr_40 [i_10] [i_9] [i_9] [i_10])) >= (((/* implicit */int) arr_40 [i_10] [i_8 + 1] [i_10] [i_10]))))))))));
                            arr_41 [i_15] [i_10] [i_9] [i_10] [i_8] |= (-(min((min((arr_32 [i_8] [i_9]), (((/* implicit */unsigned long long int) var_0)))), (((unsigned long long int) (_Bool)1)))));
                        }
                        var_46 = ((/* implicit */unsigned int) min((var_46), ((+(arr_37 [i_8] [i_8] [i_8 + 1] [i_10] [i_10])))));
                        var_47 *= ((/* implicit */_Bool) (+(((arr_28 [i_14] [i_8] [i_10] [i_10] [(_Bool)0] [i_8]) % (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                        var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) ((max((184680623336011391LL), (((/* implicit */long long int) -1327556460)))) > (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))))));
                        arr_42 [i_8] [i_9] [i_9] [i_10] &= ((/* implicit */long long int) ((((/* implicit */_Bool) -4095019652756390241LL)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_8] [i_9] [i_10]))))) ? (((((/* implicit */_Bool) -4095019652756390241LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [11U] [i_10] [i_14]))) : (arr_28 [i_10] [i_10] [i_10] [24U] [i_10] [i_10]))) : (((3706085746U) << (((/* implicit */int) (_Bool)0)))))) : (var_0)));
                    }
                    var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) max((((((_Bool) var_0)) ? (arr_26 [i_8 + 1] [i_8 - 1] [i_8 + 1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)38363))))))), ((+(7746538187543766439ULL))))))));
                }
                var_50 += ((/* implicit */_Bool) arr_21 [i_8]);
                /* LoopSeq 2 */
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    var_51 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (+(((unsigned long long int) arr_24 [5U] [5U] [(signed char)15])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_17 = 4; i_17 < 24; i_17 += 3) 
                    {
                        var_52 *= ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_33 [i_8] [(unsigned short)12] [i_16])))) <= (((/* implicit */int) arr_44 [i_9] [i_17]))));
                        var_53 += ((/* implicit */_Bool) ((unsigned int) var_13));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_49 [16U] &= ((/* implicit */unsigned short) ((unsigned long long int) arr_40 [i_8] [i_8] [2ULL] [14LL]));
                        var_54 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_48 [i_8] [i_18])) >> ((-(-1)))));
                    }
                }
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) /* same iter space */
                {
                    var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_10) ? (((/* implicit */long long int) arr_25 [i_8] [i_9])) : (-4436151991588192170LL)))))))));
                    var_56 += ((/* implicit */long long int) ((((((/* implicit */_Bool) -4436151991588192170LL)) && (((/* implicit */_Bool) 184680623336011391LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((unsigned short) var_1)))));
                }
            }
        } 
    } 
}
