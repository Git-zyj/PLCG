/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99363
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) var_0);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_0 [i_0 - 1]))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_7 [i_1] = var_7;
        var_12 = ((/* implicit */short) max((min((((/* implicit */unsigned int) var_8)), (((var_2) | (var_2))))), (((/* implicit */unsigned int) var_10))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
                {
                    arr_19 [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_16 [i_2] [i_3] [i_3] [i_4]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))), (max((((/* implicit */unsigned int) var_1)), (arr_9 [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) var_5);
                                arr_28 [i_2] &= var_5;
                                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_9))));
                            }
                        } 
                    } 
                }
                for (int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 10; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) var_0);
                                var_15 = ((/* implicit */signed char) (((!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_5)))))) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) ((signed char) arr_21 [i_8 - 1] [i_8 - 1])))));
                            }
                        } 
                    } 
                    arr_38 [i_2] [i_2] [i_3] [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_23 [i_2] [i_2])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_34 [i_7]), (((/* implicit */unsigned short) var_8))))))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_5))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_10 [i_7]) : (arr_10 [i_7]))))));
                }
                /* LoopSeq 3 */
                for (long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775784LL)) || (((/* implicit */_Bool) 6944066546201662919ULL)))))) <= (((((/* implicit */_Bool) (unsigned short)65526)) ? (-3170770038376868176LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))))) : (((/* implicit */int) ((((/* implicit */int) arr_34 [i_10])) >= ((+(((/* implicit */int) var_6))))))))))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (3831216223021271078ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        var_19 *= ((/* implicit */unsigned short) arr_39 [i_2] [i_3] [i_10] [i_10]);
                        var_20 = min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_3] [i_10] [i_11]))) > (arr_2 [i_2])))), (((arr_1 [i_2]) ? (((/* implicit */int) arr_35 [i_11] [i_11] [i_11] [i_10])) : (((((/* implicit */int) var_4)) & (((/* implicit */int) var_8)))))));
                    }
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) % (min((-9223372036854775784LL), (((/* implicit */long long int) (unsigned char)204)))))) | (((var_7) - (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (arr_22 [i_3])))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_2] [i_12])))))));
                        var_23 |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_26 [i_2] [i_3] [i_3] [i_3] [i_12])) != (arr_10 [i_3]))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (+(((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) min((var_4), (var_4)))) : (((/* implicit */int) ((((/* implicit */int) arr_40 [i_2] [i_3])) >= (((/* implicit */int) var_10))))))))))));
                        var_25 = ((/* implicit */_Bool) var_10);
                    }
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((signed char) (-(((/* implicit */int) arr_46 [i_2] [i_10] [i_2] [i_2]))))))));
                        var_27 |= ((unsigned short) ((var_3) > (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)65528)), (1469256735))))));
                        var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)59123))));
                    }
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)23244)) & (-1469256753)));
                }
                for (signed char i_15 = 0; i_15 < 11; i_15 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_15] [i_15] [i_3] [i_2])) >= (((/* implicit */int) arr_48 [i_2] [i_2] [i_3] [i_3] [i_15] [i_15]))))), (var_7)));
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        for (long long int i_17 = 0; i_17 < 11; i_17 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((unsigned char) var_2)), (((/* implicit */unsigned char) ((1469256754) != (((/* implicit */int) (signed char)64)))))))) ? ((+(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (var_7)))))))));
                                arr_56 [i_17] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (unsigned char)207)), ((unsigned short)65534)));
                                var_32 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_35 [i_3] [i_3] [i_3] [i_17]))) + (((/* implicit */int) (!(((/* implicit */_Bool) -6823720981573299200LL)))))));
                            }
                        } 
                    } 
                    arr_57 [i_2] [i_3] [i_15] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                    var_33 -= ((/* implicit */short) min((((/* implicit */long long int) (short)-5965)), (3170770038376868175LL)));
                    var_34 = ((/* implicit */unsigned short) (+((+(((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_6)) + (29030)))))))));
                }
                for (signed char i_18 = 0; i_18 < 11; i_18 += 1) /* same iter space */
                {
                    arr_61 [i_2] [i_3] [i_18] |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)41879)) && (((/* implicit */_Bool) 3170770038376868175LL))));
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) min(((-(((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_37 [i_2] [i_3] [i_18] [i_18] [i_3]))))))), (((/* implicit */int) ((_Bool) arr_54 [i_2] [i_3] [i_3] [i_18] [i_18] [i_18]))))))));
                    arr_62 [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0)) & (11502677527507888693ULL)))) ? (((/* implicit */int) arr_29 [i_3] [i_3])) : (((((/* implicit */int) var_4)) / (((/* implicit */int) var_9))))))) ? (min((((/* implicit */unsigned int) arr_34 [i_3])), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_18]))))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_19 = 0; i_19 < 13; i_19 += 4) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) var_5))));
        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_64 [i_19])) : (((/* implicit */int) arr_64 [i_19]))));
    }
    for (unsigned short i_20 = 0; i_20 < 13; i_20 += 4) /* same iter space */
    {
        var_38 += ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)65516)), (2328217652U)));
        arr_70 [i_20] = ((/* implicit */unsigned short) arr_66 [i_20]);
        var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) min((((/* implicit */long long int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (min((((/* implicit */long long int) var_10)), (((((/* implicit */long long int) ((/* implicit */int) var_6))) % (var_7))))))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_21 = 1; i_21 < 17; i_21 += 3) 
    {
        arr_74 [i_21 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_71 [i_21])) ? ((-(((/* implicit */int) (unsigned char)247)))) : (((/* implicit */int) var_10))));
        var_40 = ((/* implicit */long long int) var_1);
        var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((long long int) 1469256735))))) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */_Bool) arr_73 [i_21 + 2])) ? (((arr_2 [i_21 - 1]) % (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) - (2328217652U)))))))))));
    }
    for (unsigned long long int i_22 = 1; i_22 < 22; i_22 += 3) 
    {
        var_42 = ((/* implicit */_Bool) max((var_42), ((!(((((/* implicit */_Bool) (unsigned short)9)) || (((1469256735) == (((/* implicit */int) (unsigned char)39))))))))));
        var_43 *= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_76 [i_22 + 1] [i_22 + 2]))))) | (((/* implicit */int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-6282))))))))));
    }
}
