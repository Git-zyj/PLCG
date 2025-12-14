/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7933
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) (+((~(((2014477266) + (-2014477266)))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) -2014477267);
                        var_18 -= ((/* implicit */short) max((min(((-(((/* implicit */int) var_5)))), (var_3))), (min((((var_2) ? (((/* implicit */int) arr_10 [i_0] [(unsigned short)6] [(unsigned short)6] [1ULL] [i_0])) : (2014477270))), (((-765438654) + (((/* implicit */int) var_5))))))));
                    }
                } 
            } 
            arr_12 [i_0] [i_1] = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1]);
        }
        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) ((max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) min((((/* implicit */signed char) var_12)), (arr_0 [i_4])))))) + (((((/* implicit */_Bool) (~(8252919436254182856ULL)))) ? (((/* implicit */int) arr_1 [i_4])) : ((+(2014477270)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
            {
                arr_17 [i_0] [(unsigned char)6] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_4] [i_5])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_16 [i_5] [i_0]))));
                var_20 += ((/* implicit */signed char) ((((/* implicit */long long int) 2014477270)) < ((-9223372036854775807LL - 1LL))));
                arr_18 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((int) arr_8 [i_0] [i_4]));
            }
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
            {
                arr_22 [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_4] [i_4] [i_6])) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_0] [i_6] [i_6])), (var_14)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_6] [i_6])) ? (((/* implicit */int) arr_6 [i_6] [i_4] [(unsigned short)2] [i_6])) : (((/* implicit */int) var_9))))) : (1135112584930848790LL))) : (((/* implicit */long long int) max((min((((/* implicit */int) arr_3 [i_6] [i_6])), (1171723852))), (((/* implicit */int) var_2)))))));
                var_21 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) var_3))), ((~(((/* implicit */int) arr_4 [i_0] [i_6] [i_6]))))));
                var_22 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-1)), (-1135112584930848791LL)));
            }
        }
        for (signed char i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
        {
            arr_27 [i_7] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) -1135112584930848791LL)))));
            var_23 = ((/* implicit */unsigned short) arr_25 [i_0]);
        }
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) max((((/* implicit */long long int) (((+(((/* implicit */int) var_7)))) + (((/* implicit */int) max((arr_7 [(_Bool)1] [8] [i_0]), (((/* implicit */unsigned short) (signed char)-1)))))))), ((~(max((-1135112584930848791LL), (arr_25 [i_0]))))))))));
        var_25 = ((/* implicit */signed char) (+(-2014477270)));
    }
    for (short i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_30 [i_8] [i_9] [i_9])) : (((/* implicit */int) arr_30 [i_8] [i_8] [i_8]))))));
            var_27 = ((int) 1135112584930848801LL);
            /* LoopNest 3 */
            for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                for (short i_11 = 3; i_11 < 11; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */short) (((((!(((/* implicit */_Bool) (short)-26)))) ? (2014477270) : (((/* implicit */int) (unsigned short)82)))) + (((((/* implicit */_Bool) arr_39 [i_11] [i_11 - 3] [i_11 - 3] [i_12])) ? (((/* implicit */int) (short)-22132)) : (((/* implicit */int) arr_39 [i_11] [i_11 - 3] [i_11 - 3] [4ULL]))))));
                            arr_40 [(signed char)11] [i_9] [i_11] [i_9] [(short)5] = max((((/* implicit */short) (!(((/* implicit */_Bool) max((arr_39 [i_11] [i_9] [i_10] [i_11]), (((/* implicit */unsigned short) var_5)))))))), (((short) (short)-17562)));
                            var_29 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) (short)2)) - (((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_33 [(unsigned char)1] [i_9] [i_9])) : (((/* implicit */int) var_9)))), (((/* implicit */int) (_Bool)1))));
                            var_30 += ((/* implicit */_Bool) var_7);
                            var_31 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) arr_32 [i_9] [i_9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)15), (((/* implicit */unsigned short) var_5)))))) : (arr_36 [i_8] [i_8] [i_8] [(unsigned short)4])))) >= (max((1135112584930848790LL), (((/* implicit */long long int) arr_35 [i_12]))))));
                        }
                    } 
                } 
            } 
            arr_41 [i_8] [i_8] |= ((/* implicit */long long int) min((arr_29 [i_9]), (((_Bool) -1135112584930848791LL))));
        }
        for (short i_13 = 0; i_13 < 15; i_13 += 4) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(var_12))))) & (max((var_8), (((/* implicit */long long int) arr_36 [i_13] [i_13] [i_8] [i_8]))))));
            /* LoopNest 3 */
            for (signed char i_14 = 4; i_14 < 12; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 4; i_15 < 14; i_15 += 1) 
                {
                    for (short i_16 = 4; i_16 < 12; i_16 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((short) ((signed char) arr_45 [i_8] [i_8] [i_8] [i_8])));
                            var_34 = ((/* implicit */short) ((unsigned char) var_1));
                        }
                    } 
                } 
            } 
        }
        arr_52 [i_8] = ((/* implicit */signed char) arr_49 [1] [1] [i_8] [(_Bool)0]);
        var_35 = ((/* implicit */unsigned char) var_7);
    }
    for (short i_17 = 0; i_17 < 24; i_17 += 2) 
    {
        var_36 -= ((/* implicit */_Bool) (short)32704);
        /* LoopSeq 1 */
        for (unsigned short i_18 = 0; i_18 < 24; i_18 += 2) 
        {
            arr_59 [i_18] = ((/* implicit */unsigned char) var_0);
            /* LoopNest 2 */
            for (unsigned short i_19 = 2; i_19 < 21; i_19 += 2) 
            {
                for (short i_20 = 0; i_20 < 24; i_20 += 4) 
                {
                    {
                        var_37 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) ((((/* implicit */int) arr_54 [i_17] [i_17])) < (((/* implicit */int) var_13))))))), (((/* implicit */int) var_10))));
                        var_38 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_56 [i_17])) - ((-(((/* implicit */int) var_5))))))));
                        arr_66 [i_19 + 2] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_56 [i_19 + 3])) + (((/* implicit */int) arr_54 [i_19 + 1] [i_19 + 2]))))) ? (((((/* implicit */int) (signed char)24)) & (((/* implicit */int) arr_54 [i_19 + 2] [i_19 - 1])))) : (((((/* implicit */int) (short)-11560)) + (((/* implicit */int) (unsigned short)1546))))));
                        arr_67 [i_18] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_61 [i_19 - 1] [i_19 + 3] [i_19 - 2] [i_19 + 1])))) + (((/* implicit */int) (!(max((arr_55 [i_17] [i_17]), ((_Bool)0))))))));
                    }
                } 
            } 
            arr_68 [i_18] = ((/* implicit */signed char) arr_63 [i_17] [i_17] [i_17] [i_18] [(signed char)19] [(signed char)19]);
            var_39 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (unsigned char)255)), (((1135112584930848793LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-22132))))))) < (((/* implicit */long long int) ((/* implicit */int) max((arr_63 [i_17] [i_17] [(_Bool)0] [(short)19] [i_18] [i_18]), (var_13)))))));
            arr_69 [i_17] [6] = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_1)), (((((((/* implicit */int) (short)-7594)) < (((/* implicit */int) arr_57 [i_18])))) ? (-1135112584930848791LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1171723852)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)2891)))))))));
        }
        arr_70 [i_17] [i_17] = ((/* implicit */signed char) ((_Bool) (_Bool)0));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_21 = 1; i_21 < 21; i_21 += 1) /* same iter space */
    {
        arr_74 [i_21] = ((/* implicit */unsigned short) var_7);
        var_40 -= max((((-1135112584930848790LL) + (min((-1135112584930848790LL), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */long long int) max((arr_62 [i_21 + 1] [i_21 + 3]), (((/* implicit */signed char) ((((/* implicit */int) var_7)) < (((/* implicit */int) arr_53 [i_21])))))))));
    }
    for (unsigned long long int i_22 = 1; i_22 < 21; i_22 += 1) /* same iter space */
    {
        arr_77 [(short)4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_57 [(unsigned char)20]))))) ? (((((/* implicit */_Bool) arr_71 [i_22])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_0))))), (((((/* implicit */long long int) ((/* implicit */int) var_13))) - (((-1135112584930848799LL) & (((/* implicit */long long int) arr_72 [(short)14]))))))));
        arr_78 [i_22] [i_22] = ((/* implicit */unsigned long long int) ((max((max((var_2), ((_Bool)1))), (arr_75 [i_22] [i_22 + 3]))) ? (-1135112584930848794LL) : (((/* implicit */long long int) ((/* implicit */int) max((arr_76 [i_22 + 3]), (arr_76 [i_22 + 3])))))));
        arr_79 [i_22] [i_22 + 2] = (+(arr_60 [i_22] [i_22] [i_22 + 1] [i_22 + 1]));
        arr_80 [i_22 + 3] = ((/* implicit */signed char) (-(((/* implicit */int) arr_56 [i_22]))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_23 = 0; i_23 < 16; i_23 += 2) 
    {
        for (int i_24 = 0; i_24 < 16; i_24 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_25 = 0; i_25 < 16; i_25 += 2) 
                {
                    var_41 = ((/* implicit */short) max((((((/* implicit */int) arr_85 [i_24] [i_24])) < (((/* implicit */int) arr_85 [i_24] [i_24])))), (((arr_85 [i_24] [i_25]) || (((/* implicit */_Bool) (short)2032))))));
                    var_42 = ((/* implicit */signed char) (+(((/* implicit */int) arr_85 [i_24] [i_24]))));
                    var_43 = ((/* implicit */signed char) var_9);
                }
                /* LoopNest 2 */
                for (signed char i_26 = 3; i_26 < 15; i_26 += 2) 
                {
                    for (int i_27 = 0; i_27 < 16; i_27 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_84 [i_24])), (max((min((((/* implicit */unsigned int) var_5)), (2630244422U))), (((/* implicit */unsigned int) (_Bool)1))))));
                            arr_92 [i_24] = ((/* implicit */_Bool) ((((/* implicit */int) arr_55 [i_24] [i_24])) + (((/* implicit */int) ((((((/* implicit */int) arr_65 [i_23] [i_24] [i_26])) + (((/* implicit */int) arr_84 [i_24])))) < (((((/* implicit */_Bool) arr_54 [i_24] [i_26 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))))));
                        }
                    } 
                } 
                var_45 = ((/* implicit */long long int) (-(((/* implicit */int) arr_62 [i_24] [i_23]))));
                var_46 = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
            }
        } 
    } 
    var_47 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min(((short)-1), (var_6)))))))));
}
