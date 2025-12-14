/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83416
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_2 [i_1]), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [i_0])))) : (((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0]))) | (((unsigned long long int) arr_3 [i_0] [(short)10] [i_1]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_18 = ((/* implicit */long long int) ((arr_2 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    /* LoopSeq 3 */
                    for (short i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((long long int) arr_6 [i_0] [i_3 - 1] [i_1] [i_3])))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_3 + 1] [i_0])) != (((/* implicit */int) arr_9 [i_0] [i_1]))))))));
                        arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0]));
                    }
                    for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_21 = ((unsigned long long int) arr_12 [i_0] [i_0] [i_2] [15ULL]);
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */int) var_9);
                            var_23 ^= ((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_11 [i_1] [14LL] [i_2] [i_4] [i_5]))));
                            var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0] [i_5] [i_2] [i_4] [i_5])) - (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [18U] [i_0]))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 3; i_7 < 21; i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_7] [i_0] [i_7] [i_7 + 1] [i_7 + 1] [i_7] = ((/* implicit */long long int) ((unsigned int) var_2));
                            arr_23 [i_6] [i_1] [i_0] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_7 - 1] [i_0] [i_0] [i_7 - 1] [(short)7] [i_7]))));
                        }
                        for (unsigned char i_8 = 3; i_8 < 21; i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [i_6] [i_8 - 1] [i_6] [i_0] [(_Bool)1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [16LL] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_0 [i_0])))) ? (((long long int) arr_15 [i_0] [i_0] [i_2] [i_6])) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_2] [i_0] [i_8 - 3] [5ULL] [i_8 - 1] [i_8 - 3])))));
                            arr_28 [(_Bool)1] [i_1] [(signed char)19] [i_0] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) arr_19 [i_0] [i_1] [i_0] [(_Bool)1] [i_0])))));
                        }
                        arr_29 [i_0] [i_1] [i_2] [(_Bool)1] [i_0] = ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_2] [i_6])) ? (arr_12 [i_0] [i_6] [i_2] [i_6]) : (arr_12 [i_0] [i_1] [i_2] [i_6]));
                        var_25 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_6]))));
                    }
                    var_26 = ((arr_12 [i_0] [i_1] [i_2] [i_2]) & (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0] [(_Bool)1] [i_2] [i_2] [i_1]))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_9 = 3; i_9 < 20; i_9 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */signed char) (!(arr_5 [i_9 - 2] [(_Bool)1])));
                    arr_32 [i_0] [i_1] [i_9] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0]))))));
                    var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) arr_7 [i_9 + 2] [i_9 + 2] [i_9] [i_9 + 2] [i_0])) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_9 - 3] [6U]))))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_9 + 1])) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_9 + 1] [i_9] [i_1]))));
                }
                for (unsigned short i_10 = 3; i_10 < 20; i_10 += 4) /* same iter space */
                {
                    arr_35 [i_0] [i_0] [i_10] = ((/* implicit */long long int) arr_16 [i_0] [i_1] [i_1] [i_1] [i_10] [16] [i_1]);
                    var_29 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_10 - 2] [i_1]), (arr_9 [i_10 - 2] [i_1]))))) | ((+(((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_10] [i_1]))) | (arr_12 [i_1] [i_1] [i_10 - 2] [4ULL])))))));
                    var_30 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_8 [i_10 - 1] [i_1] [i_10])))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_17 [i_0] [(unsigned short)20] [i_0] [i_10 - 2] [i_10] [i_1] [i_1])) ? (arr_31 [(_Bool)1] [i_1] [i_10] [i_1]) : (var_13))), (((/* implicit */unsigned int) arr_5 [i_0] [i_10 - 1]))))) : (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_10] [i_10 - 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_10] [i_10 + 2])) ? (arr_13 [i_0] [i_1] [2] [i_10]) : (((/* implicit */unsigned int) var_1))))) : (min((var_10), (((/* implicit */unsigned long long int) var_14))))))));
                    arr_36 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
                    var_31 &= ((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_10 - 2]);
                }
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) 1248963206U))) != (((/* implicit */int) ((unsigned short) arr_25 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_11 = 2; i_11 < 12; i_11 += 2) 
    {
        var_33 += ((/* implicit */_Bool) (-(arr_31 [i_11] [i_11] [i_11] [i_11 - 1])));
        arr_41 [i_11] [i_11] = ((/* implicit */int) ((unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_38 [i_11] [i_11]))))), (var_10))));
    }
    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 16; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        arr_55 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */long long int) (-(((arr_31 [i_12] [i_13] [i_12] [i_13 - 1]) | (arr_31 [i_12] [i_13 - 1] [i_14] [i_13 + 3])))));
                        var_34 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_53 [i_12] [i_13] [i_14] [i_15] [i_14]) : (((/* implicit */long long int) arr_48 [i_12] [i_13] [i_13]))))) ? ((~(var_1))) : (((/* implicit */int) ((unsigned char) arr_5 [i_12] [i_12])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_46 [i_12] [(unsigned short)10] [i_13 + 1])))) : (((((/* implicit */_Bool) arr_52 [i_13] [i_13 + 2])) ? (arr_48 [i_12] [0] [0]) : (((/* implicit */unsigned int) arr_52 [i_12] [i_12]))))));
                    }
                    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) min((arr_33 [i_13 - 1] [i_12] [i_14]), ((~(arr_52 [i_12] [i_13 + 2]))))))));
                    var_36 -= ((/* implicit */long long int) ((var_10) > ((+(((((/* implicit */_Bool) arr_12 [i_14] [i_13] [i_12] [i_13 + 2])) ? (arr_0 [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                    var_37 = (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_12] [i_13] [i_14] [i_13] [i_12]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_14 [i_14]))) ? (min((((/* implicit */long long int) var_6)), (arr_18 [i_12] [i_12] [i_14] [i_14]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_17)))))))) : ((((!(((/* implicit */_Bool) arr_44 [i_12])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_14] [i_13 + 2]))) : (arr_0 [i_12]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (long long int i_17 = 2; i_17 < 18; i_17 += 3) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_38 ^= ((/* implicit */long long int) (-((-(var_13)))));
                        var_39 = ((/* implicit */int) max((max((((/* implicit */unsigned int) 15)), (1248963210U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_0 [i_18]), (((/* implicit */unsigned long long int) var_15))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_19 = 0; i_19 < 19; i_19 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_20 = 1; i_20 < 16; i_20 += 2) 
        {
            arr_70 [i_19] [i_20] = ((/* implicit */long long int) (+(((/* implicit */int) arr_25 [2LL] [i_19] [i_20] [i_20] [i_20] [i_20] [i_20]))));
            var_40 *= ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_31 [i_19] [i_20 + 3] [i_20 + 3] [i_19])))));
        }
        for (unsigned short i_21 = 0; i_21 < 19; i_21 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_22 = 0; i_22 < 19; i_22 += 4) 
            {
                arr_78 [i_21] [i_21] [i_22] [i_21] = ((/* implicit */long long int) (!(((((/* implicit */int) arr_75 [i_22] [i_22] [i_22] [i_22])) < (((/* implicit */int) arr_75 [i_19] [i_21] [i_21] [i_19]))))));
                arr_79 [i_19] [i_19] = ((/* implicit */long long int) (-(max(((-(5053081005276960861ULL))), (((/* implicit */unsigned long long int) arr_63 [i_21] [i_21] [i_21] [i_19]))))));
                var_41 += ((/* implicit */unsigned long long int) var_2);
            }
            arr_80 [i_19] [i_21] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_42 [i_19])), (min((((/* implicit */unsigned long long int) arr_63 [i_21] [i_21] [i_21] [i_21])), (var_9))))))));
            var_42 = arr_67 [i_19];
        }
        arr_81 [i_19] [i_19] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_10)))))) > (((((/* implicit */_Bool) (signed char)116)) ? (-2485057857107885677LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30916))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_20 [i_19] [i_19] [i_19] [i_19] [(_Bool)1])))))) : (((((((/* implicit */_Bool) arr_51 [i_19] [i_19])) ? (((/* implicit */int) arr_15 [i_19] [16] [20] [i_19])) : (((/* implicit */int) arr_7 [i_19] [i_19] [i_19] [i_19] [i_19])))) | (((((/* implicit */_Bool) arr_14 [4ULL])) ? (var_14) : (arr_52 [5ULL] [5ULL])))))));
    }
    var_43 = ((/* implicit */int) ((unsigned short) ((min((var_15), (((/* implicit */int) var_11)))) / ((-(124))))));
    var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((15956057512563934362ULL) * (7500682761568342066ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (var_9)))))) && (var_16)));
}
