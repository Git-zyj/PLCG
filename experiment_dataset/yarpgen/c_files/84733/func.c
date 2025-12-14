/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84733
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
    var_11 -= ((/* implicit */_Bool) (+(max((((unsigned int) var_2)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (short)14095)) : (1561713802))))))));
    var_12 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (signed char)-113)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    var_13 = (+(var_0));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 4 */
            for (signed char i_2 = 4; i_2 < 18; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    arr_12 [i_0 - 1] [i_1] [i_2] = ((((/* implicit */_Bool) (signed char)36)) || (((/* implicit */_Bool) arr_8 [i_0 - 2])));
                    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_1]))));
                }
                for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    var_15 *= ((/* implicit */unsigned int) (short)-14095);
                    var_16 = ((/* implicit */short) ((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113)))));
                }
                var_17 -= ((/* implicit */long long int) 1102002982U);
                var_18 = ((/* implicit */short) 255U);
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_5] [i_2])) ? (((/* implicit */int) arr_4 [i_5] [i_2])) : (((/* implicit */int) arr_4 [i_5] [i_2 + 2])))))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_5])) ? (arr_13 [i_5]) : (arr_13 [i_5]))))));
                }
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    arr_21 [i_0] [i_1] [13] = ((/* implicit */int) (+(arr_16 [i_1] [i_0 + 1])));
                    arr_22 [i_0] [i_1] [i_2 + 2] [i_6] = ((/* implicit */unsigned long long int) (unsigned short)65535);
                    arr_23 [i_0] [i_1] [i_1] [i_1] [i_2] [i_6] = ((/* implicit */_Bool) (-(arr_13 [i_1])));
                }
            }
            for (int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                arr_28 [i_1] [i_1] = ((/* implicit */unsigned short) (+(13665913607841058769ULL)));
                var_21 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))) / (16688406921055906163ULL)));
            }
            for (long long int i_8 = 1; i_8 < 17; i_8 += 3) 
            {
                var_22 = ((/* implicit */unsigned int) arr_8 [i_0 + 2]);
                arr_32 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_14 [i_0] [i_0] [i_0] [i_8 + 3])))) ? ((~(((/* implicit */int) arr_20 [(unsigned short)13] [i_1] [i_1] [i_8 + 3])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)775)) == (((/* implicit */int) (short)-9632)))))));
                arr_33 [i_0 - 1] [i_1] [16] |= ((/* implicit */int) ((((((/* implicit */_Bool) arr_26 [i_0] [i_0] [(signed char)2] [i_0])) ? (arr_16 [16U] [16U]) : (((/* implicit */unsigned long long int) arr_15 [i_8 - 1] [i_8] [19] [i_1] [i_0 + 1] [i_0])))) > (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)43514)) : (((/* implicit */int) (short)9554)))))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                arr_36 [i_1] [i_1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 2] [i_1])) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-104))) : (arr_16 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12288)))));
                arr_37 [i_0] [i_1] = ((/* implicit */_Bool) arr_30 [19ULL] [i_0 - 2] [i_9]);
                arr_38 [i_0] [(signed char)10] [(_Bool)1] [i_1] = (+(((((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) arr_4 [i_1] [i_1])))));
            }
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (+(arr_15 [i_0 - 1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
        }
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(signed char)2] [i_0 + 2])) ? (arr_25 [i_0 + 1] [i_0 - 2] [i_0 - 2] [16U]) : (arr_39 [i_0 + 1] [(_Bool)1] [i_10]))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 1) 
            {
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((unsigned int) arr_35 [i_10] [i_10] [(short)0])))));
                /* LoopSeq 2 */
                for (long long int i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    arr_49 [i_11] [5] [i_11] = ((/* implicit */int) ((signed char) 4294967009U));
                    arr_50 [2] [i_11] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)98)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_40 [i_10]))))) : (arr_35 [i_11] [i_0 + 1] [i_11])));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_53 [i_0] [i_0] [i_10] [i_11] [i_13] = ((/* implicit */signed char) ((unsigned long long int) arr_40 [i_0 + 1]));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_0 - 1] [i_11 - 1] [i_0 - 1] [i_11 + 1])) ? (arr_31 [i_0 - 2] [i_11 + 1] [i_11 - 1] [i_11 - 1]) : (arr_31 [i_0 - 1] [i_11 - 1] [i_11 - 1] [i_11 + 1])));
                }
                var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)21508)) ? (-636995819) : (((/* implicit */int) (_Bool)1))));
                var_28 = ((/* implicit */signed char) (+(18446744073709551594ULL)));
            }
            for (unsigned int i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_34 [i_0 - 1]))));
                /* LoopSeq 2 */
                for (int i_15 = 2; i_15 < 17; i_15 += 1) 
                {
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                    arr_58 [i_0] [i_10] [i_0] [i_15 + 3] = (+(arr_7 [i_0 - 2] [i_0 - 1] [i_0 + 2]));
                }
                for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    var_31 -= ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (int i_17 = 0; i_17 < 20; i_17 += 4) 
                    {
                        arr_65 [i_0] [i_0] [5U] [i_16] [i_17] = ((/* implicit */long long int) ((((arr_59 [i_0 + 1] [0LL] [i_0] [i_0 - 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_14] [i_17] [i_14]))))) ? (arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_0 - 1] [i_14] [(unsigned short)18] [i_17]))))))));
                        var_32 = ((/* implicit */unsigned short) (+(arr_25 [i_0 + 1] [i_0 - 1] [i_10] [i_17])));
                    }
                    for (unsigned long long int i_18 = 1; i_18 < 19; i_18 += 4) 
                    {
                        arr_69 [i_0] [i_0] [i_0] [i_18] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_25 [(unsigned short)18] [(unsigned short)18] [i_14] [i_18])))) ? ((-(arr_11 [i_0 - 2] [i_16] [(_Bool)1] [i_16]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_43 [i_18] [i_16] [i_10] [i_18]))))));
                        arr_70 [i_0] [i_18] [i_0] [(_Bool)1] [(signed char)12] [i_16] [i_18 - 1] = ((/* implicit */unsigned long long int) (+(arr_64 [i_18 + 1])));
                        arr_71 [i_0] [i_0] [i_0] [i_18] [i_14] [i_16] [i_14] = ((/* implicit */unsigned short) ((_Bool) arr_15 [i_0 - 1] [i_0 + 1] [i_18 + 1] [i_18 + 1] [i_18] [i_18 + 1]));
                        arr_72 [i_0] [i_0] [i_18] [i_0] [i_0] [8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_15 [i_0] [i_10] [i_0] [i_16] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */int) arr_43 [i_18] [i_10] [i_10] [i_18])) : (((/* implicit */int) arr_57 [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_44 [i_18 - 1] [i_18] [i_10])) ? (((/* implicit */int) arr_4 [i_18] [i_10])) : (((/* implicit */int) (_Bool)1))))));
                    }
                    arr_73 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] &= (-((+(((/* implicit */int) arr_5 [i_0] [i_0] [i_14])))));
                }
                arr_74 [i_0 + 1] = ((/* implicit */unsigned int) arr_17 [i_0] [i_0 - 1] [i_0] [i_0] [5] [i_0 + 1]);
                arr_75 [i_0 - 1] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_0] [i_10])) ? (((/* implicit */int) arr_3 [(unsigned short)7] [i_0 - 1])) : (((((/* implicit */_Bool) arr_63 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_24 [i_0] [i_14] [i_14] [i_0])) : (((/* implicit */int) (unsigned char)255))))));
            }
            arr_76 [i_0] = ((/* implicit */unsigned char) ((int) arr_18 [i_0] [i_0] [i_0 - 1] [i_0 - 2]));
            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) arr_13 [10]))));
        }
        arr_77 [(unsigned char)15] [i_0 - 2] = ((/* implicit */short) (+(((/* implicit */int) arr_20 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 2]))));
        var_34 *= ((/* implicit */signed char) (_Bool)1);
        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) arr_39 [i_0 - 1] [i_0 + 1] [i_0 - 1]))));
        var_36 = ((/* implicit */_Bool) (+(arr_1 [i_0 - 1] [i_0 + 1])));
    }
    for (long long int i_19 = 0; i_19 < 12; i_19 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_20 = 1; i_20 < 10; i_20 += 3) 
        {
            arr_84 [i_20] [i_20 - 1] = ((/* implicit */int) ((((/* implicit */long long int) -366768868)) != (arr_35 [i_20 + 2] [i_20 + 1] [i_20])));
            arr_85 [i_20 + 2] [i_20] [i_19] = ((/* implicit */unsigned short) ((unsigned int) arr_30 [i_20 - 1] [i_20 - 1] [i_20 - 1]));
            var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_19] [i_19] [i_19] [i_20] [i_20])) ? (((/* implicit */int) arr_20 [i_20 + 2] [i_20] [11] [i_19])) : (((/* implicit */int) arr_63 [i_19] [i_20 - 1])))))));
        }
        var_38 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 18446744073709551594ULL)) ? (((/* implicit */unsigned long long int) 3903282516U)) : (9188752989399814541ULL))), (((/* implicit */unsigned long long int) arr_60 [15ULL] [i_19]))));
        arr_86 [(unsigned short)2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned int) arr_46 [i_19] [i_19] [i_19] [i_19]))), ((+((((_Bool)1) ? (((/* implicit */unsigned long long int) 1798531405U)) : (18446744073709551594ULL)))))));
    }
    for (short i_21 = 0; i_21 < 21; i_21 += 1) 
    {
        arr_90 [i_21] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)11442))))) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (signed char)59)))));
        arr_91 [i_21] = ((/* implicit */unsigned int) arr_88 [i_21] [i_21]);
        var_39 = (+(((/* implicit */int) arr_89 [i_21])));
    }
}
