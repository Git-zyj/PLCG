/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69886
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
    var_19 |= ((/* implicit */short) var_5);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_20 *= ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) >= (((/* implicit */int) arr_1 [14LL] [14LL]))))), (((((int) arr_0 [i_0 - 1] [8ULL])) + (((/* implicit */int) var_17))))));
        var_21 ^= ((/* implicit */short) min(((((~(-1LL))) + (min((((/* implicit */long long int) arr_1 [16U] [16U])), (1110521152091638955LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -8262562906103864506LL)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [12LL] [i_1]), (arr_1 [(_Bool)1] [(unsigned char)4]))))) * (2097151U))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    arr_12 [i_3] [i_2] [10LL] = ((/* implicit */unsigned short) var_1);
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) 4292870167U))));
                    arr_13 [(_Bool)1] [i_2] = arr_1 [i_3] [i_3];
                    var_24 = ((/* implicit */short) -9165716801791608315LL);
                    arr_14 [i_1] [i_1] = ((/* implicit */long long int) max((((5299995547670327103ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_3] [i_2] [i_3])) >> (((max((arr_11 [i_3]), (((/* implicit */unsigned int) arr_2 [i_3])))) - (1007873455U))))))));
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_1] [i_1]))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_4])) != (((/* implicit */int) arr_4 [0ULL]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_5 = 3; i_5 < 10; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 8; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        {
                            var_26 *= ((/* implicit */unsigned char) ((((arr_28 [i_5 - 2] [i_5 - 2] [(signed char)2] [i_5 - 3]) + (9223372036854775807LL))) >> (((arr_28 [i_5 + 2] [i_5 - 3] [(unsigned char)8] [i_5 - 1]) + (4446200455038465416LL)))));
                            arr_33 [i_4] [i_5 - 3] [i_4] [i_7 + 1] = ((/* implicit */unsigned short) arr_30 [i_4] [i_7] [(signed char)11] [(signed char)11] [i_4]);
                        }
                    } 
                } 
                arr_34 [i_4] [9ULL] [i_4] = ((arr_21 [i_4] [i_5] [i_5]) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [(_Bool)1] [(unsigned short)1] [i_6]))))));
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    arr_39 [(_Bool)0] [i_5 + 1] [i_4] [i_9] = ((/* implicit */short) arr_30 [i_4] [i_5] [i_6] [i_6] [i_4]);
                    arr_40 [7ULL] [i_4] = ((/* implicit */unsigned short) arr_9 [i_9] [i_6] [i_4]);
                }
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        {
                            var_27 *= ((/* implicit */short) var_7);
                            arr_46 [i_4] [i_4] [i_4] [i_10] [1] = ((/* implicit */_Bool) arr_36 [i_4] [i_5 - 2] [i_5 - 2] [i_5 - 2]);
                            var_28 -= ((/* implicit */long long int) arr_37 [i_11]);
                        }
                    } 
                } 
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                arr_49 [7ULL] [i_4] [i_4] = ((/* implicit */_Bool) var_11);
                arr_50 [i_4] [i_4] [i_5 - 2] [i_4] = ((/* implicit */unsigned short) 2097151U);
                var_29 = ((/* implicit */signed char) var_12);
                var_30 -= ((/* implicit */long long int) (_Bool)1);
            }
            /* LoopSeq 2 */
            for (long long int i_13 = 0; i_13 < 12; i_13 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    arr_55 [i_4] = ((/* implicit */short) 4292870145U);
                    arr_56 [i_4] = ((/* implicit */signed char) (-(var_14)));
                    arr_57 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_54 [i_13] [i_5 - 2] [i_4] [i_4] [i_4] [i_4]))));
                }
                var_31 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_32 [i_5 - 1] [i_5 - 2] [(_Bool)1]))));
            }
            for (long long int i_15 = 4; i_15 < 11; i_15 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 1) 
                {
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (+(2097146U))))));
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4] [i_5 - 2] [i_4] [i_15 - 3]))) + (arr_26 [i_4] [i_5 - 1] [i_15 - 4] [i_4])));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        arr_68 [i_18] [(unsigned short)10] |= (+(4292870148U));
                        var_34 = ((/* implicit */unsigned char) var_2);
                    }
                    arr_69 [(unsigned char)10] [i_5 + 1] [i_5 - 2] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_31 [i_4] [i_4] [i_5 - 2] [i_15 - 1] [i_17] [i_17])) + (((/* implicit */int) arr_31 [i_4] [i_5 + 1] [i_15] [i_15 - 4] [i_17] [i_17]))));
                    arr_70 [i_4] [(_Bool)1] [i_15] [1LL] [i_4] [0ULL] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_15 - 3] [i_5] [i_5] [i_17]))));
                    arr_71 [i_4] [i_5 - 1] [i_4] [i_4] = ((/* implicit */_Bool) var_1);
                }
                for (long long int i_19 = 0; i_19 < 12; i_19 += 3) /* same iter space */
                {
                    arr_76 [i_4] [8LL] [i_19] [i_4] [6ULL] [i_5] = ((/* implicit */unsigned short) arr_59 [i_4] [i_15] [(_Bool)1]);
                    arr_77 [i_4] [i_5] [(short)5] [i_4] [i_19] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_15 - 2] [1ULL] [3U])) != (((/* implicit */int) arr_9 [i_15 - 3] [3LL] [3LL]))));
                }
                for (long long int i_20 = 0; i_20 < 12; i_20 += 3) /* same iter space */
                {
                    var_35 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((4270794607U) >> (((4292870150U) - (4292870120U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4] [i_5]))) : (arr_65 [i_4] [(short)10] [i_15 - 3] [i_20])));
                    var_36 *= ((/* implicit */unsigned short) arr_0 [(short)6] [i_4]);
                }
                var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) arr_75 [i_15]))));
            }
        }
        for (short i_21 = 0; i_21 < 12; i_21 += 4) 
        {
            arr_83 [i_4] [i_4] [i_21] = ((/* implicit */unsigned short) arr_2 [10ULL]);
            var_38 = ((/* implicit */unsigned char) arr_22 [i_4] [i_21] [i_21] [i_4]);
        }
        arr_84 [i_4] = ((/* implicit */short) arr_32 [i_4] [i_4] [i_4]);
    }
    var_39 |= ((/* implicit */int) var_7);
}
