/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90505
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) min((((/* implicit */int) min(((short)14336), (((/* implicit */short) (!(((/* implicit */_Bool) -1531193377)))))))), (-1531193377)));
        arr_2 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1531193376)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0]))) / (arr_1 [i_0]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) ((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = (signed char)-13;
                    var_14 = ((/* implicit */unsigned long long int) min((min((((((/* implicit */int) (unsigned char)252)) * (((/* implicit */int) arr_0 [i_0] [i_2])))), (((/* implicit */int) ((unsigned char) arr_1 [i_0]))))), (((int) ((var_6) ? (var_3) : (((/* implicit */long long int) arr_5 [i_0] [i_0 - 1] [i_0])))))));
                    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((_Bool) arr_4 [i_0] [i_1] [i_2])) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_2])) % (((/* implicit */int) (short)9473))))))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            var_16 -= ((/* implicit */_Bool) arr_12 [i_2] [i_4]);
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_6))));
                            var_18 = ((/* implicit */_Bool) 126100789566373888ULL);
                        }
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57344)) <= (((/* implicit */int) (signed char)6))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_2] [i_1 - 1])) ? (((/* implicit */long long int) min((((var_5) + (((/* implicit */int) arr_3 [i_3])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0))))))) : ((+(((((/* implicit */long long int) 427982770)) + (var_3))))))))));
                    }
                    for (unsigned short i_5 = 3; i_5 < 20; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 3) 
                        {
                            var_21 ^= ((/* implicit */signed char) var_4);
                            arr_19 [i_0 - 1] [i_1] [i_2] [i_0] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */int) (signed char)105)) << ((((+(126100789566373911ULL))) - (126100789566373898ULL)))));
                            arr_20 [i_5 + 1] [i_1 - 2] [i_2] [i_0] [i_6 + 4] = ((/* implicit */_Bool) ((((int) arr_9 [i_0] [i_6 + 3])) ^ (((((/* implicit */_Bool) var_10)) ? (arr_9 [i_0] [i_6 - 1]) : (arr_9 [i_0] [i_6 + 3])))));
                        }
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            arr_23 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_1] [i_2] [i_5 - 1] [i_7])) || (((/* implicit */_Bool) arr_3 [i_0 - 1])))));
                            var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1760907665)) - (9223372036854775807LL)))), (((((/* implicit */_Bool) arr_13 [i_0 - 1] [(_Bool)1] [(_Bool)1] [i_5 + 2] [i_5] [i_0] [i_7])) ? (arr_16 [i_1] [i_1] [i_5 - 3] [i_0]) : (arr_16 [i_0] [i_0] [i_0] [i_0])))));
                        }
                        var_23 = ((/* implicit */short) max((((((/* implicit */int) ((((/* implicit */long long int) var_4)) == (var_3)))) | (((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_1 - 2])))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16083)) || (((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_2])))))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((int) -1537211458)))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_18 [i_0] [i_8] [i_0] [i_8] [i_0 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 1]))) != (min((126100789566373888ULL), (((/* implicit */unsigned long long int) arr_22 [i_8])))))))) : (max((((/* implicit */unsigned int) arr_11 [i_8] [i_8] [i_0] [i_0] [i_0 - 1] [i_0])), (var_0)))));
            var_26 = ((/* implicit */long long int) arr_11 [i_0] [i_8] [i_0] [i_0] [i_0] [i_0]);
        }
    }
    for (unsigned char i_9 = 3; i_9 < 12; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 1; i_10 < 11; i_10 += 2) 
        {
            for (signed char i_11 = 1; i_11 < 12; i_11 += 3) 
            {
                {
                    var_27 *= ((/* implicit */signed char) ((((unsigned int) arr_11 [i_9] [i_9] [i_10 + 1] [i_10] [i_11 + 1] [i_11])) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min(((unsigned char)106), (((/* implicit */unsigned char) (signed char)102))))) >= (((int) arr_31 [i_10]))))))));
                    arr_33 [i_10] = 4294967295U;
                    var_28 = ((/* implicit */short) arr_31 [i_9]);
                    arr_34 [i_9] [i_10] [i_10] [i_11] = ((/* implicit */short) (((+(((/* implicit */int) arr_10 [(unsigned char)8] [i_10 - 1] [i_11 + 1] [i_11] [i_11 + 1] [i_11 - 1])))) > (((((/* implicit */int) (unsigned char)17)) / (((/* implicit */int) arr_10 [8] [i_10] [i_11] [i_10 - 1] [(signed char)4] [i_11 + 1]))))));
                }
            } 
        } 
        var_29 = ((((var_3) > (arr_31 [i_9]))) ? (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) - (var_0))) != (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (((/* implicit */int) var_12)));
        var_30 *= ((/* implicit */unsigned long long int) min((((var_7) ? ((~(var_5))) : (((/* implicit */int) ((arr_28 [i_9] [i_9]) < (((/* implicit */long long int) ((/* implicit */int) arr_15 [(short)13] [i_9 - 2] [i_9 - 1] [i_9])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18320643284143177745ULL)) ? (((/* implicit */unsigned long long int) arr_17 [i_9] [i_9] [i_9] [i_9 - 1] [(signed char)1])) : (arr_16 [i_9] [i_9] [i_9 + 1] [10U])))) ? (((((/* implicit */int) arr_32 [i_9] [i_9])) + (arr_5 [i_9] [i_9 + 1] [i_9 + 1]))) : (((/* implicit */int) ((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104))))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_12 = 4; i_12 < 15; i_12 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 16; i_13 += 3) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) var_8))));
                        var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) ((-1569873194676046222LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((((_Bool)0) ? (arr_39 [i_12] [i_13] [i_13]) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) max((3863074799U), (((/* implicit */unsigned int) 63))))))) - (max((((((/* implicit */_Bool) arr_24 [i_12] [i_13] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_25 [i_12] [i_13] [i_12]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_13])))))))));
                        var_33 = arr_42 [i_12 - 2] [i_13] [i_14] [i_15];
                        var_34 = ((/* implicit */short) ((((/* implicit */long long int) ((((unsigned int) arr_7 [i_12])) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_12])) | (((/* implicit */int) arr_24 [i_12] [i_14] [i_15])))))))) + (((((/* implicit */_Bool) 2358341861U)) ? (var_3) : (((/* implicit */long long int) arr_17 [i_15] [i_13] [i_13] [i_15] [i_14]))))));
                    }
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_11 [i_12 - 4] [i_12 - 3] [i_12 + 1] [i_12 - 3] [i_12] [i_12]), (arr_11 [i_12 - 2] [i_12 - 2] [i_12 + 1] [i_12 - 2] [i_12] [i_12]))))) : (arr_12 [i_13] [i_13])));
                    arr_44 [i_12] [i_13] [i_13] [i_13] = ((/* implicit */int) -5408597547740468457LL);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_16 = 4; i_16 < 15; i_16 += 4) 
        {
            arr_49 [i_12] [i_16 - 3] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_12] [i_16] [i_16] [i_16] [i_12 - 2] [i_12 - 4])) ? (((/* implicit */int) arr_11 [i_12] [i_12] [i_16] [i_16] [i_12 - 4] [i_12 - 4])) : (((/* implicit */int) arr_11 [8ULL] [i_16] [i_12] [i_16] [i_12 - 2] [i_12])))));
            var_36 = ((/* implicit */unsigned char) var_6);
            var_37 = ((/* implicit */short) var_4);
        }
        /* vectorizable */
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            var_38 = ((/* implicit */_Bool) ((arr_41 [0] [0]) / (arr_41 [0U] [0U])));
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_39 |= ((/* implicit */short) -1513078781);
                var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) (unsigned char)182))));
                /* LoopSeq 1 */
                for (unsigned char i_19 = 0; i_19 < 16; i_19 += 3) 
                {
                    var_41 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_45 [i_19] [i_12] [i_12]))));
                    var_42 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (var_4))))));
                    arr_59 [i_18] [i_12] [i_12] [i_18] = ((/* implicit */int) var_8);
                    arr_60 [(_Bool)0] [i_19] [i_18] [i_19] [i_19] [i_19] = ((/* implicit */unsigned int) arr_24 [i_12] [i_18] [i_19]);
                }
                var_43 |= ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
            }
            var_44 = ((/* implicit */unsigned long long int) (+(arr_46 [i_12])));
            var_45 -= ((/* implicit */unsigned int) 9702258463074838182ULL);
            arr_61 [i_12] [i_17] = arr_10 [(_Bool)0] [i_12] [i_12] [i_12] [i_17] [i_17];
        }
        /* vectorizable */
        for (unsigned char i_20 = 0; i_20 < 16; i_20 += 3) 
        {
            var_46 = var_1;
            var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_12] [i_20] [i_12] [i_12] [i_12 + 1] [i_12 + 1])) ? (((/* implicit */int) ((var_3) >= (((/* implicit */long long int) arr_57 [i_20] [i_12] [i_12]))))) : (((/* implicit */int) arr_53 [i_12] [i_12] [i_12 - 3]))));
            var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)51267))));
            var_49 = ((/* implicit */unsigned short) arr_26 [i_12] [i_12]);
        }
    }
    var_50 = ((/* implicit */unsigned int) ((short) var_5));
    var_51 = ((/* implicit */_Bool) var_9);
}
