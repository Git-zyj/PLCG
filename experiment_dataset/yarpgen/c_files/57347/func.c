/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57347
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
    var_11 = ((/* implicit */unsigned long long int) var_4);
    var_12 = ((/* implicit */unsigned short) min((var_5), (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_13 *= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_0 [i_0] [(_Bool)1])) != (((/* implicit */int) arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [0ULL]))) ^ (-1LL)))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [4LL] [i_1] [15LL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [6LL]))) : ((~(var_10))))))))));
                    arr_8 [i_0] [i_0] [i_2] = (+(4032U));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_15 = (+(var_10));
                                var_16 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_0 [i_3] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                                arr_14 [i_3] [i_3] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_4] [i_3] [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_0] [i_2] [(unsigned char)6] [i_4])) : (((/* implicit */int) var_9))))) : ((+(arr_6 [i_0] [10LL] [i_0])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        arr_17 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)5357)) ? (4467570830351532032LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)107))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)21)))) : (((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5]))) : (3399275536U)))))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
                    {
                        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_24 [i_7]), (((/* implicit */long long int) (unsigned short)3406))))) ? (((long long int) min((((/* implicit */unsigned long long int) (unsigned short)15)), (8356597335489987003ULL)))) : (((/* implicit */long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) 1018675848U)))), (min((var_4), (var_4)))))))));
                        arr_26 [i_8] [i_7] [i_6] [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_8] [i_8]))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) var_5);
                        arr_29 [7ULL] [(unsigned char)15] [9LL] [i_7] [i_9] [i_9] = ((/* implicit */unsigned long long int) (+((-(var_8)))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_10] [i_7] [i_6] [i_5] = ((/* implicit */unsigned char) (signed char)13);
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483646U)) ? (4294967282U) : (2147483657U)));
                        var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 31059953U)) ? (((/* implicit */int) arr_13 [i_5] [i_7] [i_7] [i_6] [i_5])) : (((/* implicit */int) var_2))))));
                        arr_35 [i_10] [i_7] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-(2147483648U)))))) ? ((-(8356597335489986999ULL))) : (((/* implicit */unsigned long long int) var_3))));
                    }
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [11LL] [i_5] [i_6] [i_6] [i_6] [i_6] [i_7]))) : (2147483660U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_5] [i_6] [i_5] [i_7])))))) ? ((~((-(4035225266123964416ULL))))) : (((/* implicit */unsigned long long int) ((long long int) arr_16 [i_5] [i_6])))));
                    arr_36 [i_7] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
    }
    for (unsigned int i_11 = 1; i_11 < 17; i_11 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_14 = 4; i_14 < 16; i_14 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_15 = 4; i_15 < 16; i_15 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 6553237212469356041LL)) ? (2147483613U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60445))))))))));
                            var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_14 + 2] [i_11 + 1]))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_11 + 1])) ? (var_3) : (arr_39 [i_11 - 1])));
                            var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_11] [i_11]))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_12] [i_11 + 1])) : (((/* implicit */int) var_9)))))));
                            var_27 = ((/* implicit */unsigned char) arr_46 [i_11 + 1] [i_12] [8ULL] [i_14 - 3]);
                        }
                        arr_52 [i_11 - 1] [i_12] [i_13] [i_12] [i_13] [i_11] = ((/* implicit */long long int) (-(2147483651U)));
                        arr_53 [i_11] [i_11] = ((/* implicit */unsigned char) arr_39 [i_11 + 1]);
                    }
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((min((((/* implicit */long long int) (signed char)-116)), (var_1))) + (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) arr_5 [i_11] [(unsigned char)24]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)7927)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) min(((unsigned short)46846), (((/* implicit */unsigned short) var_0)))))))))))));
                    arr_54 [i_11] [i_12] [i_11] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (+((~(((/* implicit */int) (signed char)-36))))))), (var_3)));
                }
            } 
        } 
        arr_55 [i_11] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)60441)) : (((/* implicit */int) (_Bool)1))));
        var_29 *= ((/* implicit */short) var_10);
        var_30 = ((/* implicit */short) min(((-(min((((/* implicit */long long int) arr_28 [i_11] [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1])), (var_1))))), (((/* implicit */long long int) arr_31 [i_11 + 1] [i_11] [i_11 + 1] [i_11]))));
    }
    var_31 = var_4;
}
