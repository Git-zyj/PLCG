/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94625
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                var_10 = ((/* implicit */unsigned long long int) ((_Bool) 8567228778244630560ULL));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_16 [i_4] [i_2] [i_2] [(short)14] &= ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) arr_9 [i_4] [i_3])))));
                    var_11 ^= ((/* implicit */signed char) (~(((/* implicit */int) min((arr_11 [i_2]), (arr_11 [i_2]))))));
                    arr_17 [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~((-(8567228778244630562ULL))))))));
                    arr_18 [i_4] [i_3] [i_4] = ((/* implicit */unsigned int) arr_13 [i_4] [i_4] [(short)21]);
                }
            } 
        } 
        var_12 *= ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) arr_13 [i_2] [i_2] [i_2])))));
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    {
                        arr_31 [i_5] [i_5] [i_5] [i_7] [i_5] [(short)6] = ((/* implicit */unsigned char) var_5);
                        arr_32 [i_6] [i_5] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_23 [i_5]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) != (((/* implicit */int) arr_10 [i_6] [i_7] [i_8])))))) : ((-(arr_25 [i_6] [i_6] [i_7])))));
                        arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] = var_6;
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 1; i_11 < 8; i_11 += 2) 
                    {
                        for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            {
                                arr_46 [i_5] [i_9] [i_5] [i_10] [i_10] [i_11 + 2] [i_12] = ((/* implicit */unsigned int) arr_28 [(unsigned short)3] [i_9] [i_11 + 1] [i_11]);
                                arr_47 [i_5] [i_9] [i_10] [(unsigned char)8] [i_11 + 2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2U)) || (((/* implicit */_Bool) (unsigned short)23467))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */short) arr_45 [i_5] [i_5] [i_5] [i_9] [i_10]);
                    var_14 = ((((/* implicit */_Bool) ((unsigned long long int) arr_36 [i_5]))) && (((((/* implicit */_Bool) 8567228778244630557ULL)) && (((/* implicit */_Bool) arr_36 [i_5])))));
                    var_15 &= ((/* implicit */unsigned long long int) (~(-8686663696837812256LL)));
                }
            } 
        } 
    }
    for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_8 [i_13])))));
        var_17 ^= ((min((((/* implicit */long long int) arr_10 [i_13] [i_13] [i_13])), (arr_48 [i_13]))) >= (((/* implicit */long long int) ((unsigned int) 84084863U))));
    }
    for (long long int i_14 = 2; i_14 < 16; i_14 += 4) 
    {
        arr_53 [i_14 + 1] = ((/* implicit */short) min((((long long int) (~(var_7)))), (((/* implicit */long long int) max((((/* implicit */int) (short)1439)), (arr_9 [i_14 - 1] [i_14 - 2]))))));
        /* LoopSeq 1 */
        for (short i_15 = 0; i_15 < 17; i_15 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_16 = 0; i_16 < 17; i_16 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    for (long long int i_18 = 4; i_18 < 15; i_18 += 4) 
                    {
                        {
                            arr_65 [i_14 + 1] [i_14 - 2] [i_14 - 1] [i_14] [i_14] [i_14 + 1] [i_14] |= ((/* implicit */short) arr_63 [i_14 - 2] [i_15] [i_17] [i_18 + 2] [i_18 + 1] [i_15]);
                            var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_56 [i_14 + 1] [i_14 - 2])) ? (arr_62 [i_18] [i_18 - 3] [i_18 + 1] [i_18 - 1] [i_18] [i_18]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9879515295464921058ULL)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (unsigned char)199)))))));
                        }
                    } 
                } 
                var_19 ^= ((/* implicit */unsigned int) (-(arr_9 [i_14 + 1] [i_14])));
                /* LoopNest 2 */
                for (long long int i_19 = 0; i_19 < 17; i_19 += 2) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_20 = 8567228778244630576ULL;
                            arr_71 [i_20] [i_19] [i_16] [(unsigned short)6] [4] [i_20] = ((/* implicit */unsigned short) ((8567228778244630575ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [(_Bool)0] [i_14 - 2] [i_14 - 2] [i_14 + 1] [i_15])))));
                            arr_72 [i_20] [i_20] [i_19] [i_16] [i_20] [i_14] = ((/* implicit */unsigned int) ((arr_64 [i_14] [i_15] [i_16] [i_19] [i_14]) << (((arr_64 [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 - 2]) - (7930019521418756745ULL)))));
                        }
                    } 
                } 
            }
            arr_73 [i_14 - 2] [i_15] = ((/* implicit */short) (((!(arr_12 [i_14] [i_14] [i_15] [i_15]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4294967290U)));
            /* LoopNest 2 */
            for (unsigned char i_21 = 0; i_21 < 17; i_21 += 3) 
            {
                for (short i_22 = 0; i_22 < 17; i_22 += 4) 
                {
                    {
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_63 [i_14] [i_14] [i_15] [i_15] [i_21] [i_22]))));
                        var_22 = max((var_2), (((/* implicit */unsigned long long int) min(((-(859871806U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2)))))))));
                        arr_78 [i_14] [i_21] = ((/* implicit */_Bool) (((-(((/* implicit */int) (short)-1425)))) >> (((((/* implicit */int) arr_75 [i_14 - 1] [i_14 - 1])) % (((/* implicit */int) arr_75 [i_14 - 2] [i_14 - 1]))))));
                        var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_75 [i_14 - 2] [i_14 - 1])) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_75 [i_14 + 1] [i_21]))))))) : (((((/* implicit */int) arr_8 [i_14 - 2])) ^ (((/* implicit */int) arr_8 [i_14 + 1]))))));
                        arr_79 [i_14] [i_22] [i_21] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 8567228778244630560ULL)) ? (((/* implicit */int) arr_11 [i_14 - 1])) : (((/* implicit */int) (short)1424)))) ^ (((/* implicit */int) var_9))));
                    }
                } 
            } 
            var_24 = ((/* implicit */long long int) (((-(((/* implicit */int) var_4)))) | (((/* implicit */int) (short)1418))));
            arr_80 [i_14 - 1] [i_14 + 1] |= ((/* implicit */_Bool) (~((-(((/* implicit */int) max((var_9), (var_3))))))));
        }
        arr_81 [i_14] [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_66 [i_14 - 1] [i_14] [i_14 + 1])), (370671108U))))));
        /* LoopNest 3 */
        for (unsigned int i_23 = 3; i_23 < 15; i_23 += 2) 
        {
            for (short i_24 = 0; i_24 < 17; i_24 += 4) 
            {
                for (unsigned char i_25 = 0; i_25 < 17; i_25 += 2) 
                {
                    {
                        arr_90 [(_Bool)1] [i_23] [i_24] [i_25] [i_25] = ((/* implicit */_Bool) (~(var_1)));
                        var_25 = ((/* implicit */unsigned short) arr_57 [i_14]);
                    }
                } 
            } 
        } 
    }
}
