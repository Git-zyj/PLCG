/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91825
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
    var_15 += ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)38747))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) var_12)) % (((((/* implicit */_Bool) 6619052248957122284ULL)) ? (3723367685874443986LL) : (-3723367685874443986LL)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) < (var_14))))))) ? (((arr_1 [i_0] [i_0]) ^ ((~(arr_2 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1)))) == (((((/* implicit */int) var_7)) << (((var_12) + (494345994)))))))))));
        var_17 &= ((/* implicit */unsigned int) max(((((~(arr_0 [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((unsigned int) (signed char)-57))))), (max((((arr_0 [i_0] [(short)0]) - (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_8))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_4] [i_2] [(short)10] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? ((((_Bool)1) ? (-390987397) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((signed char)50), (((/* implicit */signed char) (_Bool)1))))))) : (((/* implicit */int) max((min((var_10), (((/* implicit */short) (_Bool)1)))), (var_10))))));
                                arr_19 [i_2] [i_1] [i_2] [i_3] [2LL] [(unsigned char)10] = ((/* implicit */short) (~(((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) max((((/* implicit */int) ((var_12) >= (2043485266)))), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_5)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 3) 
    {
        arr_22 [i_5] = ((/* implicit */unsigned int) (~(arr_21 [i_5])));
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) <= (arr_20 [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 13; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 3; i_8 < 13; i_8 += 1) 
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) -3723367685874443987LL))));
                        arr_31 [i_5] [i_7] [i_5] = ((/* implicit */signed char) ((arr_29 [i_5 + 1] [i_5 + 2]) ? (1241422881U) : (((/* implicit */unsigned int) 1005210049))));
                    }
                    for (short i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            arr_37 [i_5] [i_7] [i_5] = (!(((/* implicit */_Bool) 6ULL)));
                            arr_38 [i_6] [i_9] [i_7] [i_6] [i_6] &= ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) 3723367685874443957LL)) % (arr_20 [i_6])))));
                            var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1292)))))));
                            var_21 = ((/* implicit */_Bool) (-(arr_35 [i_5] [i_5] [7LL] [i_5] [i_10] [i_5 + 1] [i_6 + 2])));
                        }
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) 4093146292591099944LL))));
                        arr_39 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_26 [i_6 + 3] [(_Bool)1] [i_5 + 4])) * (arr_33 [i_5] [i_5] [i_6 - 3] [i_5] [i_6 - 3] [i_5 + 1])));
                    }
                    arr_40 [i_5] [i_6] [i_7] = var_9;
                    /* LoopSeq 1 */
                    for (int i_11 = 1; i_11 < 15; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
                        {
                            arr_49 [i_12] [i_12] [7ULL] [3U] [i_5] [i_12] = ((/* implicit */unsigned int) ((arr_32 [i_7]) > (((/* implicit */unsigned long long int) 2U))));
                            var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_11] [14ULL]))) + (var_14)))) ? (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) var_14))));
                            arr_50 [i_5 - 1] [3ULL] [i_6] [i_6 - 2] [i_5] [7ULL] [i_12] = 3723367685874443957LL;
                        }
                        for (int i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
                        {
                            arr_53 [i_5] [i_5] [(unsigned short)7] [i_11 - 1] [i_7] [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_32 [(short)15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_48 [(_Bool)1] [i_6] [11U] [i_11] [i_13]))) >= (((/* implicit */unsigned long long int) arr_44 [i_5] [i_5] [i_11] [i_5]))));
                            var_24 = (-(((/* implicit */int) var_10)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((unsigned long long int) (~(((/* implicit */int) var_11)))));
                            var_26 = ((/* implicit */signed char) (-(arr_42 [i_11] [i_11 - 1] [i_5] [i_11 - 1])));
                            var_27 = ((int) -6813728094047719837LL);
                        }
                    }
                    arr_57 [(short)0] [i_5] [(signed char)12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(3800879986184584117LL)))) ? ((-(arr_33 [i_5] [i_7] [i_6] [i_5 - 1] [i_5 - 1] [i_5]))) : (((/* implicit */unsigned long long int) var_13))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 4) 
                    {
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                        {
                            {
                                arr_64 [(signed char)5] [i_6 - 2] [i_7] [i_7] [i_5] [i_7] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)26788))))) >> (((((((/* implicit */unsigned int) arr_54 [i_5 - 1] [i_6 + 1] [i_7] [i_5 - 1] [i_15] [i_16])) & (4294967293U))) - (3478337678U)))));
                                arr_65 [i_5] [i_6] [i_15] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3723367685874443986LL))));
                                arr_66 [4U] [i_15] [i_15] [i_15] [i_5] [i_5] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_13)))) ? ((~(var_14))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_17 = 1; i_17 < 15; i_17 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_18 = 2; i_18 < 14; i_18 += 4) 
        {
            arr_72 [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */long long int) (~(var_12)))) & ((~(3723367685874443968LL)))));
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 16; i_19 += 4) 
            {
                for (unsigned int i_20 = 1; i_20 < 14; i_20 += 1) 
                {
                    {
                        var_28 = ((/* implicit */int) ((min((7048613965754018638ULL), (((/* implicit */unsigned long long int) 997106058U)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_25 [i_20 + 2] [6] [i_20]), (arr_25 [i_20 - 1] [i_20] [i_20])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_21 = 0; i_21 < 16; i_21 += 2) 
                        {
                            var_29 = ((/* implicit */int) ((((/* implicit */long long int) var_6)) / (((((/* implicit */_Bool) 3723367685874443957LL)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-58)))))));
                            var_30 = ((/* implicit */_Bool) (~((+(4294967283U)))));
                        }
                    }
                } 
            } 
        }
        var_31 += ((/* implicit */unsigned int) arr_59 [1] [7] [i_17 + 1] [i_17 - 1]);
    }
    for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 4) 
    {
        arr_84 [i_22] [i_22] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_80 [14] [14])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_4))));
        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) min((((/* implicit */unsigned int) var_11)), (((unsigned int) (unsigned short)38733)))))));
    }
}
