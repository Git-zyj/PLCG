/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87336
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_7))))) ? (min((max((arr_0 [i_0]), (3023557735946955411ULL))), (min((((/* implicit */unsigned long long int) (short)-1503)), (207258411904366716ULL))))) : (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))))));
        var_10 = ((/* implicit */int) min((var_10), (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) arr_2 [i_0]))))) ? (min((536346624), (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (7290640071967235644ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [15] [i_1]))) : (14441506267358115516ULL))))));
                var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_4)) : (3029971393U)));
                arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_4)) : (arr_10 [i_0] [i_0] [i_0] [i_1])));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (short)3049))));
                    arr_14 [11U] [i_1] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
                }
                for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    arr_17 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_1])) ? (arr_10 [i_4 + 2] [i_4 + 1] [i_4 + 2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)49)))));
                    var_15 = ((((/* implicit */_Bool) arr_12 [i_0] [i_4 - 1] [i_2] [i_2] [i_0] [i_0])) ? (1264995902U) : (((/* implicit */unsigned int) var_8)));
                    arr_18 [i_0] [i_1] [i_2] [i_4 - 2] = ((((/* implicit */_Bool) var_2)) ? (1264995903U) : (((/* implicit */unsigned int) 1811368390)));
                }
            }
            for (signed char i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
            {
                arr_22 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)251)));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-15016)) : (((/* implicit */int) arr_2 [i_0]))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    for (short i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        {
                            arr_27 [i_1] [i_1] [4ULL] [i_6] [(short)9] [(short)6] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3029971393U)) ? (var_4) : (arr_24 [i_0] [i_1] [i_5] [i_7 - 1] [i_1] [(signed char)7])));
                            var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_7 + 1] [i_7 + 1] [i_7] [i_0] [i_7] [i_7 + 1] [i_7 - 1])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_26 [i_7 + 1] [i_7 - 1] [i_7] [i_0] [i_7] [i_7] [i_7 - 1])));
                            var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (short)-25864)) : (2055106114)));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) var_4))));
            }
            for (signed char i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)17284)) : (var_8)));
                    arr_35 [i_9] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)-46))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1811368368)) ? (((/* implicit */int) var_9)) : (-1608100419)));
                    arr_36 [18U] [i_1] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14441506267358115516ULL)) ? (((/* implicit */int) arr_30 [i_0] [i_1] [i_9])) : (((/* implicit */int) arr_30 [i_0] [i_1] [i_8]))));
                }
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_8] [i_0])) ? (((/* implicit */int) (short)14613)) : (((/* implicit */int) var_6)))))));
                arr_37 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) 470041734U)) : (arr_0 [i_0])));
            }
            arr_38 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (1003110300U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8678)))));
        }
    }
    for (int i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            for (unsigned int i_12 = 1; i_12 < 13; i_12 += 2) 
            {
                for (signed char i_13 = 1; i_13 < 14; i_13 += 1) 
                {
                    {
                        arr_49 [i_10] [i_10] [i_10] [i_13] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52))) : (2836382090U)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_12 + 1]))) : (12140519707301832903ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (arr_30 [i_13 + 2] [i_12] [i_12 + 1])))))));
                        var_23 ^= min((min((((/* implicit */unsigned long long int) arr_10 [i_13 + 1] [i_11] [i_12 + 1] [i_10])), (6306224366407718712ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_44 [i_13] [i_13 + 1] [i_13 + 1] [i_13 + 2])), (arr_6 [i_12 + 1] [i_12 + 3])))));
                        var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_9)) ? (318328922U) : (var_0))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_40 [i_13 - 1])), (-1969264234))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (var_5)))) ? (((((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (15835655206894904745ULL))) : (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned int) arr_24 [i_10] [i_10] [12U] [i_10] [i_10] [i_10])))))));
    }
    for (int i_14 = 0; i_14 < 19; i_14 += 1) 
    {
        var_26 ^= min((((/* implicit */unsigned long long int) min((3029971403U), (((/* implicit */unsigned int) arr_3 [i_14] [i_14]))))), (((((/* implicit */_Bool) 857879312588649513ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_14] [i_14]))) : (arr_13 [(unsigned char)2] [i_14]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_15 = 1; i_15 < 17; i_15 += 3) 
        {
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 19; i_16 += 3) 
            {
                for (unsigned char i_17 = 0; i_17 < 19; i_17 += 1) 
                {
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_15 - 1] [i_14] [i_15]))) : (3078138274U)));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3029971396U)))));
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_15 [i_14] [i_15 + 2] [i_15 - 1] [i_14])));
                        arr_58 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-29845)) ? (arr_13 [i_14] [i_14]) : (arr_13 [i_14] [i_14])));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (4290772992ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
            var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) 3029971393U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-32766))));
            arr_59 [16U] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_15 - 1] [12U] [i_15 + 1] [i_15 + 1])) ? (arr_54 [i_15 + 2] [(signed char)12] [i_15 + 1] [i_15 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20976)))));
        }
        for (unsigned short i_18 = 1; i_18 < 16; i_18 += 3) 
        {
            arr_64 [18ULL] &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((var_6), (var_6)))), (((((/* implicit */_Bool) arr_28 [i_18] [12ULL] [i_18])) ? (1264995893U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_14] [i_14] [(unsigned char)8] [i_18 + 3])))))));
            /* LoopNest 2 */
            for (short i_19 = 2; i_19 < 17; i_19 += 1) 
            {
                for (unsigned long long int i_20 = 1; i_20 < 17; i_20 += 2) 
                {
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (arr_68 [i_14] [i_14] [i_14])))) ? (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-30)) : (arr_52 [i_18 + 3]))))));
                        var_33 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)32266))))) ? (((((/* implicit */_Bool) arr_7 [i_18] [4U] [i_14])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_18 + 3] [i_18 + 3] [i_18 + 3] [10U]))) : (3029971403U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1585)) ? (arr_24 [i_14] [i_18] [i_19 + 1] [i_18] [16U] [i_20]) : (((/* implicit */int) var_9)))))))));
                    }
                } 
            } 
        }
        var_34 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (unsigned short)37760)), (6306224366407718708ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_52 [i_14]) : (var_4))))));
        var_35 = ((/* implicit */short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_25 [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) arr_25 [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_25 [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) var_6))))));
    }
    var_36 = ((/* implicit */unsigned int) var_9);
}
