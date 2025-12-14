/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89303
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
    var_12 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1809280969U))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1386996221U)))))) ? (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_3))))) : (((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (3966412870449840905LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (short)-32754))))) : (min((8927472227272918880ULL), (((/* implicit */unsigned long long int) (short)-32765))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (var_0))))))));
        var_14 = ((/* implicit */unsigned long long int) (short)-32765);
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_15 = ((/* implicit */_Bool) 1809280970U);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_16 *= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)66))))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_17 = ((/* implicit */unsigned short) (~(((arr_6 [i_1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))));
                arr_10 [i_3] [i_2] [i_1 + 1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) arr_7 [i_1] [i_2]))));
                var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_2])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1]))));
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_5 = 3; i_5 < 7; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_5 - 3] [i_2]))));
                        arr_15 [i_1] [i_1 + 1] [i_3] [i_1] [i_4] [i_5] [i_1] = ((/* implicit */unsigned short) ((16744448U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        arr_18 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_3] = (short)-1;
                        arr_19 [i_3] [i_3] [i_3] [6LL] [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) 1809280969U);
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+(((/* implicit */int) arr_14 [i_1] [i_1] [i_2] [i_1 + 1])))))));
                        var_21 = ((/* implicit */unsigned char) arr_12 [(unsigned short)7] [(unsigned short)7] [i_3] [i_4] [i_6]);
                    }
                    arr_20 [(short)3] [i_3] [i_4] = ((/* implicit */short) var_5);
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)33746))))) : (var_5)));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        arr_23 [i_3] [i_3] [i_3] [i_3] [3U] [i_3] = var_0;
                        var_23 = ((/* implicit */signed char) arr_6 [i_3]);
                    }
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 2])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 2]))))))));
                }
                for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    arr_26 [i_3] [i_2] [i_3] [i_8] = ((/* implicit */short) (-(((-1733531000) / (((/* implicit */int) var_2))))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_25 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 + 1])) ^ (((/* implicit */int) (signed char)-79))));
                }
            }
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                arr_29 [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_1));
                arr_30 [i_2] = ((/* implicit */signed char) arr_27 [i_1 + 1] [i_1 - 1] [i_1 - 2]);
            }
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_14 [8U] [i_1] [i_2] [i_2]))));
        }
    }
    for (unsigned short i_10 = 1; i_10 < 8; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                {
                    var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-6565393768169412644LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)9])))))) || (((/* implicit */_Bool) (unsigned short)65520))));
                    arr_39 [i_10] [i_12] [10LL] [i_10 + 3] = ((/* implicit */int) min((((/* implicit */short) (signed char)98)), ((short)15140)));
                    var_28 = (i_12 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39249))) % (-6565393768169412661LL)))) ? (((((/* implicit */int) arr_7 [i_10] [i_10 + 1])) << (((((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [i_11] [i_11] [i_12] [i_11] [i_11])), (arr_16 [3ULL] [i_11] [i_12] [(unsigned short)4] [i_12])))) - (59846))))) : (((((/* implicit */_Bool) -1109069325)) ? (min((1109069325), (((/* implicit */int) var_11)))) : ((~(((/* implicit */int) var_8))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39249))) % (-6565393768169412661LL)))) ? (((((/* implicit */int) arr_7 [i_10] [i_10 + 1])) << (((((((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [i_11] [i_11] [i_12] [i_11] [i_11])), (arr_16 [3ULL] [i_11] [i_12] [(unsigned short)4] [i_12])))) - (59846))) - (5574))))) : (((((/* implicit */_Bool) -1109069325)) ? (min((1109069325), (((/* implicit */int) var_11)))) : ((~(((/* implicit */int) var_8)))))))));
                    var_29 = ((/* implicit */short) min((((/* implicit */int) (signed char)-49)), (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 2485686325U)) ? (((/* implicit */int) arr_28 [i_10] [i_11] [i_11] [i_12])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (!((_Bool)1))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_13 = 2; i_13 < 10; i_13 += 2) 
        {
            for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                {
                    var_30 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_16 [i_13 - 1] [i_13 - 1] [i_13] [i_13] [i_13])) : (((/* implicit */int) ((((arr_22 [i_10 + 1] [i_10] [i_13] [i_14]) || (((/* implicit */_Bool) 1251120486U)))) || (((((/* implicit */_Bool) 3781614450475782678ULL)) || (((/* implicit */_Bool) arr_33 [i_10 - 1] [(short)0] [i_14])))))))));
                    var_31 = var_8;
                    /* LoopNest 2 */
                    for (long long int i_15 = 4; i_15 < 9; i_15 += 4) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 1) 
                        {
                            {
                                arr_49 [i_10] [i_10] [i_14] [(_Bool)0] [i_16] [i_10] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (unsigned short)31807)), (68719476735ULL))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)13753)) ? (((/* implicit */long long int) 703865569U)) : (arr_41 [i_13] [i_15]))), (((/* implicit */long long int) min(((_Bool)1), (arr_1 [i_10])))))))));
                                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(1809280969U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3428134257U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) (short)28247)))) : (((/* implicit */int) (short)12811)))) : (((((/* implicit */_Bool) (short)-12811)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)30402))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_33 = ((/* implicit */short) var_8);
        arr_50 [i_10] [i_10] = ((/* implicit */signed char) var_9);
        arr_51 [i_10] [i_10] = ((/* implicit */short) var_1);
    }
    var_34 *= ((/* implicit */unsigned long long int) var_4);
    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) var_1))));
    var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) var_6))));
}
