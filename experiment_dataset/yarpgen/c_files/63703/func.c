/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63703
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((((((/* implicit */int) arr_6 [i_0] [i_1])) >= (((/* implicit */int) arr_6 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [(short)9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [8LL] [8LL]))) : (arr_3 [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_1] [i_1]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
            var_19 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
            /* LoopSeq 4 */
            for (short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                var_20 = ((/* implicit */signed char) arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]);
                /* LoopSeq 2 */
                for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    var_21 += ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) max((arr_9 [(signed char)20] [i_1] [i_2] [i_3]), (((/* implicit */signed char) arr_4 [(unsigned short)4]))))), (arr_7 [i_2 + 1] [i_1])))) << ((((+(((/* implicit */int) arr_7 [i_2 - 1] [i_1])))) - (45108)))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0)) ? (0ULL) : (((/* implicit */unsigned long long int) 4))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 1; i_4 < 19; i_4 += 2) 
                {
                    var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)1])) ? (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_4 [i_0])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_2 + 1] [i_4])) : (((/* implicit */int) arr_9 [i_2] [i_1] [i_2] [i_4]))))));
                    arr_16 [i_0] [i_1] [i_2] [i_4] [i_1] [i_4] = ((/* implicit */short) (!(arr_14 [i_2 + 1] [i_4 + 1] [i_2] [i_2 + 1] [i_0] [i_2 + 1])));
                }
            }
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                arr_19 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((arr_13 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) > (arr_13 [i_5 + 1] [i_1] [i_5] [i_5 + 1]))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((arr_8 [i_0] [i_1] [i_5 + 1] [i_6]) ? (((/* implicit */int) arr_7 [i_7] [i_1])) : (((/* implicit */int) arr_8 [(short)4] [i_1] [i_5] [i_5 + 1])))) : (((arr_8 [i_0] [i_1] [i_5] [i_1]) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [i_6])) : (((/* implicit */int) arr_8 [i_6] [i_6] [i_5 + 1] [i_6])))))))));
                            arr_26 [i_6] [i_7] [i_5] = ((/* implicit */unsigned short) ((((arr_8 [i_0] [i_1] [i_5] [i_5 + 1]) ? (((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_5] [i_6] [i_7])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [i_1] [i_5 + 1] [i_6] [i_7]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_5 + 1]))))) % (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1] [i_5 + 1])))))));
                            arr_27 [i_0] = ((/* implicit */long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)42))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) arr_1 [i_0]);
            }
            /* vectorizable */
            for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_37 [i_0] [i_8] [i_8] [i_9] [i_10] = ((/* implicit */short) arr_1 [i_0]);
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-679715668) : (((/* implicit */int) (_Bool)1))));
                            var_27 &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_0] [i_10] [i_0]))));
                            arr_38 [i_0] [i_1] [i_1] [i_0] |= ((/* implicit */_Bool) ((long long int) arr_9 [i_8] [i_1] [i_8] [i_1]));
                        }
                    } 
                } 
                arr_39 [i_8] = ((short) (short)0);
            }
            /* vectorizable */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_11]))));
                var_29 = (!(((/* implicit */_Bool) 19ULL)));
            }
        }
        for (short i_12 = 0; i_12 < 22; i_12 += 4) 
        {
            var_30 = ((/* implicit */short) max((var_30), (((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_12] [i_12] [i_0] [i_12] [i_12])) ? (((/* implicit */int) arr_4 [i_12])) : (((/* implicit */int) arr_0 [(_Bool)1] [i_12]))))) ? (((((/* implicit */_Bool) arr_23 [i_0] [i_12] [i_12] [i_0] [i_12])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_12])))) : (((/* implicit */int) arr_14 [i_0] [i_12] [i_12] [i_12] [i_0] [i_12])))))));
            var_31 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (18446744073709551593ULL) : (18446744073709551615ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) arr_5 [i_0] [i_0]))))) : (-8979171536582493316LL))));
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551594ULL)) ? (22ULL) : (19ULL)));
        }
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_32 [i_0] [i_0]))))) > (max((((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [(signed char)19])) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_0] [(unsigned char)11]))) : (arr_18 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) arr_0 [i_0] [(short)2]))))));
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    var_34 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (((/* implicit */unsigned long long int) (~(871896512)))) : (((((/* implicit */_Bool) 19ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32766))) : (0ULL)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_14] [i_13] [i_13] [i_15])) ? (arr_18 [i_0] [i_13] [i_0] [i_15]) : (arr_18 [i_0] [i_0] [i_0] [i_15])));
                        var_36 = ((/* implicit */short) ((arr_4 [i_0]) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))));
                        var_37 = ((/* implicit */short) ((((arr_47 [i_0]) <= (((/* implicit */int) arr_43 [i_13] [i_13])))) ? (((arr_8 [i_0] [(short)19] [i_14] [i_15]) ? (arr_10 [i_0] [i_15] [i_14] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_13]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6010812221344199527LL)) ? (((/* implicit */int) (short)4)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        arr_57 [i_13] [i_13] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) arr_50 [(short)9] [i_13] [i_13])))))) ? (((/* implicit */int) arr_53 [i_0] [i_13] [i_0] [i_16])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_13] [i_14])) ? (((/* implicit */int) arr_5 [i_0] [i_13])) : (((/* implicit */int) arr_36 [i_16] [i_13]))))) ? (((/* implicit */int) arr_53 [i_0] [i_13] [i_14] [i_16 + 1])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_54 [(unsigned short)17] [i_16] [i_16] [i_16])) : (((/* implicit */int) arr_0 [i_0] [i_16 + 1]))))))));
                        var_38 = min((((long long int) 8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_13])) ? (arr_34 [i_0] [i_0] [i_14] [i_16] [i_13] [i_13]) : (arr_49 [i_0] [i_13] [i_13] [i_16])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_13]))) : ((~(arr_35 [i_0] [i_0] [(unsigned char)20] [i_0] [i_0]))))));
                        var_39 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_46 [i_0] [i_13] [i_16 + 1]))));
                        arr_58 [i_0] [i_0] [i_13] [i_16] = ((_Bool) arr_10 [i_0] [i_13] [i_13] [i_16]);
                        var_40 = ((/* implicit */int) ((short) ((unsigned short) arr_5 [i_0] [i_16 + 1])));
                    }
                    var_41 ^= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_17 [i_0])) ? (arr_17 [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_17 = 2; i_17 < 10; i_17 += 2) 
    {
        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_17] [i_17 - 2] [i_17 + 1])) ? (((/* implicit */int) arr_46 [i_17 - 2] [i_17 + 1] [i_17 + 1])) : (((/* implicit */int) arr_46 [i_17] [i_17 - 1] [i_17 - 1]))));
        var_43 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_17 - 1] [i_17 - 1] [i_17 - 2] [i_17 + 1]))));
        var_44 = ((/* implicit */long long int) ((short) arr_21 [(unsigned char)0] [i_17]));
    }
    var_45 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_17))))) >= (var_12))))));
    var_46 = ((/* implicit */short) ((int) var_12));
    var_47 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) 6010812221344199527LL)) + (12ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11)))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16))));
}
