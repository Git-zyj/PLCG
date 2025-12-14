/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6915
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
    var_13 = var_8;
    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((int) 19ULL))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */signed char) var_6)))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)-17)), (var_11))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [12ULL] = ((((((/* implicit */int) arr_2 [i_0] [i_2])) * (((/* implicit */int) arr_0 [i_1])))) / (((/* implicit */int) (_Bool)1)));
                    var_15 = ((/* implicit */unsigned short) 9ULL);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_3 + 3] [i_3 + 3] [(signed char)11] [i_3 + 3])) ? (((/* implicit */int) arr_10 [i_3 + 3] [i_3 + 3] [i_3] [i_3 + 3])) : (((/* implicit */int) var_2)))))));
                        arr_14 [i_3] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1308627134)) && (((/* implicit */_Bool) arr_7 [i_0]))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3] [i_3] [i_3 + 4] [i_3 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 4] [(_Bool)1]))) : (var_7)));
                    }
                    arr_15 [i_0] [i_1] = ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 18; i_5 += 3) 
                        {
                            {
                                arr_22 [i_5] [i_5] [(unsigned short)3] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)54194)))) | (min((((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_4] [i_5])), (-981362950)))));
                                var_18 &= ((/* implicit */signed char) arr_13 [i_4] [i_1] [i_0]);
                                arr_23 [i_5] [i_4] [i_2] [i_1] [i_5] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-23)))) ? (((/* implicit */int) max((arr_12 [i_0] [i_0] [i_5 - 1] [i_5 + 1] [i_5 - 1]), (((/* implicit */signed char) (_Bool)0))))) : (((arr_21 [i_2] [i_2] [i_5 + 1] [i_5] [i_5]) ? (16591305) : (((/* implicit */int) (short)-23718))))));
                                var_19 = ((/* implicit */int) (~((~((~(arr_11 [i_0] [i_1] [i_2])))))));
                                arr_24 [i_0] [i_0] [i_0] [i_2] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) var_1)), (arr_20 [i_5] [i_4] [i_2] [i_1] [i_1] [i_0])))) > (((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */int) arr_20 [i_5] [i_4] [i_4] [i_2] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 -= ((/* implicit */unsigned short) (+(((int) 0LL))));
        var_21 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) (unsigned char)208)), (13737129704531942525ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) var_8)) ? (-1308627134) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [7])))) : (((((/* implicit */_Bool) arr_3 [(signed char)13] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        arr_27 [i_6] |= ((/* implicit */int) 14583435637368694030ULL);
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                {
                    arr_32 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5)) ? (-2040313768) : (((/* implicit */int) (signed char)-21))));
                    arr_33 [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) ((short) -1363538606));
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 20; i_9 += 3) 
        {
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_23 = var_3;
                        var_24 = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_3)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_12 = 2; i_12 < 20; i_12 += 3) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_12 + 1] [i_12 - 1])) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)125)))))));
            var_26 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (4709614369177609091ULL)));
            arr_46 [i_12] = ((/* implicit */short) (((-(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */_Bool) -842264897268444383LL)) ? (var_11) : (((/* implicit */int) (signed char)-33))))));
        }
        for (unsigned short i_13 = 2; i_13 < 20; i_13 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_52 [i_6] [i_14] = ((/* implicit */int) var_6);
                arr_53 [i_14] [i_14] = ((/* implicit */short) (~(-2144790280)));
                arr_54 [i_14] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_14] [i_13 + 1] [i_13 - 2]))));
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_57 [i_14] [i_13] [i_14] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -1308627132)) ? (((/* implicit */int) (unsigned char)135)) : (arr_42 [i_14])))));
                    arr_58 [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_39 [5ULL] [i_14] [i_13 - 1] [16]))));
                }
            }
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (~(arr_49 [i_13 - 1] [(short)4]))))));
        }
    }
    for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 3) 
    {
        arr_62 [i_16] [i_16] = ((/* implicit */int) ((((((/* implicit */int) arr_60 [i_16])) >= (((/* implicit */int) (short)16128)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 18218260628206787997ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_60 [i_16])))))));
        arr_63 [i_16] = ((/* implicit */int) ((((((/* implicit */_Bool) (+(1308627142)))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) <= (arr_59 [i_16])))) : (((/* implicit */int) arr_61 [i_16])))) <= (((/* implicit */int) var_12))));
    }
    var_28 = ((/* implicit */_Bool) (short)27995);
}
