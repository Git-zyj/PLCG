/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67853
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
    var_11 |= ((/* implicit */_Bool) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) (((((+(((/* implicit */int) arr_0 [i_0])))) + (2147483647))) << ((((-(arr_2 [i_0]))) - (213639237U)))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_9);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) 2055756863);
        var_14 = ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6));
        var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_3))));
        var_16 |= arr_7 [i_1];
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 24; i_2 += 1) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [17ULL])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_2 + 1]))));
            /* LoopNest 3 */
            for (short i_3 = 1; i_3 < 24; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 4) 
                {
                    for (signed char i_5 = 1; i_5 < 24; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) (~(((/* implicit */int) arr_16 [i_1] [i_1] [i_2] [i_3 - 1] [11] [i_4] [i_5]))));
                            arr_17 [(signed char)16] [i_1] [i_3] [i_3] [i_3] [i_3 + 1] [i_3] &= ((/* implicit */unsigned char) (-((~(856835342806586613ULL)))));
                            var_19 = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (arr_13 [i_1] [i_2 + 1] [i_3] [i_5 + 1])))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            var_20 = ((/* implicit */signed char) ((4284781383735007477ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132)))));
            var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(-682659841)))))))) | (var_8));
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (short i_9 = 2; i_9 < 22; i_9 += 4) 
                {
                    for (int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        {
                            var_22 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) max((var_0), ((!(((/* implicit */_Bool) var_6))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_9]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_10] [i_8]))) : (arr_13 [i_6] [i_8] [i_8] [i_9])))))));
                            arr_29 [i_9 - 2] [i_6] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_8 [i_7]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    var_23 = (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_33 [i_7])) : (((/* implicit */int) var_7)))));
                    arr_34 [i_6] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [12ULL] [i_7] [i_8] [i_11])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_8])) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) var_4))))));
                    var_25 &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [i_6] [i_7] [i_8] [19]))));
                }
                /* vectorizable */
                for (short i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    var_26 = ((/* implicit */unsigned int) (-(682659832)));
                    var_27 = ((/* implicit */int) var_9);
                }
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    for (int i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        {
                            arr_43 [i_6] [i_7] [i_8] [i_13] [i_14] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_8])) && (((/* implicit */_Bool) 14161962689974544140ULL)))))));
                            arr_44 [i_14] [i_13] [i_13] [i_8] [i_7] [i_6] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_13])) ? (arr_18 [i_13]) : (var_8)))) ? ((-(arr_18 [i_6]))) : ((~(arr_18 [i_14])))));
                        }
                    } 
                } 
                arr_45 [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (arr_21 [i_6] [i_6])))) ? (((/* implicit */int) var_10)) : ((-(var_3)))))) ? (var_2) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_8] [12U])) ? (arr_14 [i_8] [i_8] [i_8] [i_7] [i_7] [i_6]) : (((/* implicit */int) var_0))))) ? (min((var_8), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) 2934990495U)))));
                arr_46 [i_8] [i_7] [i_7] [i_6] = (_Bool)1;
            }
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_6] [i_15])) ? (var_6) : ((-(((arr_30 [i_6] [i_15]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
            arr_49 [(signed char)10] [i_15] [(_Bool)1] = ((/* implicit */int) (~(max((4294967295U), (((/* implicit */unsigned int) arr_9 [i_6]))))));
            arr_50 [i_6] [i_6] [i_15] = max((((((/* implicit */_Bool) arr_0 [i_15])) ? (((/* implicit */unsigned long long int) arr_47 [i_15] [i_15])) : (var_2))), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_25 [i_15] [i_6] [i_6]))))))));
        }
        for (short i_16 = 0; i_16 < 25; i_16 += 2) 
        {
            arr_53 [i_6] [i_6] [(signed char)5] = max((arr_1 [i_6] [i_16]), (((((/* implicit */_Bool) arr_1 [i_6] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_1 [i_6] [i_16]))));
            var_29 = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (-2147483647 - 1))))));
        }
        var_30 |= ((/* implicit */unsigned long long int) arr_19 [i_6]);
    }
    var_31 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */int) var_0)), (-607030716))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (var_8))))))), ((~(min((((/* implicit */unsigned long long int) var_9)), (var_8)))))));
    /* LoopNest 2 */
    for (unsigned short i_17 = 0; i_17 < 11; i_17 += 2) 
    {
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            {
                var_32 = ((/* implicit */signed char) var_1);
                arr_60 [i_17] [i_18] = ((/* implicit */signed char) var_9);
            }
        } 
    } 
}
