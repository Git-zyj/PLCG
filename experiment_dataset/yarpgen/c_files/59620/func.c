/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59620
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
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) var_3)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_7)))) ? ((-(((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 3])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2]))) != (var_7))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) var_0);
                                var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */long long int) var_9)) : (arr_6 [i_0] [i_1] [i_2])))) ? (max((var_5), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) var_9))))) ? ((~(var_4))) : ((-(((/* implicit */int) max(((signed char)-115), (((/* implicit */signed char) (_Bool)0)))))))));
                                arr_12 [i_2] = ((unsigned int) var_2);
                                var_19 ^= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_9 [i_2]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) var_1);
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -927523601)) ? (964939919369555007ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 2])))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_0 + 2])))))));
                    var_22 &= ((/* implicit */int) max((((/* implicit */unsigned long long int) max(((+(arr_8 [i_0]))), (min((((/* implicit */long long int) arr_3 [i_0] [i_1])), (var_1)))))), ((-(((((/* implicit */_Bool) 2473122490U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35))) : (18010000462970880ULL)))))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_3))));
                }
            } 
        } 
        arr_13 [i_0] [i_0] = var_8;
        /* LoopSeq 4 */
        for (long long int i_5 = 4; i_5 < 10; i_5 += 3) 
        {
            var_24 += ((/* implicit */unsigned long long int) ((signed char) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) arr_6 [i_0 + 3] [i_0] [i_5])) ? (arr_5 [i_5] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((unsigned int) var_3))))));
            var_25 = var_2;
        }
        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 3) /* same iter space */
        {
            arr_19 [i_6] = ((/* implicit */unsigned int) var_13);
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (var_1) : (arr_5 [i_6] [i_6 + 1]))));
                        arr_26 [i_8] |= ((/* implicit */unsigned char) (+(var_9)));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            var_27 = (+(((unsigned long long int) var_2)));
                            var_28 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) var_2))) <= (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_7)))))), (var_9)));
                            arr_29 [i_8] [i_8] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)5293)) : (((/* implicit */int) (unsigned char)7))));
                        }
                        var_29 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (~(var_2)))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_12))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 3) /* same iter space */
        {
            arr_33 [i_10] = ((/* implicit */_Bool) ((unsigned int) var_1));
            /* LoopSeq 2 */
            for (signed char i_11 = 3; i_11 < 11; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28068)) ? (11251631663408839293ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_11] [i_11 - 2] [i_10 + 3] [i_0 + 2]))))))));
                    arr_39 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_35 [i_0] [i_10 + 1] [i_10]))))))) && (((((((var_8) + (9223372036854775807LL))) << (((var_15) - (3366360027263042360LL))))) == (var_0)))));
                    var_31 = ((/* implicit */_Bool) max(((-(var_13))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))))));
                    var_32 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32623))) : (1755707644U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (max((((/* implicit */unsigned long long int) var_4)), (var_7)))));
                }
                /* LoopSeq 1 */
                for (short i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_12)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (var_2))))));
                    arr_43 [i_0 + 3] [i_0 + 3] [i_11] [i_0] [i_0] [i_10] = ((/* implicit */signed char) (+(var_9)));
                }
            }
            for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_15 = 0; i_15 < 12; i_15 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        arr_52 [i_0] [i_0] [i_14] [i_15] [i_10] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_10 - 1])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_10 + 2] [7LL] [i_15] [i_16])) : (((/* implicit */int) arr_38 [i_10] [i_10 + 3] [i_10 + 3] [i_10] [i_10 - 1] [i_10 - 1]))))));
                        var_34 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_15 [i_0 + 1])) : (((/* implicit */int) var_14))))));
                        arr_53 [i_0 - 2] [i_10] [i_14] [i_15] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_20 [i_0] [i_10 + 2]) : (((/* implicit */int) arr_0 [i_10 + 2] [i_0 + 3]))));
                    }
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        var_35 = ((((/* implicit */_Bool) ((unsigned char) 391715008))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(131071LL)))) >= (0ULL))))) : (var_8));
                        var_36 = ((/* implicit */unsigned char) (!((_Bool)1)));
                        var_37 -= var_15;
                    }
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) var_11))));
                    /* LoopSeq 1 */
                    for (long long int i_18 = 4; i_18 < 9; i_18 += 1) 
                    {
                        var_39 = var_7;
                        var_40 = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_11)))));
                        var_41 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (2029110181150419215ULL))) > (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) var_8))))))));
                    }
                    arr_59 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) (+((~((+(var_0)))))));
                }
                var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (var_2)))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_9 [(signed char)9]))))) : ((~(((/* implicit */int) var_10)))))))));
                arr_60 [i_0 - 1] [i_10] [i_14] = ((/* implicit */_Bool) arr_41 [i_0]);
                arr_61 [i_0] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_5)))) ? ((+(var_8))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))) ? (((((/* implicit */_Bool) arr_50 [i_10 + 1] [i_10] [i_14] [i_14] [i_10] [i_10 + 2] [i_14])) ? (((/* implicit */int) ((unsigned char) var_14))) : ((-(var_9))))) : ((~(938158102)))));
                arr_62 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_13) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) var_15)) ? (var_13) : (var_15)))))));
            }
        }
        for (unsigned long long int i_19 = 1; i_19 < 11; i_19 += 3) 
        {
            var_43 |= var_7;
            var_44 = ((/* implicit */unsigned short) var_5);
            /* LoopSeq 1 */
            for (long long int i_20 = 0; i_20 < 12; i_20 += 4) 
            {
                var_45 = ((/* implicit */long long int) (!((_Bool)1)));
                arr_67 [i_0] [i_0] [i_19] = (~(((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))));
                arr_68 [i_19] [i_20] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
                var_46 -= ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((unsigned char) (signed char)-37))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 3903928783277731853LL)))) : (6917310091662855514LL)))));
                /* LoopSeq 3 */
                for (unsigned char i_21 = 0; i_21 < 12; i_21 += 2) 
                {
                    arr_73 [i_0 + 3] [i_19] = var_3;
                    var_47 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) arr_55 [i_0 + 2] [i_0 + 2] [i_19] [i_19 - 1] [i_19 - 1])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_34 [i_0] [i_0] [i_20] [i_0])) : (((/* implicit */int) var_14)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) != (((/* implicit */int) (short)16444))))))) : (var_9)));
                    arr_74 [i_0 - 2] [1ULL] [1ULL] [i_19] = ((/* implicit */long long int) (~((-(((/* implicit */int) var_11))))));
                }
                for (long long int i_22 = 2; i_22 < 11; i_22 += 1) 
                {
                    arr_78 [i_19] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_38 [i_19] [i_19] [i_19 - 1] [i_22] [i_22] [i_22])) ? (var_4) : (var_4))) > (((/* implicit */int) max((((/* implicit */signed char) var_10)), (arr_38 [i_0] [i_19 + 1] [i_19 - 1] [i_22] [i_22] [i_22]))))));
                    arr_79 [i_22] [i_19] [i_19] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (var_15) : (((/* implicit */long long int) (-(((/* implicit */int) var_14))))))));
                    var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) (-((-(((/* implicit */int) arr_15 [i_22])))))))));
                }
                for (long long int i_23 = 1; i_23 < 11; i_23 += 2) 
                {
                    arr_83 [i_20] [(signed char)6] [i_19 + 1] [i_20] &= (~(((unsigned long long int) var_8)));
                    var_49 ^= ((/* implicit */int) var_3);
                    arr_84 [i_0] [i_19] = ((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) var_10)))));
                }
            }
        }
    }
    for (long long int i_24 = 0; i_24 < 20; i_24 += 4) 
    {
        arr_87 [i_24] [i_24] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((unsigned char) arr_86 [i_24]))) ? (((var_10) ? (var_5) : (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))));
        arr_88 [i_24] = ((/* implicit */long long int) (-(10392770299100094176ULL)));
    }
}
