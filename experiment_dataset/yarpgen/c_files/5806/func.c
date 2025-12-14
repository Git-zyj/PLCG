/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5806
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [0LL] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((4310158733957566394LL) + (-5972906339384569550LL))) + (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_5)))))))) + ((+((+(14531285214488073860ULL)))))));
                            var_15 = ((/* implicit */long long int) arr_7 [(_Bool)1] [i_1 - 1]);
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) << (((min((((/* implicit */unsigned long long int) ((short) 18446744073709551603ULL))), (((1ULL) * (((/* implicit */unsigned long long int) arr_8 [i_0])))))) - (70608456ULL)))));
                arr_14 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1238099740U)) ? (((/* implicit */unsigned int) var_1)) : (var_8)))) : (arr_9 [i_1 + 1])))) ? (((/* implicit */unsigned long long int) arr_4 [16LL])) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [3] [i_0])) ^ (var_1)))) ? (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) arr_4 [i_1])) : (arr_0 [8ULL] [i_1 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 27ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)32767)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) (+(min((2620777979U), (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                var_17 |= ((/* implicit */unsigned long long int) (((!(((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_3 [i_4] [i_5]) : (var_1))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            arr_25 [0U] [i_7] [i_7] = arr_24 [i_6];
            arr_26 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (arr_21 [i_7]) : (7982513906437094222LL))) > (((/* implicit */long long int) ((1254452960) >> (((var_12) + (617467394)))))))))) / (min((((/* implicit */long long int) arr_6 [i_7] [i_6])), (arr_9 [i_6])))));
            arr_27 [i_6] [i_6] = ((/* implicit */_Bool) (~(((var_3) - (((/* implicit */unsigned long long int) var_7))))));
            var_18 -= ((/* implicit */unsigned int) ((((arr_11 [i_6] [i_7] [i_7] [i_6]) / (arr_11 [i_6] [i_6] [i_7] [(_Bool)0]))) * (((((/* implicit */unsigned long long int) ((arr_3 [i_6] [i_6]) / (((/* implicit */int) (short)-16436))))) * (18266713425775256203ULL)))));
        }
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9] [i_9]))) : (((((/* implicit */_Bool) var_10)) ? ((~(0ULL))) : (((/* implicit */unsigned long long int) (+(var_4))))))));
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)16411)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((arr_32 [i_6] [(short)12]) | (arr_2 [i_6] [i_6]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))))) : (((/* implicit */long long int) var_7))));
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 137438953456LL))))) : (((((arr_6 [i_6] [i_6]) || (((/* implicit */_Bool) (short)1288)))) ? (((/* implicit */int) (_Bool)1)) : (var_12)))));
                            arr_38 [i_8] [i_6] = ((((((/* implicit */long long int) ((/* implicit */int) arr_30 [(_Bool)0] [i_11]))) & (var_14))) >= (((((/* implicit */long long int) var_1)) | (var_4))));
                        }
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) -6433666207633547346LL))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 16; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 3; i_14 < 15; i_14 += 2) 
            {
                {
                    arr_51 [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((arr_48 [i_12] [i_13]) ? (((/* implicit */long long int) var_12)) : (min((-3157350869362175434LL), (-137438953462LL)))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (max((((((/* implicit */_Bool) arr_18 [i_14 - 2] [i_12])) ? (((/* implicit */unsigned long long int) var_8)) : (var_6))), (((/* implicit */unsigned long long int) (+(524288LL))))))));
                    /* LoopNest 2 */
                    for (short i_15 = 1; i_15 < 15; i_15 += 1) 
                    {
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            {
                                arr_57 [i_12] [i_12] [i_12] [i_14] [i_14] [i_15] [i_16] = var_3;
                                arr_58 [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_6) : ((+((+(var_13)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 4; i_17 < 13; i_17 += 1) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_48 [i_14 - 1] [i_14 - 1])) < (((/* implicit */int) var_9)))))) == (min((var_14), (((/* implicit */long long int) arr_42 [i_14 - 2]))))));
                        var_25 *= ((/* implicit */unsigned long long int) ((unsigned int) min((((var_13) + (((/* implicit */unsigned long long int) (-2147483647 - 1))))), (((/* implicit */unsigned long long int) -1)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 2) 
                        {
                            var_26 = var_4;
                            var_27 *= ((/* implicit */_Bool) arr_45 [i_12] [i_14] [i_14]);
                        }
                        /* vectorizable */
                        for (int i_19 = 1; i_19 < 13; i_19 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((arr_11 [i_12] [i_12] [i_12] [i_12]) >> (0U)))));
                            var_29 = ((/* implicit */short) (~(((/* implicit */int) (short)-2))));
                            arr_68 [i_12] [i_12] [i_14 - 2] [i_19] = ((/* implicit */unsigned long long int) ((((arr_65 [i_14 + 1] [i_17] [i_19 + 3]) + (9223372036854775807LL))) >> (((/* implicit */int) var_9))));
                            arr_69 [i_14 + 1] = ((/* implicit */short) ((var_2) % (var_2)));
                            arr_70 [i_17 + 2] = ((/* implicit */int) (!(((/* implicit */_Bool) 2147483646))));
                        }
                        arr_71 [i_17 + 3] [i_17] [i_14] [i_13] [i_12] [i_12] |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)26721))) / (3747446978184636966LL)));
                    }
                    var_30 = ((/* implicit */long long int) max((var_11), (((/* implicit */unsigned long long int) ((((var_10) << (((((var_7) + (292014634))) - (38))))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))));
                }
            } 
        } 
        arr_72 [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_4)) < (((var_3) << (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (arr_5 [i_12])))))));
        arr_73 [i_12] = ((((/* implicit */_Bool) (short)2)) ? (-1LL) : (((/* implicit */long long int) 170846994U)));
        var_31 += ((/* implicit */short) var_12);
    }
    for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 2) 
        {
            for (int i_22 = 2; i_22 < 15; i_22 += 3) 
            {
                {
                    arr_84 [i_20] [i_22] [i_20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_22 - 2] [i_21])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32762))))))));
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) 419290861515241350LL))));
                    var_33 = ((/* implicit */short) var_2);
                    arr_85 [i_20] [i_20] [i_22] = ((/* implicit */unsigned int) (-((+(var_2)))));
                }
            } 
        } 
        var_34 *= ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_20] [i_20])) ^ (var_1)))))))));
        var_35 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) -875538066)) ? (arr_18 [i_20] [i_20]) : (var_11))) & (((/* implicit */unsigned long long int) min((((arr_74 [i_20]) & (((/* implicit */int) (short)-32767)))), (((/* implicit */int) var_9)))))));
    }
}
