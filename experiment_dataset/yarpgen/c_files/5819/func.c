/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5819
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
    var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-599)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11599))) : (383255318U)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 += ((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)85)), ((unsigned char)104)));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) max((arr_6 [i_0] [i_1] [i_2] [i_2]), (arr_6 [i_2] [i_1] [i_1] [i_1]))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_7 [i_0] [17] [i_1] [(unsigned char)16]), (min((((/* implicit */unsigned short) (signed char)-91)), (arr_7 [i_0] [3LL] [i_2] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_0] [i_1] [i_2]), (((/* implicit */unsigned short) arr_4 [i_0] [i_2]))))) || (((/* implicit */_Bool) 1048575U)))))) : (min((((((/* implicit */_Bool) (unsigned short)23882)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [12U]))))), (min((arr_2 [i_0] [i_1]), (((/* implicit */long long int) var_3))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (short i_3 = 1; i_3 < 12; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 1) 
        {
            for (signed char i_5 = 2; i_5 < 13; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) 1026941992U);
                                arr_24 [i_3 + 4] [i_4] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (-(13286936223711232462ULL))))) ? (((/* implicit */long long int) ((arr_1 [i_4 + 1]) ? (((/* implicit */int) arr_1 [i_4 + 1])) : (((/* implicit */int) arr_18 [i_4 + 1]))))) : (4684446980235689503LL)));
                                var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((1026941992U), (((/* implicit */unsigned int) (unsigned short)8))))) ? (((((/* implicit */_Bool) (unsigned short)47958)) ? (arr_23 [i_3 + 1]) : (arr_23 [i_3 - 1]))) : (((/* implicit */unsigned int) (+(439143000))))));
                                arr_25 [i_4] [i_3 + 2] [i_3 + 1] [i_6] [i_7 + 1] = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5481083706229798974LL)) ? (3607205244U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55891))))))))), (((((/* implicit */_Bool) arr_13 [(unsigned char)13])) ? (((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_5 - 2] [i_5 - 2])) ? (383255314U) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6] [i_3 + 2]))))));
                            }
                        } 
                    } 
                    arr_26 [i_3] [i_4] [i_5 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)71))) / (3911711978U))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8684)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)98)))))))) ? (((/* implicit */unsigned long long int) max((arr_19 [i_3 - 1] [i_4]), (((/* implicit */unsigned int) (((_Bool)0) || (((/* implicit */_Bool) 9223372036854775807LL)))))))) : (min((arr_11 [i_4 + 1]), (arr_11 [i_5 - 2])))));
                    arr_27 [i_4] [i_4] [i_5 - 2] [i_4] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) 449985609U)), (arr_12 [i_4 + 1] [i_4 + 1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21423)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (signed char)60))))))))));
                    arr_28 [(_Bool)1] [12U] [i_5 + 2] |= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_0 [i_3 - 1] [i_5 + 2]))))));
                }
            } 
        } 
        arr_29 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_20 [i_3] [i_3] [i_3 + 2] [i_3 + 4] [i_3 + 1] [15LL]))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_3 + 4]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3 + 2] [i_3 + 2] [i_3 + 1] [(_Bool)1] [i_3] [i_3 - 1]))))))) : (min((((/* implicit */long long int) arr_20 [i_3 - 1] [i_3 + 3] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 - 1])), ((-9223372036854775807LL - 1LL))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned int) arr_13 [i_8])) : (((((/* implicit */_Bool) 2585631028U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [3LL] [i_8]))) : (var_8)))))), (((((/* implicit */_Bool) 10093830545182109616ULL)) ? (max((arr_22 [i_8]), (((/* implicit */long long int) (signed char)-86)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) : (var_5))))))));
        arr_32 [i_8] [i_8] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [0LL] [12ULL] [i_8] [0LL]))))), (((((/* implicit */_Bool) arr_19 [i_8] [(unsigned short)0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (var_4) : (((/* implicit */int) (signed char)75))))) : (arr_21 [i_8] [i_8] [(short)11] [i_8] [i_8])))));
    }
    /* vectorizable */
    for (short i_9 = 2; i_9 < 20; i_9 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_9 + 1])) ? (((/* implicit */int) arr_33 [i_9 + 2])) : (((/* implicit */int) arr_33 [i_9 - 1]))));
        arr_36 [i_9] = ((/* implicit */signed char) arr_33 [i_9]);
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
        {
            for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)54580))) != (-8135004435468352053LL)))) >> (((((/* implicit */int) arr_34 [i_9 + 1])) + (23471)))));
                    arr_42 [i_9 - 1] [10U] [10U] [i_9 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)85))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22704))) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_11] [i_11 - 1] [i_9 - 1])))));
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        arr_45 [i_9] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)6))));
                        var_21 ^= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) -1357886683)) ? (((/* implicit */int) arr_34 [i_11 + 1])) : (((/* implicit */int) arr_39 [i_12] [i_12] [i_12] [i_12])))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        arr_49 [4U] [(short)14] [6ULL] [i_13] [(unsigned char)2] [i_13] = (~(arr_46 [i_9 - 2] [i_10] [i_11 + 2] [i_13]));
                        arr_50 [i_9] [i_13] [i_11 - 2] [i_13] = (-(arr_43 [i_9 + 2] [i_10] [i_9 + 2] [i_13]));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 1; i_14 < 18; i_14 += 3) 
                    {
                        for (long long int i_15 = 0; i_15 < 22; i_15 += 2) 
                        {
                            {
                                arr_58 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */long long int) var_5)) : (6615981489741548211LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -700344204)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-85)))))));
                                arr_59 [i_9] [i_9 - 1] [i_10] [i_10] [(unsigned char)5] [i_14 + 3] [i_14] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_34 [i_14 + 1])) + (2147483647))) << (((arr_56 [i_9] [i_9] [i_9] [i_9 + 1]) - (1004218712)))));
                                var_22 = (!((!(((/* implicit */_Bool) (short)29563)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_16 = 1; i_16 < 21; i_16 += 2) 
        {
            arr_62 [i_9 + 1] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_16 + 1])) || (((/* implicit */_Bool) 17382528394824533413ULL))));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_56 [i_9] [i_16 + 1] [i_9] [i_16 + 1])))))))));
            /* LoopNest 2 */
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                for (short i_18 = 2; i_18 < 21; i_18 += 2) 
                {
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((+(arr_37 [(short)13] [i_17 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_16 + 1] [i_17 - 1] [i_18 - 1])))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) 383255317U))))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5LL)) ? (((/* implicit */int) arr_52 [i_9 + 2] [i_16] [i_16 + 1] [i_16] [i_16] [i_16])) : (((/* implicit */int) arr_52 [(_Bool)1] [i_9 - 1] [i_16 + 1] [i_16] [i_16] [i_18 - 1]))));
                        arr_67 [i_16] [i_16] [i_16] [(unsigned char)13] = ((/* implicit */_Bool) ((2147483637) * (((/* implicit */int) (_Bool)1))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_18 - 2] [i_18] [i_18] [i_18 - 1] [i_17 - 1] [i_9 - 1])) ? (arr_48 [i_18 + 1] [i_18] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_9 - 1]) : (arr_48 [i_18 - 1] [i_18] [(short)8] [i_18] [i_17 - 1] [i_9 - 2])));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_19 = 2; i_19 < 19; i_19 += 4) 
            {
                for (short i_20 = 0; i_20 < 22; i_20 += 4) 
                {
                    for (unsigned short i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) ((arr_64 [i_16 - 1] [i_9 + 1] [i_19 + 2]) ? (((/* implicit */int) arr_64 [i_16 - 1] [i_9 - 2] [i_19 - 1])) : (((/* implicit */int) arr_64 [i_16 + 1] [i_9 - 2] [i_19 - 2]))));
                            var_29 = ((((/* implicit */_Bool) arr_77 [i_9 + 1] [i_19 + 3] [i_21] [i_9 + 1] [3] [i_9 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))) : (arr_77 [i_9 - 2] [i_19 + 1] [i_9 - 2] [i_9 - 1] [i_21] [i_9 - 1]));
                            var_30 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65534)) ? (3220834784U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_19 - 2] [i_19 - 1] [i_19] [(_Bool)1] [i_19 + 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_9 - 1]))) : (8276211281275222007LL)));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_19 + 1] [i_16 + 1] [i_16 - 1] [i_9 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)24368)))) : ((~(3911711992U)))));
                        }
                    } 
                } 
            } 
        }
        arr_78 [i_9 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 2]))) : (arr_48 [i_9] [i_9 - 1] [12LL] [i_9] [i_9 + 1] [i_9 + 1])));
    }
    /* vectorizable */
    for (short i_22 = 0; i_22 < 16; i_22 += 3) 
    {
        var_32 = ((arr_55 [i_22] [i_22] [(short)8] [i_22]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_22] [i_22] [i_22] [i_22] [18LL] [i_22]))));
        var_33 *= ((/* implicit */signed char) ((arr_75 [i_22] [i_22] [(unsigned short)16] [i_22] [(signed char)10] [i_22] [i_22]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_22] [i_22] [i_22] [i_22])))));
    }
}
