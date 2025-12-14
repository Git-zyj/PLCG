/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8356
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0 + 2] = ((/* implicit */int) var_9);
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)11775))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) * (var_9)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            arr_15 [i_3 + 2] [i_3] [i_3] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)237)) ? (922933962935751182ULL) : (973180878812481021ULL)));
                            arr_16 [i_0 + 2] [i_1] [i_3] [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38))) : (arr_2 [i_0])));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (var_3)));
                        }
                        for (unsigned char i_5 = 2; i_5 < 21; i_5 += 2) 
                        {
                            arr_21 [i_5] [i_3] [i_3] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) var_2));
                            var_17 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)38))));
                            arr_22 [i_3] = ((/* implicit */long long int) ((var_14) ? (((/* implicit */int) arr_8 [i_2] [i_3] [i_2])) : (((/* implicit */int) var_13))));
                        }
                        for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            arr_27 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_3] = ((/* implicit */unsigned int) arr_23 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_3]);
                            arr_28 [i_0 + 1] [i_3] = max((((/* implicit */short) ((signed char) var_1))), ((short)-9416));
                            arr_29 [i_3] [i_3] [i_3 + 1] = ((((max((((/* implicit */long long int) arr_7 [i_0])), (-6456834401610533001LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 744964737)) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (unsigned short)11800))))))) >> ((((~(((/* implicit */int) (_Bool)0)))) + (12))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 1; i_7 < 19; i_7 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((signed char) var_13));
                            arr_33 [i_3] [i_3] [i_2] [i_2] [i_7 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (min((((/* implicit */int) arr_17 [i_0 + 2] [i_1] [i_2] [i_1] [i_7])), ((-(((/* implicit */int) arr_14 [i_7] [i_3] [i_2] [i_0 + 2] [i_3] [i_0 + 2]))))))));
                        }
                        for (short i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            arr_36 [i_3] = ((/* implicit */int) arr_5 [i_1] [i_1] [i_2]);
                            arr_37 [i_0 - 1] [i_3] [i_1] [i_3 - 1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)37)) - (((/* implicit */int) (_Bool)1))))) & (356204980U)));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_46 [i_0 - 1] [i_0 - 1] [i_11] [i_10] [i_10] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)16987))));
                            arr_47 [i_0] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = (~(((((/* implicit */int) (unsigned char)6)) >> (((((/* implicit */int) (unsigned short)53726)) - (53714))))));
                            arr_48 [i_11] [i_11] = ((/* implicit */int) (unsigned short)53722);
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 2; i_12 < 20; i_12 += 1) 
                        {
                            arr_52 [i_0 - 1] [i_1] [i_1] [i_9] [i_10] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)11814)) ^ (((/* implicit */int) (unsigned char)5)))) - (((((/* implicit */int) max((var_7), (((/* implicit */unsigned char) var_6))))) / (((/* implicit */int) max((((/* implicit */short) (signed char)5)), ((short)4085))))))));
                            arr_53 [i_0 + 2] [i_1] [i_1] [i_10] = ((/* implicit */int) (short)-26694);
                            arr_54 [i_0 + 1] [i_0 + 1] [i_1] [i_1] [i_9] [i_10] [i_12 + 1] = ((/* implicit */unsigned int) ((521955106570277277LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53761)))));
                            arr_55 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                        }
                        for (unsigned long long int i_13 = 2; i_13 < 20; i_13 += 2) 
                        {
                            arr_58 [i_13 - 2] [i_10] [i_9] [i_9] [i_1] [i_0] [i_0 + 2] = arr_57 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13] [i_13 - 1];
                            arr_59 [i_10] = ((/* implicit */unsigned char) ((unsigned long long int) (short)-5526));
                            arr_60 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_10] [i_13 - 2] [i_13 + 1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_9 [i_0] [i_13 + 1] [i_10] [i_10])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_9 [i_0 - 1] [i_13 + 1] [i_1] [i_9]))))));
                            arr_61 [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) var_13);
                        }
                    }
                } 
            } 
        }
        for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                arr_68 [i_0 - 1] [i_14] [i_15] [i_15] = ((/* implicit */unsigned char) ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_15] [i_0 + 1])))));
                arr_69 [i_0] [i_14] [i_14] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_12 [i_0 + 1] [i_15] [i_15]))));
                arr_70 [i_14] [i_14] = ((/* implicit */long long int) (((-(0U))) + (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-91)) - (((/* implicit */int) (signed char)-5)))))));
                var_19 = ((/* implicit */long long int) var_13);
            }
            arr_71 [i_14] [i_14] [i_0 + 1] = ((/* implicit */unsigned short) (short)(-32767 - 1));
            var_20 = (+((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) (unsigned short)11814))))) : (arr_20 [6LL] [i_0 + 1] [i_0 + 1] [i_0 + 1] [6LL]))));
            arr_72 [i_14] = ((/* implicit */signed char) var_10);
        }
    }
    for (short i_16 = 4; i_16 < 17; i_16 += 1) 
    {
        arr_75 [i_16 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2047))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_16 - 1] [i_16 - 1] [i_16 - 1])))))) ? (((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) max(((unsigned short)11775), (((/* implicit */unsigned short) (unsigned char)37))))) : (((/* implicit */int) (unsigned char)233)))) : (((((/* implicit */_Bool) arr_62 [i_16 - 3])) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */int) (signed char)-69)) / (((/* implicit */int) (unsigned short)65531))))))));
        arr_76 [i_16 + 1] [i_16 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_16 - 2] [(signed char)0] [i_16 - 3] [i_16 + 1] [i_16 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)36)) + (((/* implicit */int) (unsigned char)245))))) : (max((arr_19 [i_16 - 2] [i_16] [i_16 - 3] [i_16 - 1]), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65522)))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_18 = 0; i_18 < 18; i_18 += 1) 
            {
                arr_82 [i_16] [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180))) + (9ULL)));
                var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_0)), (arr_39 [i_16 - 2] [i_16 - 2] [i_16 - 2] [i_16])));
            }
            arr_83 [i_16 - 2] [i_16 - 2] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)72)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */int) (short)-4109)) : (((/* implicit */int) (signed char)69)))))));
        }
        /* vectorizable */
        for (unsigned short i_19 = 0; i_19 < 18; i_19 += 2) 
        {
            var_22 = ((/* implicit */signed char) var_13);
            arr_86 [i_16 - 4] [i_16 - 1] = ((/* implicit */long long int) ((unsigned char) (short)(-32767 - 1)));
            arr_87 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_3)));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 22ULL)) || (((/* implicit */_Bool) 843781267929630952LL))));
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 18; i_20 += 1) /* same iter space */
        {
            arr_91 [i_20] [i_20] = ((/* implicit */short) (+(((/* implicit */int) (signed char)17))));
            arr_92 [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)35))) / (3315209861675624174LL)));
            arr_93 [i_20] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-5))));
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 18; i_21 += 1) /* same iter space */
        {
            arr_97 [i_21] [i_16 - 1] = ((/* implicit */long long int) ((signed char) arr_26 [i_16] [(unsigned short)8] [i_16 - 1] [i_16 + 1] [i_16 - 1]));
            arr_98 [i_16] [i_21] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-1)) != (((/* implicit */int) (signed char)-70)))))) ^ (((((/* implicit */_Bool) 2143289344U)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)215)))))));
        }
        arr_99 [i_16] [i_16 - 2] = ((/* implicit */short) var_11);
    }
    var_24 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 7351236256903525679ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65204))) : (12312614459072488852ULL)))));
    var_25 = ((/* implicit */unsigned short) var_14);
}
