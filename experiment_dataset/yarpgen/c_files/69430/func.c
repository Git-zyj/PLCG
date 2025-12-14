/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69430
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_8 [(short)2] [(short)2] [i_2] [i_2] = ((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_3])) ? (-1046235899) : (((/* implicit */int) var_12))))))));
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) ((((int) (!(arr_5 [i_0])))) == (((/* implicit */int) (!(((/* implicit */_Bool) max((803544019189575590ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))))))));
                        var_16 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) == (var_3)))), (803544019189575574ULL)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 2; i_5 < 9; i_5 += 2) 
            {
                for (long long int i_6 = 1; i_6 < 7; i_6 += 1) 
                {
                    {
                        arr_18 [i_6] [i_6] [i_5] [i_4] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -659462530)) || (((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (short)8627)) - (8619))))), ((~(((/* implicit */int) (_Bool)1)))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (-((-(803544019189575590ULL))))))));
                            var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [6U]))));
                            var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min(((signed char)-21), (((/* implicit */signed char) var_2))))))) == ((~((-(2305842940494217216LL)))))));
                            var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~((-(arr_10 [i_0])))))), (max((((/* implicit */unsigned long long int) min((-2305842940494217214LL), (((/* implicit */long long int) arr_5 [i_6]))))), (arr_11 [i_0])))));
                        }
                        for (unsigned char i_8 = 3; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            arr_23 [i_0] [i_8] [i_0] [i_4] [i_6] [i_8] = ((((/* implicit */long long int) (~(arr_6 [i_6 + 2] [i_6 + 1] [i_6 - 1] [i_6 + 2])))) / (max((arr_17 [i_6 + 2] [i_6] [i_6 + 3] [i_6 + 1] [i_6 + 4]), (((/* implicit */long long int) arr_2 [i_5 - 2] [i_6 + 4] [i_8 + 1])))));
                            var_21 ^= ((/* implicit */unsigned long long int) (signed char)12);
                            arr_24 [i_4] [i_6] [i_5] [i_4] [i_8] = ((/* implicit */int) max((max((((((/* implicit */_Bool) arr_11 [i_0])) ? (arr_4 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_4] [i_0] [i_5] [i_0] [i_4])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-6468))))))), (((/* implicit */unsigned long long int) var_8))));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 3; i_9 < 10; i_9 += 4) /* same iter space */
                        {
                            arr_27 [i_0] [i_4] [i_0] [i_6] [i_6] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_0] [i_5] [i_0] [i_6 + 2] [i_9] [i_5 - 2] [i_5])) && (((/* implicit */_Bool) arr_21 [i_0] [i_4] [i_6] [i_6 + 4] [i_6] [i_5 + 1] [4U]))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_2 [i_6 + 1] [i_6 + 1] [i_6 + 1]))));
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_10 [(unsigned char)9]))))));
                        }
                    }
                } 
            } 
            arr_28 [i_4] [i_4] = ((/* implicit */unsigned char) ((((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) <= (arr_7 [i_0] [i_0] [i_0] [i_4] [i_0] [i_4]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) max((arr_6 [i_4] [i_4] [i_0] [i_0]), (((/* implicit */unsigned int) (short)-21451))))) : (min((arr_1 [i_4]), (((/* implicit */unsigned long long int) var_2)))))))));
            var_24 = ((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_16 [i_0] [(unsigned char)9] [i_0] [i_4] [i_0])) : (1046235899)))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (3447940289U))))));
        }
        for (short i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            var_25 = ((/* implicit */signed char) min((6199648649606711977ULL), (((/* implicit */unsigned long long int) -5078142114188743113LL))));
            var_26 = ((/* implicit */signed char) arr_4 [i_10] [i_10] [i_0] [i_0]);
            var_27 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) min((((/* implicit */short) var_0)), (arr_22 [i_0] [i_0] [i_10] [i_0] [i_10] [i_0] [i_10])))) : (((/* implicit */int) (!((_Bool)1))))))));
            arr_31 [i_0] [i_10] [i_10] = ((/* implicit */short) arr_14 [i_10]);
            arr_32 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_10])))))) * (((170973059U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_10] [i_0] [i_0] [i_0] [i_0] [i_10]))))))) / (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_7))))))));
        }
        for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
        {
            arr_35 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) max((var_8), (((/* implicit */int) var_2))))) - ((-(arr_33 [i_0])))));
            /* LoopSeq 3 */
            for (int i_12 = 3; i_12 < 10; i_12 += 2) 
            {
                var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (var_3)))), (arr_11 [i_11]))))));
                var_29 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_11] [i_12])) < (((/* implicit */int) (_Bool)1))))) <= (((/* implicit */int) (_Bool)1))));
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)23)) << (((/* implicit */int) ((_Bool) ((arr_4 [i_0] [i_11] [i_12] [i_11]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                var_31 &= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (short)-30195)) ? (((((/* implicit */int) arr_30 [i_0])) - (((/* implicit */int) arr_34 [i_0] [i_0] [i_12])))) : ((-(((/* implicit */int) (short)-7827)))))));
            }
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 2) 
            {
                var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) + (arr_33 [i_13]))))));
                var_33 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (short)-8138)) ? (-1) : (-690498404))));
            }
            for (unsigned short i_14 = 2; i_14 < 9; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 11; i_15 += 2) 
                {
                    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        {
                            arr_50 [i_16] [i_15] [i_0] [i_11] [i_0] = ((/* implicit */short) (((_Bool)1) ? ((~(max((((/* implicit */unsigned long long int) -15)), (arr_46 [i_11]))))) : (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) arr_12 [i_0] [i_14] [i_16])), (arr_39 [i_0] [i_11] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_14))))))))));
                            var_34 = arr_7 [i_0] [i_0] [i_14] [i_15] [i_16] [i_16];
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_17 = 0; i_17 < 11; i_17 += 1) 
                {
                    arr_54 [i_11] [i_11] [i_11] [i_17] [10U] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 2008125102)) || (((/* implicit */_Bool) var_14))))), (-400010242)))), ((-((+(var_3)))))));
                    var_35 ^= ((/* implicit */unsigned long long int) (-(((int) (unsigned char)127))));
                    arr_55 [i_11] = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_14] [i_14] [i_0])) + (((/* implicit */int) arr_22 [i_0] [i_11] [i_11] [i_14] [i_14] [i_14] [i_0])))))))) + ((-(((/* implicit */int) (!(((/* implicit */_Bool) -2008125103))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 3) 
                    {
                        arr_58 [i_0] [i_11] [i_14] [(_Bool)1] [i_14 - 1] = ((/* implicit */signed char) min((-15), ((+((-(arr_56 [i_0] [i_0] [i_0] [(unsigned char)9] [i_0] [i_0] [i_0])))))));
                        var_36 = ((/* implicit */signed char) -4091046952920366687LL);
                        arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) -2));
                    }
                    for (long long int i_19 = 0; i_19 < 11; i_19 += 1) 
                    {
                        arr_63 [i_0] [i_14] [i_19] [i_17] [i_19] [i_0] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_34 [i_0] [i_0] [i_14])) : (((/* implicit */int) var_7))))), (max((arr_15 [i_19]), (4123994237U)))))));
                        var_37 = ((/* implicit */unsigned short) (short)32767);
                    }
                    for (unsigned long long int i_20 = 3; i_20 < 9; i_20 += 3) 
                    {
                        arr_66 [i_17] [i_17] [i_14] [i_14] |= ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) max((var_12), (arr_44 [i_14])))))));
                        arr_67 [i_0] [i_0] [i_0] [i_0] [4ULL] [i_0] [i_20] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_19 [i_0] [i_0])))) == (((/* implicit */int) arr_25 [i_0] [i_11] [i_14] [i_17] [i_14] [i_11] [i_17]))))), (max((min((var_15), (var_11))), (((/* implicit */unsigned long long int) arr_20 [i_20 - 2] [i_20 - 2] [i_14 - 2] [i_17] [i_14] [i_20]))))));
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((-(((/* implicit */int) var_7)))) : (((((((/* implicit */int) (_Bool)1)) + (arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) + (((((/* implicit */_Bool) 1046235899)) ? (0) : (-15))))))))));
                    }
                    /* LoopSeq 2 */
                    for (int i_21 = 0; i_21 < 11; i_21 += 4) /* same iter space */
                    {
                        arr_70 [i_0] [i_11] [i_14] [i_17] [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_29 [i_0]))))))));
                        arr_71 [i_17] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-27))));
                        var_39 -= min((((/* implicit */unsigned int) (signed char)-15)), (1768088703U));
                    }
                    /* vectorizable */
                    for (int i_22 = 0; i_22 < 11; i_22 += 4) /* same iter space */
                    {
                        arr_74 [i_0] [i_0] [i_0] [i_0] [i_22] [i_22] = ((unsigned long long int) (-(var_5)));
                        var_40 = ((/* implicit */unsigned short) min((var_40), (var_12)));
                    }
                }
            }
        }
    }
    var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(1))), (-1)))) ? (((/* implicit */unsigned long long int) var_14)) : (var_11)));
    var_42 = ((/* implicit */short) min((((/* implicit */long long int) -1046235899)), (-1LL)));
    var_43 = ((/* implicit */unsigned char) (_Bool)1);
}
