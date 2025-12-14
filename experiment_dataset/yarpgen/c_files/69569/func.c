/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69569
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] &= ((/* implicit */signed char) (-(max((((arr_0 [0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (((arr_0 [i_0] [(signed char)2]) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        var_12 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)190))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) var_8);
            arr_5 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_3 [i_1]);
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_18 [i_3] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_4] [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_3] [i_4])))));
                            arr_19 [i_1] = min((min((8302675500095065693LL), (8302675500095065693LL))), (((/* implicit */long long int) arr_0 [i_1] [i_3])));
                            var_14 &= var_2;
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) 8302675500095065693LL))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) arr_4 [i_1] [9ULL]))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        {
                            arr_24 [i_0] [i_0] [i_1] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-(arr_14 [i_0] [i_1] [i_2] [i_6])))))) : (var_5)));
                            var_17 &= ((/* implicit */long long int) max((((min((6259843708923446878ULL), (0ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5] [i_0] [i_5]))))), ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_3)))))));
                            var_18 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [(short)1] [i_5] [(short)1] [i_2] [i_1] [i_0]))));
                        }
                    } 
                } 
                arr_25 [i_1] [i_2] = (!(((/* implicit */_Bool) 6259843708923446878ULL)));
                var_19 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)9805)) ? (((/* implicit */int) arr_15 [i_2] [i_1])) : (((/* implicit */int) (_Bool)1))))));
            }
            for (unsigned long long int i_7 = 4; i_7 < 10; i_7 += 4) 
            {
                arr_29 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_7] [i_0]))) : (min((arr_1 [10]), (((/* implicit */unsigned long long int) var_9)))))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [(short)12] [i_1])))))))) | ((~(var_9)))));
            }
        }
    }
    for (int i_8 = 2; i_8 < 16; i_8 += 4) 
    {
        var_21 &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_30 [i_8]))));
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 19; i_11 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 2; i_12 < 16; i_12 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), ((~(16055777569949631441ULL)))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [15ULL] [15ULL] [i_10] [i_11] [i_12]))) | (arr_36 [i_9] [i_9]))), (arr_34 [i_9] [i_10])))) ? ((((!(((/* implicit */_Bool) arr_31 [i_8])))) ? ((-(((/* implicit */int) arr_38 [i_12 - 2] [i_11] [i_10] [(unsigned char)14] [i_8])))) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) ((unsigned short) (unsigned short)35090)))));
                            var_24 = ((/* implicit */unsigned long long int) (~(arr_35 [i_8 - 2] [i_8] [i_8 - 2] [i_12 + 1])));
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 3) 
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((arr_32 [i_10]) ? (arr_43 [i_8 + 1] [i_11] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_13] [i_9] [i_10] [i_9] [i_8]))))))));
                            var_26 = ((/* implicit */unsigned char) ((long long int) 6259843708923446891ULL));
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4447815624983247575LL)) ? (-8302675500095065694LL) : (0LL)))) ? (((((/* implicit */_Bool) arr_35 [i_13] [i_11] [i_9] [i_8])) ? (arr_34 [i_9] [5ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) | (arr_43 [i_13] [i_11] [i_9])))))))));
                            var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -2009707740)))))));
                        }
                        /* vectorizable */
                        for (long long int i_14 = 0; i_14 < 19; i_14 += 3) 
                        {
                            arr_46 [i_8] [i_9] [i_10] [i_11] [i_14] = var_9;
                            var_29 = ((/* implicit */long long int) ((unsigned int) arr_33 [i_14] [i_8 - 1]));
                        }
                        /* vectorizable */
                        for (unsigned char i_15 = 0; i_15 < 19; i_15 += 4) 
                        {
                            arr_49 [i_8] [i_10] [5] [i_15] = ((/* implicit */unsigned long long int) arr_35 [i_8 + 2] [i_9] [(unsigned char)8] [i_15]);
                            var_30 = ((/* implicit */long long int) ((arr_32 [i_11]) ? (arr_36 [i_15] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_15])))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 1) 
                        {
                            arr_53 [i_8] [i_8] [i_10] [i_11] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_31 [i_8 - 1])), (max(((unsigned short)18113), (((/* implicit */unsigned short) (unsigned char)2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_10]))) : (arr_42 [i_8 - 2] [i_8 - 2] [(unsigned char)17])));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((max((((/* implicit */short) (_Bool)1)), (var_2))), (((/* implicit */short) (unsigned char)232))))) : (((((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) arr_38 [i_8] [i_8] [i_10] [i_11] [i_16])))) | (((((/* implicit */_Bool) arr_38 [i_8] [(short)6] [i_10] [i_8] [i_8])) ? (((/* implicit */int) (unsigned short)35090)) : (((/* implicit */int) arr_48 [i_16] [3] [i_10] [i_8] [i_8]))))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned char i_17 = 0; i_17 < 10; i_17 += 1) 
    {
        arr_57 [i_17] [i_17] = ((/* implicit */unsigned char) arr_27 [i_17] [(_Bool)1] [i_17]);
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (unsigned short)30445))))), (max((2390966503759920174ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (signed char)95))))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 2) 
        {
            for (signed char i_19 = 0; i_19 < 10; i_19 += 1) 
            {
                for (long long int i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    {
                        arr_65 [i_18] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((arr_52 [i_19]) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)1)), ((unsigned short)124)))) : (((/* implicit */int) arr_50 [i_18] [i_18] [i_20]))))), (max((((/* implicit */unsigned long long int) max(((unsigned short)8), (((/* implicit */unsigned short) arr_3 [i_18]))))), (8376618294544482764ULL)))));
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) arr_0 [i_19] [i_19]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 3) 
                        {
                            var_34 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (arr_11 [i_20] [i_18] [i_17]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_17] [i_17])))));
                            var_35 = ((/* implicit */long long int) arr_58 [i_17]);
                        }
                        var_36 = var_9;
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_22 = 0; i_22 < 25; i_22 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_23 = 0; i_23 < 25; i_23 += 2) 
        {
            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) arr_70 [i_22] [i_22] [i_23]))));
            /* LoopNest 2 */
            for (unsigned char i_24 = 0; i_24 < 25; i_24 += 4) 
            {
                for (signed char i_25 = 0; i_25 < 25; i_25 += 1) 
                {
                    {
                        arr_77 [i_22] [i_22] = (~(arr_74 [i_22]));
                        arr_78 [10ULL] [i_23] [i_24] [i_22] [i_24] [i_22] = ((/* implicit */unsigned long long int) -1127840649);
                    }
                } 
            } 
        }
        arr_79 [i_22] [i_22] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3LL)) ? (((/* implicit */long long int) 1637071581U)) : (max((137438952448LL), (((/* implicit */long long int) 2441144339U))))))) < (11356008604296160641ULL));
        arr_80 [i_22] [i_22] = ((/* implicit */long long int) ((((arr_75 [i_22] [i_22]) ? (((/* implicit */int) arr_75 [i_22] [i_22])) : (((/* implicit */int) arr_75 [i_22] [i_22])))) | (((/* implicit */int) min((arr_75 [i_22] [i_22]), (arr_75 [i_22] [i_22]))))));
        /* LoopNest 3 */
        for (unsigned long long int i_26 = 0; i_26 < 25; i_26 += 3) 
        {
            for (long long int i_27 = 1; i_27 < 24; i_27 += 4) 
            {
                for (unsigned char i_28 = 0; i_28 < 25; i_28 += 4) 
                {
                    {
                        var_38 &= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-96)), ((unsigned char)147)))) >= ((~(((/* implicit */int) ((signed char) var_9)))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_29 = 0; i_29 < 25; i_29 += 2) 
                        {
                            arr_92 [i_22] [i_26] [i_26] [i_26] [i_27] [i_22] [i_29] = ((/* implicit */signed char) (!(arr_75 [i_28] [i_22])));
                            var_39 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                            arr_93 [i_29] [i_28] &= ((/* implicit */unsigned long long int) 8);
                            arr_94 [i_22] [i_26] [i_27] [i_29] [i_29] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8)))) * (arr_69 [i_26])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) : (min((((((/* implicit */_Bool) arr_84 [(_Bool)1] [i_28] [i_29])) ? (arr_89 [i_28] [i_28] [i_28]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_83 [i_29] [i_28] [i_22])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0))))))));
                        }
                        /* vectorizable */
                        for (long long int i_30 = 0; i_30 < 25; i_30 += 4) 
                        {
                            arr_98 [i_22] [i_22] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_81 [i_22] [i_27 + 1] [i_27 - 1]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-95))) : (arr_82 [i_30] [i_22])))));
                            arr_99 [i_22] [i_26] [i_22] [i_26] [i_30] = (~(arr_89 [i_27 + 1] [i_27 - 1] [i_22]));
                            var_40 = ((/* implicit */unsigned long long int) (-(-1661579805)));
                            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (((-(((/* implicit */int) var_4)))) - (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)25)))))))));
                        }
                        /* vectorizable */
                        for (short i_31 = 0; i_31 < 25; i_31 += 3) 
                        {
                            arr_103 [i_31] [i_28] [i_28] [i_26] [i_22] &= ((/* implicit */long long int) arr_70 [i_22] [i_27] [i_28]);
                            arr_104 [i_22] [i_22] [i_26] [i_27] [i_28] [i_27] [i_31] &= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))));
                        }
                        var_42 = max((((unsigned long long int) arr_69 [i_26])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_69 [i_26])) ? (arr_69 [i_22]) : (arr_69 [i_22])))));
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_85 [i_22] [i_26] [i_27] [i_28]))) - (((((/* implicit */_Bool) ((signed char) arr_70 [24U] [i_26] [i_22]))) ? (((-8647584294134694259LL) + (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_22] [i_22]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
                    }
                } 
            } 
        } 
    }
}
