/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62601
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned short) min((6452029785361764136LL), (((/* implicit */long long int) 1280511584))));
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) 1280511584))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) (_Bool)1)), (-6452029785361764140LL)))));
                                arr_14 [i_4 - 1] [i_3] [(signed char)9] [i_2] [i_1] [(signed char)9] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 6452029785361764137LL)) || (((/* implicit */_Bool) 1859543079316457488ULL))))))));
                                arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((arr_12 [i_4 + 2] [i_3] [(unsigned char)2] [i_1] [i_0]) >= (((((/* implicit */_Bool) ((unsigned short) 6452029785361764116LL))) ? (max((8517325840671235694ULL), (9929418233038315922ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [i_0] [(unsigned char)7] [(unsigned char)7] [i_0] = ((((/* implicit */_Bool) -3818577568151477214LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65))) : (1859543079316457486ULL));
                    /* LoopSeq 4 */
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (signed char)-84))));
                        arr_22 [i_6] [i_1] &= ((/* implicit */unsigned char) arr_17 [i_5] [i_5] [i_0 + 3]);
                        arr_23 [i_6] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_19 [i_6] [i_5] [i_1] [(unsigned char)1]))) ? (arr_16 [i_0 + 3] [i_0 + 2] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0]))))))));
                        var_23 = ((/* implicit */long long int) ((short) var_5));
                    }
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        arr_28 [i_0 + 2] [6U] [6U] [i_0] = ((/* implicit */short) ((arr_16 [i_0 + 3] [i_0 - 1] [i_0 + 1]) <= (arr_1 [i_1])));
                        var_24 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_9 [i_1] [i_1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    }
                    for (long long int i_8 = 2; i_8 < 11; i_8 += 1) /* same iter space */
                    {
                        arr_33 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_8 + 2] [i_8 - 2])) ? (arr_9 [i_8 + 2] [i_8]) : (((/* implicit */unsigned long long int) 5899705160139227156LL))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-83)) ? (arr_20 [i_0 - 1] [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0]) : (-8125662588633760376LL)));
                        var_26 = ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned short)7] [(unsigned short)7] [i_1] [i_1] [i_0]))) + (arr_4 [i_0])));
                    }
                    for (long long int i_9 = 2; i_9 < 11; i_9 += 1) /* same iter space */
                    {
                        arr_36 [i_9] [12U] [i_5] = ((/* implicit */unsigned int) var_6);
                        var_27 -= ((/* implicit */_Bool) (short)22170);
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))) : (((unsigned int) 1859543079316457480ULL)))))));
                        arr_37 [i_9] = ((/* implicit */unsigned int) arr_21 [i_9 + 2] [(unsigned char)4] [i_9] [5ULL]);
                    }
                    arr_38 [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 15806784238186860726ULL)) ? (arr_10 [i_0] [i_0] [i_0 + 3]) : (arr_2 [i_0 + 3])));
                    arr_39 [(short)0] = ((/* implicit */short) (!(((/* implicit */_Bool) 8517325840671235696ULL))));
                    var_29 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_30 [i_1])) ? (6452029785361764143LL) : (((/* implicit */long long int) var_2))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
        {
            for (unsigned char i_12 = 3; i_12 < 22; i_12 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_13 = 0; i_13 < 25; i_13 += 4) /* same iter space */
                    {
                        arr_51 [i_10] [i_10 - 1] [i_10 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_45 [i_10] [i_10] [(short)24])) ? (((/* implicit */int) (signed char)104)) : (381264144))) & (758013778)))) ? (max((((/* implicit */unsigned int) (~(381264145)))), (((((/* implicit */_Bool) arr_50 [(short)23] [i_12 - 1] [i_10] [i_10])) ? (var_15) : (arr_43 [8] [i_10] [i_10]))))) : ((+(3263648829U)))));
                        var_30 -= ((/* implicit */unsigned char) (+((+(((((/* implicit */int) (_Bool)1)) << (((-9223372036854775785LL) - (-9223372036854775804LL)))))))));
                    }
                    for (short i_14 = 0; i_14 < 25; i_14 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned char) ((unsigned long long int) (-(((arr_45 [0LL] [0LL] [(unsigned short)23]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [(unsigned short)16] [i_10]))))))));
                        arr_56 [i_14] [i_11] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_46 [(signed char)17] [i_12] [3ULL] [i_10])) >> (((((/* implicit */int) var_4)) + (19776)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) ^ (2370905158310715488ULL)))))) ? (max((((/* implicit */unsigned long long int) (~(1031318474U)))), (9929418233038315922ULL))) : ((~(((((/* implicit */_Bool) (unsigned short)13921)) ? (18441938790856996669ULL) : (((/* implicit */unsigned long long int) 381264145))))))));
                        arr_57 [i_12] [i_12] [i_12] [i_12] &= var_11;
                        arr_58 [i_14] [i_12] [(unsigned short)9] [14] [(unsigned char)14] = (+((+(arr_45 [i_10 - 1] [i_11] [i_12]))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 1) 
                        {
                            arr_65 [10LL] [i_16] [i_15] [i_15] [8ULL] [i_11] [i_10] = ((((/* implicit */_Bool) (unsigned short)13908)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : ((+(6779528484627549819ULL))));
                            arr_66 [i_10] [i_10] [i_10] [2LL] [i_10] [i_10] &= ((/* implicit */signed char) ((int) (+(4014304326886871304LL))));
                            var_32 += ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_59 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1] [i_10])))), (((/* implicit */int) max((var_0), (arr_59 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1] [i_10]))))));
                        }
                        arr_67 [i_15] [i_11] [i_11] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(0U)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_15] [i_12 - 1] [i_10]))) & (var_14)))) ? (((((/* implicit */_Bool) arr_41 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (var_6))) : (((/* implicit */unsigned long long int) ((arr_48 [2U] [i_12] [i_11] [i_10]) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))) : (((/* implicit */unsigned long long int) (-(6452029785361764136LL))))));
                        arr_68 [i_10] [(unsigned short)5] [(unsigned short)5] [i_15] [(signed char)16] [i_11] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)245)) | (((/* implicit */int) arr_48 [(unsigned short)9] [i_12] [(unsigned short)9] [i_10]))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (9929418233038315922ULL) : (1ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 23U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528))) : (-9223372036854775785LL))))))));
                        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54562))) : (arr_45 [i_12 + 3] [i_12 - 3] [i_12 - 1]))))))));
                    }
                    var_34 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_59 [(short)20] [i_12 - 3] [(short)15] [(short)15] [i_10])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)65528))) : (((/* implicit */int) arr_44 [i_12 - 2] [i_12 - 2]))))) != (var_9)));
                    arr_69 [i_12] [i_12 + 3] [i_11] [i_10] = ((/* implicit */short) ((((/* implicit */long long int) (-((+(((/* implicit */int) var_5))))))) - (max((((((/* implicit */_Bool) -5476965165585978664LL)) ? (((/* implicit */long long int) -1291402408)) : (-774875304129922385LL))), (((1051211539465456458LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243)))))))));
                }
            } 
        } 
    } 
}
