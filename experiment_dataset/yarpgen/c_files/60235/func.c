/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60235
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
    var_13 ^= var_4;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1 + 1] [(short)0] [i_3] [i_4] &= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) var_4)), (var_11)))) ? (5773460979659868063LL) : (((/* implicit */long long int) arr_4 [i_0] [i_3] [0LL])))));
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((arr_12 [(_Bool)1] [i_3] [i_2] [i_3] [i_1 + 1]), (((/* implicit */short) ((unsigned char) arr_3 [i_0 - 2] [i_1 + 2]))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5773460979659868058LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_1 - 1]))) : ((~(arr_4 [i_2] [i_1 - 1] [i_0 - 2])))))) ? ((-(((-5773460979659868039LL) / (5773460979659868063LL))))) : (max((5773460979659868078LL), (5773460979659868057LL)))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        var_16 = 5773460979659868038LL;
                        var_17 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) (((((+(-5773460979659868084LL))) + (9223372036854775807LL))) >> (((arr_13 [i_0]) - (7816320157944163166ULL)))))) : (((/* implicit */unsigned char) (((((+(-5773460979659868084LL))) + (9223372036854775807LL))) >> (((((arr_13 [i_0]) - (7816320157944163166ULL))) - (790458600690131988ULL))))));
                    }
                    arr_18 [i_0] [i_0] [i_0] [i_0 - 2] = ((/* implicit */short) ((-5773460979659868064LL) % (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1 - 1] [i_0] [i_2])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        for (long long int i_7 = 1; i_7 < 9; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_18 |= ((((/* implicit */long long int) (-(((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_4)))))))) / (max((((/* implicit */long long int) arr_9 [i_7 - 1] [i_7] [i_8] [(_Bool)1])), ((+(-5773460979659868064LL))))));
                    /* LoopSeq 3 */
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            arr_36 [i_6] [i_6] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5773460979659868070LL)) ? (((/* implicit */unsigned long long int) arr_6 [i_6] [i_7 + 1] [i_10 + 1])) : (min((arr_34 [i_6] [i_6] [i_6] [i_8] [i_9] [i_6] [i_10]), (((/* implicit */unsigned long long int) var_2))))))) ? (((long long int) arr_28 [(signed char)1] [(unsigned short)2] [(signed char)1] [(signed char)1])) : (((/* implicit */long long int) ((int) arr_8 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_10 + 1])))));
                            var_19 = ((/* implicit */unsigned short) (+(-5773460979659868058LL)));
                            var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_6] [i_9])), (-5773460979659868023LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((5773460979659868070LL) < (-5773460979659868056LL))))) : (min((-5773460979659868057LL), (5773460979659868038LL)))))));
                            arr_37 [i_10] [i_9] [i_8] [i_8] [i_7 + 1] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_6);
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) -5773460979659868028LL);
                            var_22 &= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_28 [(unsigned short)8] [i_7 + 1] [5] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_28 [i_11] [i_9] [i_6] [i_6]), (((/* implicit */signed char) var_10)))))) : (min((-5773460979659868058LL), (((/* implicit */long long int) arr_29 [i_6] [i_7] [2ULL] [i_9])))))));
                            var_23 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_6] [i_7] [i_7] [i_8] [i_11] [i_7 + 1] [i_8])) ? (-5773460979659868086LL) : (-5773460979659868063LL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((_Bool) ((5773460979659868019LL) - (5773460979659868053LL))))));
                            var_24 = ((/* implicit */int) var_7);
                        }
                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 9; i_12 += 1) 
                        {
                            var_25 = ((/* implicit */_Bool) ((signed char) var_7));
                            var_26 = ((/* implicit */signed char) ((arr_21 [i_7 - 1]) ? (((/* implicit */int) var_2)) : (arr_19 [i_7 + 1])));
                        }
                        var_27 = ((/* implicit */_Bool) var_1);
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) 5773460979659868032LL);
                        var_29 = ((/* implicit */unsigned long long int) (+(-5773460979659868064LL)));
                        /* LoopSeq 4 */
                        for (long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            var_30 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_14] [i_13] [i_8] [i_7 + 1])) ? (5773460979659868065LL) : (5773460979659868066LL)))) ? (((/* implicit */int) arr_32 [i_6] [i_7] [i_8] [i_7 + 1] [2LL] [i_13] [i_13])) : (arr_52 [i_6] [i_6] [i_6] [i_6] [i_6])))) ? (((/* implicit */int) ((short) arr_23 [i_7 - 1] [i_7]))) : ((+(((/* implicit */int) var_10))))));
                            var_31 = ((/* implicit */short) arr_25 [i_6]);
                            arr_53 [i_6] [i_7] [6] [6] [(unsigned short)0] = ((/* implicit */unsigned char) min((min((-5773460979659868042LL), (-5773460979659868082LL))), (5773460979659868038LL)));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            arr_57 [(signed char)2] [(signed char)2] [(signed char)2] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_28 [i_7] [i_7 + 1] [i_7 + 1] [6])) >= ((-(((/* implicit */int) arr_54 [i_6] [0])))))))) % (((max((-5773460979659868039LL), (5773460979659868064LL))) << (((((/* implicit */int) arr_22 [i_7] [7ULL] [7ULL])) - (53001)))))));
                            arr_58 [9] [i_7] [9] [i_15] [i_15] = ((/* implicit */short) min((((((/* implicit */_Bool) var_2)) ? (5773460979659868064LL) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_6] [(_Bool)1] [(_Bool)1] [i_7 + 1] [i_8]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_7] [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7])) || (((/* implicit */_Bool) arr_17 [i_7 + 1] [i_7] [i_8] [i_13] [i_15] [i_6])))))));
                            var_32 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) var_9)), (-5773460979659868026LL))) & (((/* implicit */long long int) max((arr_19 [i_7 - 1]), (arr_19 [i_7 + 1]))))));
                            var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5773460979659868053LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7 - 1] [i_7]))) : (var_5))))));
                            var_34 = ((/* implicit */int) var_7);
                        }
                        for (unsigned short i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            arr_62 [i_8] [i_13] = ((/* implicit */unsigned short) var_10);
                            var_35 = ((/* implicit */_Bool) max((-5773460979659868021LL), (5773460979659868039LL)));
                            var_36 |= ((/* implicit */int) ((((arr_24 [i_7 + 1] [3LL]) ? (5773460979659868052LL) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [4LL] [i_16]))))) < (((long long int) -5773460979659868055LL))));
                            var_37 &= ((/* implicit */unsigned short) min((max((var_6), (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) arr_52 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 1] [1ULL])) ? (arr_52 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7]) : (arr_52 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1] [(signed char)6])))));
                        }
                        for (int i_17 = 0; i_17 < 10; i_17 += 1) 
                        {
                            var_38 ^= ((/* implicit */unsigned short) (+(((max((((/* implicit */long long int) var_1)), (5773460979659868057LL))) / (max((((/* implicit */long long int) arr_21 [i_6])), (var_5)))))));
                            arr_65 [i_17] [i_13] [i_8] [i_7] = ((/* implicit */short) max((-5773460979659868057LL), (-5773460979659868025LL)));
                            var_39 -= ((/* implicit */int) arr_26 [i_17] [(_Bool)1] [i_7]);
                        }
                    }
                    for (unsigned int i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_19 = 0; i_19 < 10; i_19 += 1) 
                        {
                            var_40 |= ((/* implicit */signed char) (+((+(((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_6]))) / (5773460979659868064LL)))))));
                            var_41 = (-((-(((/* implicit */int) arr_44 [i_7 - 1])))));
                        }
                        for (unsigned char i_20 = 0; i_20 < 10; i_20 += 3) 
                        {
                            arr_72 [i_6] [i_6] [i_20] [i_6] [i_18] [i_20] = ((/* implicit */int) ((min((5773460979659868057LL), (var_12))) - (((((/* implicit */_Bool) min((-5773460979659868065LL), (-5773460979659868060LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_6] [9ULL] [i_20] [i_7 + 1] [8ULL]))) : (-5773460979659868053LL)))));
                            var_42 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_18] [i_18])) ? ((+(arr_64 [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 5773460979659868056LL))))));
                        }
                        var_43 = ((/* implicit */unsigned char) -5773460979659868065LL);
                        var_44 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5773460979659868059LL)) ? (5773460979659868076LL) : (-5773460979659868048LL)))) ? (((long long int) 5773460979659868056LL)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_6] [i_6] [i_7] [(short)4] [i_18] [i_18]))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_45 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5))));
                                var_46 += ((/* implicit */_Bool) -5773460979659868039LL);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_23 = 2; i_23 < 8; i_23 += 2) 
                    {
                        var_47 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_7] [i_7 + 1] [i_8] [i_23] [i_7 + 1] [i_23 + 2] [i_7 + 1]))) : (arr_34 [i_23 + 1] [i_7] [(unsigned char)0] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((long long int) arr_16 [i_6] [i_7] [3LL] [i_8] [i_23])) > (((((/* implicit */_Bool) 5773460979659868047LL)) ? (-5773460979659868051LL) : (-5773460979659868060LL))))))) : (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_7] [i_7] [i_7] [i_7 - 1] [i_7 + 1]))))));
                        var_48 = ((/* implicit */unsigned long long int) min((var_48), (max((arr_30 [i_23] [i_23] [(unsigned short)4] [(unsigned short)4] [i_7] [i_6]), (((/* implicit */unsigned long long int) (+(5773460979659868076LL))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_24 = 0; i_24 < 10; i_24 += 1) 
                        {
                            var_49 = ((/* implicit */unsigned short) arr_13 [i_23]);
                            var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6] [i_6] [i_8] [i_23] [i_24]))) + (-5773460979659868052LL)))))) ? (((/* implicit */int) arr_8 [i_7] [i_7] [1ULL] [i_7 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((5773460979659868045LL) >> (((/* implicit */int) var_3))))))))));
                        }
                        for (unsigned char i_25 = 0; i_25 < 10; i_25 += 1) 
                        {
                            var_51 = arr_48 [i_6] [i_7] [i_8] [(short)6] [i_25];
                            arr_86 [i_6] [i_7] [i_8] [i_23] [i_25] = ((/* implicit */unsigned char) -5773460979659868056LL);
                            arr_87 [i_25] [i_25] [(unsigned short)0] [i_25] [i_25] [i_7 - 1] [i_25] = ((/* implicit */signed char) (-(5773460979659868048LL)));
                            var_52 += ((/* implicit */unsigned short) var_8);
                            var_53 = ((/* implicit */unsigned long long int) max((var_53), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_77 [i_6] [i_7] [(short)5] [i_25]))) & ((~(((/* implicit */int) arr_5 [i_7 - 1] [i_7 - 1])))))))));
                        }
                        for (unsigned char i_26 = 0; i_26 < 10; i_26 += 3) 
                        {
                            var_54 = ((/* implicit */_Bool) arr_31 [i_7] [i_26]);
                            var_55 = ((/* implicit */unsigned char) 5773460979659868017LL);
                        }
                    }
                    for (int i_27 = 2; i_27 < 7; i_27 += 1) 
                    {
                        arr_93 [0] [0] [i_7] [i_8] [i_7] = ((((/* implicit */_Bool) -5773460979659868069LL)) ? (5773460979659868032LL) : (5773460979659868045LL));
                        arr_94 [i_27 + 1] [0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5773460979659868064LL)) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_51 [7ULL] [i_6] [i_7 + 1] [i_8] [i_8] [i_27 + 1] [i_8]))))) : (max((((/* implicit */long long int) arr_39 [i_27] [i_7 + 1] [i_7 + 1] [i_7] [i_6])), (-5773460979659868046LL)))));
                    }
                    var_56 &= ((/* implicit */short) ((max((5773460979659868063LL), (((/* implicit */long long int) arr_75 [(signed char)2])))) / (min((5773460979659868054LL), (5773460979659868045LL)))));
                }
            } 
        } 
    } 
    var_57 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 5773460979659868020LL)) ? (5773460979659868054LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5773460979659868040LL)))))) : (-5773460979659868057LL))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))))));
}
