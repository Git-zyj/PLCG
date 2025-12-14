/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86814
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
    var_14 = ((/* implicit */int) (unsigned short)3584);
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-29)), (arr_0 [i_0])));
        var_16 *= ((/* implicit */_Bool) arr_0 [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 12; i_1 += 1) 
    {
        var_17 ^= ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3)))) % ((+(-3531922973642125847LL))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_18 ^= ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
            var_19 = ((/* implicit */int) ((((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
            arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16441))) : (arr_2 [i_2]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2))))));
            arr_9 [i_1] [i_2] = ((/* implicit */int) (unsigned short)12410);
        }
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-25006))))) / (var_12)));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) var_7))))) : (arr_14 [i_1] [3ULL] [i_1 - 1] [i_1])));
                /* LoopSeq 4 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 6782052181690332669ULL)) ? (((6782052181690332660ULL) ^ (((/* implicit */unsigned long long int) -2124884831)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                    var_23 ^= ((/* implicit */unsigned int) (-((+(11664691892019218934ULL)))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_7 = 2; i_7 < 12; i_7 += 4) /* same iter space */
                    {
                        arr_24 [i_1] [i_4] [i_1] = ((/* implicit */long long int) ((((11664691892019218955ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12410))))) << (((/* implicit */int) ((((/* implicit */_Bool) 4294965248U)) || (((/* implicit */_Bool) arr_19 [i_1] [i_3] [i_4])))))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1)))));
                        var_25 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_3]))));
                        arr_25 [i_1 - 3] [i_3] [i_4] [i_1] [i_7] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)53114)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (arr_2 [i_1]))) : (((/* implicit */unsigned long long int) 1606076644))));
                    }
                    for (int i_8 = 2; i_8 < 12; i_8 += 4) /* same iter space */
                    {
                        arr_28 [i_1] [i_3] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)55))));
                        var_26 |= ((/* implicit */long long int) var_10);
                        arr_29 [i_1] [i_3] [i_4] [i_1] [i_8 - 2] = ((/* implicit */short) var_8);
                    }
                    var_27 *= ((((/* implicit */_Bool) (short)-9860)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8)))) : (arr_21 [i_1] [i_3] [i_4] [i_6] [i_1 - 2] [i_3]));
                }
                for (int i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    arr_34 [i_1 - 1] [i_1] [(unsigned short)13] [i_9] = (((+(arr_11 [i_1]))) + (((((/* implicit */_Bool) arr_15 [i_9] [i_4] [i_4] [i_3] [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))));
                    var_28 = ((/* implicit */signed char) (_Bool)1);
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */long long int) ((signed char) arr_12 [i_1 + 1] [i_3] [i_4] [i_9]));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) var_8))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
                    {
                        var_31 *= ((/* implicit */_Bool) ((((_Bool) arr_35 [i_1] [i_3] [i_4] [i_11])) ? (arr_21 [i_1 + 3] [i_1 + 1] [i_1 + 3] [i_1 - 3] [i_1 + 3] [i_1 + 2]) : (((/* implicit */long long int) arr_32 [i_1] [i_1 + 1] [i_1 + 1]))));
                        arr_41 [i_1] [i_1] [i_1] [i_11] = ((/* implicit */unsigned short) ((1773687306) & (((/* implicit */int) (unsigned char)0))));
                        var_32 = ((/* implicit */long long int) ((short) -1565236055));
                    }
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_33 ^= ((/* implicit */unsigned int) ((int) arr_13 [i_3] [i_3]));
                    arr_44 [i_12] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-1))));
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (3176366054385601525LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49642)))))) || (((/* implicit */_Bool) ((2045U) - (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                    var_35 ^= ((/* implicit */short) var_0);
                }
                /* LoopSeq 1 */
                for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    arr_47 [i_1] = ((/* implicit */_Bool) ((unsigned int) 4294967295U));
                    var_36 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53108))) + (var_2))) + (((/* implicit */unsigned int) (-(-1565236055))))));
                    arr_48 [i_1] [i_3] [i_1] [i_13] = ((/* implicit */unsigned int) (-((~(arr_3 [i_1] [i_1])))));
                }
            }
        }
        var_37 |= ((/* implicit */short) ((((var_8) ? (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) != (((/* implicit */long long int) arr_12 [i_1] [i_1] [i_1] [i_1 + 1]))));
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_38 = ((/* implicit */unsigned short) (((((_Bool)1) || (((/* implicit */_Bool) (short)20125)))) || (((/* implicit */_Bool) var_2))));
            var_39 ^= ((/* implicit */_Bool) var_13);
            /* LoopNest 3 */
            for (unsigned short i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                for (unsigned int i_17 = 3; i_17 < 11; i_17 += 1) 
                {
                    for (unsigned short i_18 = 3; i_18 < 9; i_18 += 3) 
                    {
                        {
                            var_40 = arr_55 [i_15] [i_14] [i_15];
                            var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (_Bool)1))));
                            var_42 = ((/* implicit */int) min((var_42), ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_16] [i_15] [i_16] [i_17] [i_17 - 3] [i_18 - 1])) || (((/* implicit */_Bool) var_1)))))))));
                            var_43 = ((/* implicit */short) ((11664691892019218958ULL) <= (6782052181690332697ULL)));
                        }
                    } 
                } 
            } 
        }
        for (short i_19 = 0; i_19 < 12; i_19 += 1) 
        {
            var_44 = arr_53 [i_19];
            arr_68 [i_14] [i_14] = ((/* implicit */short) var_4);
        }
        var_45 &= ((/* implicit */int) var_2);
        var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) var_2))));
        var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20097))) : (((((/* implicit */unsigned long long int) 632219869)) * (11664691892019218959ULL)))));
        arr_69 [i_14] = ((/* implicit */unsigned int) arr_7 [i_14]);
    }
    /* LoopNest 3 */
    for (unsigned short i_20 = 0; i_20 < 17; i_20 += 4) 
    {
        for (unsigned char i_21 = 1; i_21 < 15; i_21 += 2) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        for (long long int i_24 = 0; i_24 < 17; i_24 += 1) 
                        {
                            {
                                var_48 = ((/* implicit */unsigned long long int) ((0U) - (((/* implicit */unsigned int) (((((+(((/* implicit */int) (signed char)-122)))) + (2147483647))) >> ((((-(6782052181690332677ULL))) - (11664691892019218932ULL))))))));
                                var_49 = (_Bool)1;
                                var_50 *= ((/* implicit */short) var_6);
                                var_51 ^= ((/* implicit */signed char) (((_Bool)1) ? (1433360079U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_52 = ((/* implicit */int) max((var_52), (((/* implicit */int) arr_82 [i_20] [i_20] [i_20] [i_20] [i_20]))));
                }
            } 
        } 
    } 
}
