/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94440
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_10 = ((/* implicit */signed char) ((((unsigned long long int) 1210181722)) << (((var_3) - (8193382886882759164ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_1] [i_1] [(unsigned short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3200032379777542443ULL)) ? (((/* implicit */int) arr_7 [i_0] [i_3 + 1] [i_3] [5ULL] [i_3 + 1])) : (((/* implicit */int) arr_7 [(_Bool)1] [i_3 - 2] [i_3] [i_3 + 1] [i_3]))))) ? (((/* implicit */int) max((arr_7 [i_3] [i_3 - 2] [i_3] [i_3] [i_3]), (arr_7 [i_1] [i_3 - 2] [i_3] [i_3] [i_3])))) : ((~(((/* implicit */int) (_Bool)1))))));
                        var_11 ^= ((/* implicit */unsigned short) (_Bool)0);
                    }
                }
                arr_10 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(var_4)))) <= ((-((~(11568769993878329727ULL)))))));
                var_12 += ((/* implicit */signed char) ((unsigned char) var_4));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 2; i_4 < 13; i_4 += 4) 
                {
                    arr_15 [3LL] [i_1] = max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((18317528898282536709ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4])) - (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_13 = ((/* implicit */_Bool) var_1);
                        arr_18 [i_0] [i_1] [i_4] [i_4 - 2] [i_5] = ((/* implicit */int) max(((+(max((var_9), (((/* implicit */long long int) var_8)))))), (((/* implicit */long long int) ((unsigned char) min((((/* implicit */signed char) (_Bool)1)), (arr_4 [i_4] [i_1] [i_0])))))));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */int) arr_19 [6LL])) : (((/* implicit */int) (signed char)70)))) : (((/* implicit */int) (_Bool)1))));
        arr_21 [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
        /* LoopSeq 1 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            arr_24 [i_6] [(unsigned short)2] &= ((/* implicit */unsigned short) arr_22 [i_6]);
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (long long int i_9 = 3; i_9 < 18; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        {
                            arr_35 [i_8] = ((/* implicit */signed char) ((arr_29 [i_8]) ? (((/* implicit */long long int) (+(((/* implicit */int) var_7))))) : (((long long int) arr_32 [i_6] [i_7] [i_7] [i_7] [12ULL]))));
                            var_15 = (-(((/* implicit */int) var_5)));
                        }
                    } 
                } 
            } 
            arr_36 [(unsigned char)9] [i_7] [(unsigned char)9] = ((/* implicit */unsigned long long int) ((_Bool) -4692137976184976919LL));
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 3; i_11 < 17; i_11 += 2) 
            {
                for (int i_12 = 2; i_12 < 20; i_12 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 4; i_13 < 19; i_13 += 2) 
                        {
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((unsigned long long int) (signed char)-68)))));
                            arr_46 [i_6] [1LL] [i_11 - 3] [i_12] [i_13] [i_7] = ((/* implicit */_Bool) 9884604071185667730ULL);
                            var_17 -= ((/* implicit */long long int) ((signed char) 1607040647081013080ULL));
                            arr_47 [i_13] [(_Bool)1] = ((/* implicit */unsigned long long int) (+(arr_37 [i_12 - 1] [i_11 - 2] [i_7 - 1])));
                        }
                        for (unsigned char i_14 = 1; i_14 < 17; i_14 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_26 [i_7] [i_7] [i_7 - 1] [i_14 + 2]))));
                            var_19 = ((/* implicit */signed char) arr_37 [i_6] [i_7 - 1] [i_11 - 2]);
                            var_20 &= ((/* implicit */unsigned long long int) ((int) 8935141660703064064ULL));
                            var_21 = arr_41 [i_7 - 1] [i_11 + 1] [i_7 - 1] [i_12 + 1];
                            arr_50 [i_6] [i_6] [16ULL] = ((/* implicit */long long int) var_0);
                        }
                        var_22 = ((/* implicit */unsigned long long int) var_8);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                for (unsigned char i_16 = 0; i_16 < 21; i_16 += 3) 
                {
                    {
                        var_23 = ((/* implicit */long long int) (+(arr_33 [i_7] [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7 - 1])));
                        arr_56 [i_6] = ((unsigned long long int) var_7);
                    }
                } 
            } 
        }
        var_24 = ((/* implicit */unsigned long long int) arr_44 [i_6] [i_6]);
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 2) 
    {
        arr_61 [i_17] = max((((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (signed char)-61)))))), (max((max((((/* implicit */unsigned long long int) (unsigned short)37274)), (10262541552976595378ULL))), (((arr_27 [i_17] [i_17] [i_17] [i_17]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_17] [i_17]))))))));
        var_25 = ((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])) ? (arr_33 [(_Bool)1] [(_Bool)1] [i_17] [(_Bool)1] [i_17] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
        arr_62 [i_17] [5LL] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_17] [i_17])))))));
    }
    /* vectorizable */
    for (int i_18 = 2; i_18 < 20; i_18 += 2) 
    {
        /* LoopNest 2 */
        for (short i_19 = 0; i_19 < 22; i_19 += 2) 
        {
            for (long long int i_20 = 3; i_20 < 19; i_20 += 3) 
            {
                {
                    var_26 = ((int) arr_66 [i_18] [i_18]);
                    /* LoopNest 2 */
                    for (short i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            {
                                arr_75 [i_20] [i_21] [i_22] = ((/* implicit */unsigned short) ((_Bool) var_7));
                                var_27 = ((/* implicit */short) (+(((/* implicit */int) arr_68 [(unsigned char)5] [(unsigned char)5] [i_20] [i_21]))));
                                var_28 = (-(((/* implicit */int) (unsigned char)177)));
                                var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) ^ (((unsigned long long int) arr_70 [i_18] [i_19] [i_20] [i_19]))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_67 [i_18 - 1] [i_20 + 3] [i_20 - 3] [i_20 + 1]))));
                }
            } 
        } 
        arr_76 [i_18] = ((/* implicit */_Bool) arr_66 [i_18 - 1] [i_18 + 1]);
    }
    var_31 = ((/* implicit */signed char) max((var_31), (var_2)));
    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) var_0))));
}
