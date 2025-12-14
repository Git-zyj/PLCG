/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65430
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [24U] [24U] &= ((/* implicit */short) min((((/* implicit */int) ((short) ((1073741760) == (262080))))), (((((((arr_1 [6U]) + (arr_1 [(short)2]))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(short)2])) || (((/* implicit */_Bool) 1966076434)))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) ((short) (short)-25290));
            var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)255)), (arr_0 [i_0])))) ? (min((4044950726U), (((/* implicit */unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) (-(1966076434)))))) >> (((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) - (24456)))));
            arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((+(arr_3 [i_0] [i_0]))) - (arr_3 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), (134201344)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])) : (arr_5 [i_0] [i_0] [i_0]))) : (max((arr_3 [i_0] [i_0]), (((/* implicit */int) arr_0 [i_1]))))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-10509)) + (2147483647))) << (((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))) & (67108863U)))))));
            arr_7 [i_1] [i_0] [i_0] |= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))) ? (((2435630051U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-28572))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)63)))))));
        }
        arr_8 [i_0] = ((/* implicit */_Bool) ((min((((/* implicit */int) (unsigned char)255)), (arr_3 [i_0] [i_0]))) % (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
    }
    for (short i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
        {
            arr_13 [14U] [i_3] [i_3] &= ((max((((/* implicit */int) arr_4 [i_2 + 4] [i_2 + 4] [i_2 + 3])), (arr_12 [i_2 - 1]))) >> (((((3078899342U) % (((/* implicit */unsigned int) 1479582877)))) - (119733581U))));
            var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) arr_11 [i_3] [i_3])))) * (((/* implicit */int) ((short) arr_11 [i_3] [i_3])))));
            arr_14 [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_2] [i_3])) ? (arr_3 [i_2] [i_3]) : (arr_3 [i_2] [i_3]))) == (((((/* implicit */int) arr_4 [i_2 + 1] [i_2] [i_2 + 3])) - (arr_3 [i_3] [i_3])))));
            var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_3 [i_2 + 4] [i_3])) ? (((/* implicit */int) (unsigned char)105)) : (arr_3 [i_2 + 3] [i_3])))));
            arr_15 [i_3] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned int) min((max((arr_3 [i_2 + 4] [i_3]), (arr_3 [i_2] [i_3]))), ((-(((/* implicit */int) (short)32767))))))), (((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2 + 3] [i_2 + 3] [i_3])) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) arr_11 [i_3] [i_3]))))) : (min((982539522U), (((/* implicit */unsigned int) arr_9 [i_2] [i_3]))))))));
        }
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
        {
            arr_18 [i_4] [i_2 - 1] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_0 [i_2 - 1])) < (((/* implicit */int) arr_0 [i_2 + 3])))), (((((/* implicit */int) arr_0 [i_2 + 1])) >= (((/* implicit */int) arr_0 [i_2 + 3]))))));
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (signed char)-94))));
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) (short)-7339)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_2 - 1] [(unsigned char)6]), (((/* implicit */int) arr_9 [i_2] [i_4]))))) ? (min((arr_3 [i_2] [24U]), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) arr_16 [i_2 + 3])) >= (arr_17 [i_2] [i_2] [i_2]))))))))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_7 = 2; i_7 < 14; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20163)) ? ((+(((/* implicit */int) arr_11 [14] [14])))) : (((/* implicit */int) (_Bool)1))))) ? ((+(max((134201344), (((/* implicit */int) arr_21 [i_4] [i_4] [i_5] [i_6])))))) : (((arr_5 [i_6] [i_7 + 2] [(short)8]) & (arr_5 [i_5] [i_7 + 1] [(_Bool)1]))))))));
                            var_27 = ((/* implicit */unsigned char) 3078899342U);
                        }
                        for (int i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned int) max((min((arr_22 [i_5] [i_8] [i_5] [i_8] [i_2 + 4]), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6]))) < (1250390304U)))))), ((+(((int) arr_9 [i_6] [i_2]))))));
                            arr_28 [i_2] [4U] [i_5] [i_6] = ((/* implicit */_Bool) (short)20745);
                            arr_29 [i_5] [i_5] [i_5] [i_6] [i_8] = ((/* implicit */short) ((unsigned char) min((((/* implicit */int) ((short) arr_17 [(short)2] [i_4] [i_2]))), (((((/* implicit */_Bool) arr_17 [i_8] [i_6] [i_5])) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (_Bool)0)))))));
                            arr_30 [i_2] [i_5] [i_5] [i_2] [i_2] [i_8] = ((/* implicit */short) ((max((((/* implicit */int) arr_9 [i_2 + 3] [i_2 - 1])), (arr_23 [i_2 - 1] [i_4] [i_5] [i_6] [i_8] [i_8]))) % (((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2] [i_2 + 1] [i_2 + 3] [i_2 + 1])) ? (arr_23 [i_2] [i_4] [i_5] [(signed char)10] [i_4] [i_8]) : (((/* implicit */int) (unsigned char)177))))));
                        }
                        for (signed char i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            arr_35 [i_9] [(unsigned char)0] [i_5] [i_5] [i_9] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3078899342U)) ? (arr_34 [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */int) (short)38))))) ^ (((((/* implicit */_Bool) arr_1 [i_5])) ? (arr_19 [i_9]) : (((/* implicit */unsigned int) -523915485)))))), (((/* implicit */unsigned int) min((arr_32 [i_2 + 1] [i_4] [i_5] [i_2 + 1] [i_9] [i_5] [i_5]), (arr_32 [i_5] [i_4] [i_5] [i_2 + 1] [i_4] [i_2 + 2] [i_2 + 4]))))));
                            var_29 |= ((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)22)), (arr_5 [(_Bool)1] [i_2 + 4] [(_Bool)1])))) != (arr_33 [i_6] [i_2 + 4] [i_2 + 3] [i_2 + 3] [i_2 + 4])));
                        }
                        var_30 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_5])) ? (((/* implicit */unsigned int) arr_12 [i_4])) : (arr_33 [i_2] [i_4] [i_4] [i_4] [i_6])))))) ? ((+(arr_12 [i_5]))) : (((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (((((/* implicit */int) (short)31458)) >> (((((/* implicit */int) (short)-64)) + (67))))) : (max((arr_34 [i_2] [i_2] [i_5] [i_2] [i_6]), (((/* implicit */int) arr_25 [i_2]))))))));
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5] [i_4] [i_5] [i_4] [i_6])) ? (((/* implicit */int) (short)24471)) : ((-(min((arr_1 [i_5]), (((/* implicit */int) (short)28572))))))));
                    }
                } 
            } 
        }
        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
        {
            arr_39 [i_10] [i_10] = (-(((((/* implicit */int) ((short) (short)-29186))) % (((((/* implicit */_Bool) arr_1 [i_10])) ? (((/* implicit */int) arr_31 [i_2] [i_2 + 3] [i_2 + 3] [i_2] [i_2] [i_10] [i_10])) : (((/* implicit */int) (short)20733)))))));
            /* LoopNest 3 */
            for (short i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */short) arr_42 [i_2 + 1] [i_10]);
                            arr_46 [i_13] [i_10] [i_10] [i_10] [i_2 + 3] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_19 [i_2 + 2])) ? (arr_19 [i_2 + 3]) : (arr_19 [i_2 + 1]))));
                            var_33 = -2041245850;
                        }
                    } 
                } 
            } 
            arr_47 [i_10] = ((/* implicit */short) arr_4 [i_2] [i_2] [i_2]);
        }
        arr_48 [i_2] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)13202)))))));
        arr_49 [(short)9] = (short)13202;
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 16; i_14 += 1) 
        {
            for (unsigned int i_15 = 0; i_15 < 16; i_15 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_16 = 1; i_16 < 15; i_16 += 2) 
                    {
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_37 [1] [i_2 + 2] [i_16 - 1]))))) ? ((-(arr_53 [i_14] [i_14] [i_14]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_16 - 1] [i_14] [i_2 + 2]))))))));
                        var_35 += ((/* implicit */int) ((((/* implicit */int) arr_51 [i_2 + 3] [i_2 - 1] [i_16 + 1])) >= (((((/* implicit */int) arr_51 [i_2] [i_2 - 1] [i_16 + 1])) / (((/* implicit */int) arr_51 [i_2] [i_2 - 1] [i_16 + 1]))))));
                        var_36 += ((max((arr_32 [i_2 + 1] [i_2 + 4] [i_15] [i_2 + 1] [i_16 + 1] [i_16 - 1] [i_16 + 1]), (arr_32 [i_2 - 1] [i_2 + 1] [i_15] [i_2 - 1] [i_16 + 1] [i_16 - 1] [i_16 - 1]))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_52 [i_2 + 1])) ? (arr_54 [i_16] [i_16] [i_16] [i_16 + 1] [i_16] [i_16]) : (arr_42 [i_2 + 3] [i_2 + 3]))))) : (((/* implicit */int) arr_25 [14U])));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 0; i_17 < 16; i_17 += 3) 
                    {
                        for (short i_18 = 0; i_18 < 16; i_18 += 1) 
                        {
                            {
                                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (short)5040)), (arr_54 [i_17] [i_17] [i_17] [i_2 + 4] [i_18] [i_14])))) || (((/* implicit */_Bool) max((((/* implicit */int) (short)-1933)), (arr_54 [i_2] [i_14] [i_15] [i_2 + 4] [i_18] [i_18])))))))));
                                var_38 = ((/* implicit */int) ((unsigned char) ((short) (short)13202)));
                                arr_61 [i_17] [i_14] [i_15] [i_15] [i_15] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31768)) ? (((/* implicit */int) (short)5040)) : (arr_5 [i_2 + 3] [i_14] [i_17])))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (max((arr_57 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_17] [i_17] [i_2 + 1]), (((/* implicit */int) (unsigned char)189)))))) >= (((((/* implicit */int) ((arr_45 [i_18] [i_15] [i_2] [i_2]) > (arr_1 [i_17])))) << (((((((/* implicit */_Bool) arr_27 [i_2] [(_Bool)1] [i_15] [i_14] [i_18] [i_17])) ? (((/* implicit */int) (short)20752)) : (((/* implicit */int) arr_16 [i_17])))) - (20726)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_39 = ((/* implicit */signed char) max((((/* implicit */int) ((((((/* implicit */int) arr_56 [(unsigned char)10] [i_2 + 4])) | (((/* implicit */int) (short)-20752)))) == (((((/* implicit */_Bool) arr_31 [i_2] [i_2 + 4] [i_2] [i_2] [i_2 + 2] [i_2 - 1] [i_2])) ? (((/* implicit */int) (short)2032)) : (((/* implicit */int) arr_44 [i_2]))))))), ((+(((/* implicit */int) arr_25 [i_2 + 4]))))));
    }
    /* vectorizable */
    for (unsigned int i_19 = 0; i_19 < 12; i_19 += 2) 
    {
        var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_19] [i_19] [i_19] [i_19])) * (((/* implicit */int) arr_26 [i_19] [i_19] [i_19] [i_19]))));
        arr_64 [(signed char)8] = ((((/* implicit */int) arr_16 [i_19])) - (((/* implicit */int) arr_16 [i_19])));
        arr_65 [i_19] = ((((/* implicit */_Bool) arr_58 [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */int) (short)5040)) : (((/* implicit */int) arr_58 [i_19] [i_19] [i_19] [i_19])));
        arr_66 [i_19] = ((/* implicit */short) ((arr_27 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]) << (((arr_27 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]) - (814587937)))));
        var_41 = ((/* implicit */short) ((unsigned int) arr_11 [i_19] [i_19]));
    }
    for (int i_20 = 0; i_20 < 20; i_20 += 3) 
    {
        var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((unsigned char) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [(signed char)16]))), ((-(arr_5 [i_20] [i_20] [12U])))))))));
        arr_69 [i_20] = ((/* implicit */unsigned int) min((((max((arr_3 [i_20] [(unsigned char)12]), (arr_67 [i_20] [i_20]))) == (((/* implicit */int) (short)-13180)))), (((arr_3 [i_20] [(unsigned char)2]) >= (arr_3 [i_20] [(short)24])))));
        arr_70 [(short)19] [(short)19] &= ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_20] [i_20] [i_20]))));
    }
    var_43 |= ((/* implicit */signed char) var_0);
    var_44 *= ((/* implicit */signed char) ((unsigned char) (((_Bool)1) ? (max((((/* implicit */unsigned int) var_18)), (3859247152U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (((/* implicit */short) (_Bool)1)))))))));
    var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-64))) : (var_14)));
}
