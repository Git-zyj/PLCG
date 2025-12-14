/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97652
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483627)) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (534949337U) : (((/* implicit */unsigned int) 681352452)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (1607314862) : (((/* implicit */int) (signed char)127)))))));
                var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)30993))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_2 = 2; i_2 < 10; i_2 += 2) 
    {
        arr_9 [i_2 + 1] [11ULL] = ((/* implicit */short) min((max((var_13), (max((((/* implicit */unsigned long long int) arr_6 [(unsigned short)4])), (2250789997785940454ULL))))), (((/* implicit */unsigned long long int) var_15))));
        var_17 &= (~(((/* implicit */int) (short)8679)));
    }
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7602560388488102289ULL)) ? (((/* implicit */int) ((short) (signed char)26))) : (((/* implicit */int) ((((/* implicit */int) ((-1163881216369183488LL) > (((/* implicit */long long int) 2147483647))))) == ((~(2012968874))))))));
        var_19 = ((/* implicit */unsigned short) ((short) (unsigned char)10));
        var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) (signed char)-11)))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)127)), (-850399712032292534LL)))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (15603119490822827391ULL))) : (((/* implicit */unsigned long long int) ((var_5) | (((/* implicit */long long int) arr_4 [16ULL])))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 6; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_25 [i_5] [i_6] = ((/* implicit */long long int) arr_20 [i_4] [i_4] [i_4] [i_4]);
                                arr_26 [i_8] [i_6] [3ULL] [i_6] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9)))) != (arr_8 [i_4] [i_5])))) & (((/* implicit */int) var_15))));
                                arr_27 [i_4] [i_5] [i_6] [(signed char)1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_1) > (var_7)))) == (((/* implicit */int) ((arr_22 [i_4] [i_5] [i_6 - 2] [i_5]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
                            }
                        } 
                    } 
                    arr_28 [i_6] = arr_2 [i_6] [i_5] [i_6];
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_9 = 4; i_9 < 9; i_9 += 3) /* same iter space */
        {
            var_21 += ((((/* implicit */_Bool) ((unsigned char) (signed char)68))) ? ((+(((((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_4] [i_4] [i_9])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))));
            arr_33 [(unsigned short)0] [i_4] [(unsigned short)8] = var_5;
            arr_34 [i_9] [i_4] [i_4] = ((/* implicit */int) min(((+(1882914001U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-24333))))) <= (4ULL))))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                for (unsigned short i_11 = 1; i_11 < 8; i_11 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_37 [i_12] [i_10] [i_9])))))))));
                            var_23 ^= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (0)));
                            var_24 = ((/* implicit */int) (+(((((/* implicit */_Bool) -1720199696)) ? (var_8) : (3088603781081994142LL)))));
                            arr_44 [i_12] = ((/* implicit */unsigned long long int) var_10);
                        }
                        arr_45 [i_10] [i_9 - 1] [(unsigned short)1] [i_11] [i_4] [i_4] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)39298))));
                    }
                } 
            } 
            arr_46 [7] [7] &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 278683736)), ((~(max((3944669599U), (((/* implicit */unsigned int) (unsigned short)21297))))))));
        }
        for (unsigned long long int i_13 = 4; i_13 < 9; i_13 += 3) /* same iter space */
        {
            arr_49 [i_4] [i_13 - 3] [i_4] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [(signed char)8] [i_13 + 1]))))) && (((/* implicit */_Bool) max((arr_32 [i_13] [i_13 - 1] [i_13 - 3]), (arr_32 [i_13 - 3] [(short)5] [i_13])))));
            arr_50 [i_4] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) min((arr_32 [7ULL] [(_Bool)1] [4]), (((/* implicit */unsigned int) arr_12 [(signed char)1]))))), (min((arr_3 [i_4] [0ULL]), (((/* implicit */unsigned long long int) arr_23 [i_4])))))), (((((/* implicit */_Bool) arr_23 [(unsigned char)9])) ? (arr_22 [(_Bool)1] [(unsigned char)2] [i_13] [i_13]) : (min((((/* implicit */unsigned long long int) arr_47 [i_4] [i_4] [5])), (6896347444817198262ULL)))))));
            arr_51 [i_13] &= ((/* implicit */unsigned short) (+(2141090)));
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_13 - 1] [i_13 - 2] [i_13 - 1] [i_13 - 2])) ? ((-(((/* implicit */int) arr_43 [4] [i_13 - 4] [i_4] [i_13 - 4] [(unsigned short)6] [i_13 - 2])))) : (((/* implicit */int) ((10675349054512675471ULL) > (((/* implicit */unsigned long long int) var_5)))))))), (max((max((arr_2 [i_4] [i_4] [i_4]), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) (+(((/* implicit */int) (short)-26916))))))))))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 10; i_14 += 3) 
        {
            arr_54 [i_14] [2] = ((/* implicit */signed char) var_10);
            var_26 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) var_0)))))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            arr_58 [i_4] [i_15] = ((int) -1339926685);
            /* LoopSeq 1 */
            for (signed char i_16 = 4; i_16 < 8; i_16 += 3) 
            {
                var_27 = ((/* implicit */short) arr_20 [(signed char)5] [(signed char)5] [(signed char)5] [(signed char)5]);
                arr_62 [i_4] [i_15] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-12368)) ? ((((_Bool)1) ? (((/* implicit */int) (short)-1594)) : (((/* implicit */int) (signed char)109)))) : (((/* implicit */int) (short)-17014))))) > (arr_61 [i_4] [i_15] [i_16 + 2])));
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_12 [i_16 - 4])) > (((((/* implicit */_Bool) 2134750658U)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) (unsigned char)243))))))))))));
            }
            arr_63 [i_15] = ((/* implicit */int) arr_13 [i_4] [1]);
            var_29 = ((/* implicit */int) arr_48 [i_15] [5U]);
        }
        arr_64 [i_4] |= ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [4U]))) : (arr_48 [i_4] [i_4])))))));
        arr_65 [(short)3] = ((/* implicit */_Bool) var_1);
        arr_66 [(unsigned char)9] [i_4] = ((/* implicit */short) max((((((/* implicit */_Bool) max((var_10), (((/* implicit */short) var_4))))) ? (((/* implicit */unsigned long long int) -1229502523728047209LL)) : (((((/* implicit */_Bool) arr_16 [5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_1 [6LL]))))), (((/* implicit */unsigned long long int) var_0))));
    }
    var_30 = ((/* implicit */unsigned long long int) var_15);
    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_3) : (var_3)))) ? (((var_13) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) (short)-22875)))))))) ? ((-(max((var_7), (((/* implicit */unsigned long long int) var_15)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7))))));
}
