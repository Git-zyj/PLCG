/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70947
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
    for (short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) (signed char)76);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) -976776326)) == (max((((/* implicit */long long int) var_2)), (-5950862079946392542LL))))));
        var_12 -= ((/* implicit */_Bool) ((unsigned char) max((((((/* implicit */_Bool) arr_0 [(signed char)18])) ? (2536615458922677706LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((signed char) -2536615458922677707LL))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) ((2536615458922677706LL) > (-2536615458922677689LL))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0 - 2] [i_0] [i_0 - 2] [i_2] [i_3] [i_4] = ((/* implicit */long long int) max((((unsigned long long int) max((var_10), (var_10)))), (((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) 2536615458922677706LL))))))));
                                var_14 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) var_1))))) ? (max((((/* implicit */long long int) 3167735639U)), (2536615458922677709LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)0))))))), (min((((/* implicit */unsigned long long int) ((int) arr_6 [i_3]))), (18445013149626456663ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [i_0] [0ULL] |= ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4ULL)) && (((/* implicit */_Bool) (short)-1937)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [(unsigned char)10] [(unsigned char)10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [10]))) : (min((((/* implicit */unsigned long long int) arr_9 [i_0 + 3] [i_0 - 2] [i_0] [i_0])), (var_3)))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) (~(((int) var_5))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)254)) >= (-1002516459))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned char) ((short) (_Bool)1));
                arr_26 [i_6] [i_6] = var_8;
            }
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
            {
                var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)50)) ^ (((/* implicit */int) (signed char)62))));
                arr_31 [i_5] [i_6] [(signed char)5] [i_5] = ((/* implicit */unsigned short) ((arr_20 [i_5] [i_6] [i_6]) >= (((/* implicit */unsigned long long int) ((int) -5980669615659977909LL)))));
                var_19 = ((unsigned long long int) var_1);
                arr_32 [i_6] = ((((/* implicit */_Bool) 2536615458922677709LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) : (arr_25 [i_6]));
            }
            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_10 = 3; i_10 < 23; i_10 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        arr_41 [i_5] [i_6] [i_6] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))) % (arr_20 [i_5] [(unsigned char)2] [i_10])));
                        arr_42 [i_6] [i_6] [i_6] [i_9] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)24178))) ? (arr_27 [i_5] [i_5] [i_6] [i_10 - 1]) : (((((/* implicit */_Bool) arr_36 [i_6] [i_6] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1936))) : (var_2)))));
                        arr_43 [i_5] [(unsigned char)13] [i_6] = ((/* implicit */unsigned int) arr_30 [i_6] [i_6] [i_11]);
                    }
                    for (short i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((signed char) 1410956762U))) : ((+(arr_29 [i_5] [i_5] [i_9] [i_10])))));
                        arr_48 [i_5] [i_6] [i_9] [i_10] [i_12] [i_5] [i_5] = ((/* implicit */unsigned int) ((unsigned short) ((((((/* implicit */int) arr_24 [i_6] [i_6] [i_6] [i_6])) + (2147483647))) >> (((var_10) - (1157526864U))))));
                    }
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */_Bool) 6575145597301778199ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1937))) : (3883828146U)))));
                }
                /* LoopNest 2 */
                for (signed char i_13 = 2; i_13 < 21; i_13 += 1) 
                {
                    for (short i_14 = 2; i_14 < 24; i_14 += 1) 
                    {
                        {
                            arr_54 [i_6] = ((/* implicit */signed char) ((short) ((signed char) (short)32767)));
                            var_22 |= ((/* implicit */unsigned long long int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 1) 
                {
                    for (unsigned char i_16 = 4; i_16 < 22; i_16 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) -9184182026219083029LL)) && (((/* implicit */_Bool) arr_20 [i_16] [i_16 + 2] [i_16]))));
                            arr_61 [(short)9] [i_16 + 1] [i_6] [i_6] [(short)9] [i_16] [i_6] = ((/* implicit */int) ((signed char) (short)25810));
                        }
                    } 
                } 
                var_24 = ((short) (_Bool)1);
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (short)-9918)) : (((/* implicit */int) (unsigned char)14))))) ? (((/* implicit */unsigned int) -215264641)) : (2812336852U)));
            }
            /* LoopSeq 1 */
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                var_26 |= ((_Bool) (-(((/* implicit */int) (short)-32763))));
                arr_66 [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0)))))));
            }
        }
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        arr_69 [i_18] = ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) 2536615458922677674LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) arr_57 [i_18] [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (var_10))))))));
        /* LoopNest 3 */
        for (unsigned short i_19 = 0; i_19 < 25; i_19 += 4) 
        {
            for (int i_20 = 3; i_20 < 24; i_20 += 3) 
            {
                for (unsigned int i_21 = 1; i_21 < 23; i_21 += 1) 
                {
                    {
                        var_27 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((arr_19 [i_21] [i_21 + 2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (((arr_19 [i_21 + 1] [i_21 + 1]) << (((arr_19 [i_21 - 1] [i_21 - 1]) - (3954545662970736231ULL)))))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned char)3)) - (((/* implicit */int) arr_33 [i_18] [i_18] [i_21 + 2])))))) ? (4026531840U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2536615458922677706LL))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_22 = 0; i_22 < 25; i_22 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (max((((/* implicit */unsigned long long int) arr_79 [i_18])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32754))) - (arr_19 [i_18] [i_19])))))));
                            arr_80 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */_Bool) (unsigned char)251);
                            arr_81 [i_18] = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_25 [i_18]), (arr_25 [i_18]))))));
                            var_30 -= ((/* implicit */short) ((_Bool) min((max((var_7), (((/* implicit */int) (short)-25814)))), (((/* implicit */int) arr_44 [i_18] [i_19])))));
                            arr_82 [i_18] [i_19] [i_18] [i_21 + 2] [i_18] = (_Bool)1;
                        }
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned int) ((unsigned char) var_1));
    var_32 = var_4;
}
