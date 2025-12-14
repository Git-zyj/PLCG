/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69605
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_4))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) || (var_11))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_5 [i_1 - 1] [i_0] [i_1 + 1]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_10 [(unsigned short)4] |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)0])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (short)26839))))));
                        var_21 += ((/* implicit */short) (!(((/* implicit */_Bool) var_18))));
                        var_22 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 1614518988)) / (1565107805322508330ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 2] [(signed char)6] [6])))));
                    }
                }
                arr_11 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)15)) / (((/* implicit */int) (signed char)24))))), (min((arr_3 [i_1]), (var_12)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (signed char)-109)))))))) : (((((/* implicit */int) (short)-988)) / (((/* implicit */int) (short)32233))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned short) var_12);
        arr_16 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6386228626842344597LL)) ? (((/* implicit */int) var_0)) : (-1)));
    }
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                {
                    var_23 -= ((/* implicit */unsigned int) max((min((((/* implicit */long long int) (_Bool)1)), (max((var_3), (((/* implicit */long long int) var_15)))))), ((+(max((((/* implicit */long long int) var_14)), (var_7)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        arr_28 [i_8] [i_5] [i_6] [i_5] [i_5] = (((((!(((/* implicit */_Bool) var_12)))) ? (((((/* implicit */int) var_17)) + (var_15))) : (((/* implicit */int) arr_24 [(_Bool)0] [i_6] [i_7] [i_8])))) + (((/* implicit */int) arr_20 [(signed char)16] [i_6])));
                        var_24 -= ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12))) | (-1LL));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_25 [i_6] [i_7] [(_Bool)1]) : (((/* implicit */int) ((signed char) var_2)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) min((var_7), (((/* implicit */long long int) arr_20 [7LL] [i_6])))))) : (((((/* implicit */_Bool) ((var_13) - (((/* implicit */long long int) ((/* implicit */int) arr_26 [(short)16] [(short)16] [i_7] [i_5])))))) ? (min((((/* implicit */unsigned long long int) arr_21 [i_7] [i_7] [i_7])), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned short) arr_21 [i_5] [i_6] [i_6]))))))))));
                    }
                    arr_29 [i_5] [(unsigned char)13] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)-10792)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [i_5] [i_5] [i_7])), (var_6))))) : (max((((/* implicit */long long int) (short)-8352)), (-9223372036854775799LL))))), (((var_3) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_5] [i_6] [i_7])) ? (2229560428U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5]))))))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) max((-9223372036854775782LL), (((/* implicit */long long int) var_1)))))));
        arr_30 [i_5] = ((/* implicit */unsigned short) var_5);
        var_27 = ((/* implicit */unsigned long long int) max((((arr_19 [i_5]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_19 [i_5])))), (((int) (unsigned short)30092))));
    }
    for (long long int i_9 = 2; i_9 < 21; i_9 += 4) 
    {
        arr_33 [i_9 + 1] [(unsigned char)4] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_9]))) : (arr_31 [i_9] [i_9]))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (arr_31 [i_9] [i_9])))))) | (((/* implicit */long long int) max(((-(((/* implicit */int) arr_32 [i_9])))), (max((var_15), (((/* implicit */int) var_6)))))))));
        /* LoopSeq 1 */
        for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            var_28 -= ((/* implicit */_Bool) (~(((/* implicit */int) ((short) max((((/* implicit */short) arr_32 [i_9])), (arr_34 [(short)13] [i_10])))))));
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((var_15) + (((/* implicit */int) (unsigned char)227)))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) 2147483624)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4164558195U))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : ((+(arr_31 [i_9 - 2] [i_10])))));
            var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((-1080479570831700175LL), (((/* implicit */long long int) var_4))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)112))) | (((((/* implicit */_Bool) var_6)) ? (12458750788102681460ULL) : (((/* implicit */unsigned long long int) -9223372036854775799LL))))))));
        }
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    {
                        var_31 += ((/* implicit */_Bool) arr_35 [(unsigned short)11] [i_9 + 1]);
                        /* LoopSeq 1 */
                        for (signed char i_14 = 0; i_14 < 22; i_14 += 2) 
                        {
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) ? (((/* implicit */long long int) 690129586U)) : (max((((/* implicit */long long int) ((unsigned char) (unsigned short)1984))), (arr_38 [i_14] [i_9]))))))));
                            arr_47 [i_9] [i_11] [i_12] [i_13] [i_13] = ((/* implicit */unsigned long long int) var_18);
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) 7196568753888055675ULL))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 2) 
                        {
                            var_34 = ((/* implicit */long long int) min((var_34), (arr_31 [i_9] [i_13])));
                            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_5) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 512U)) : (var_3))) - (498LL)))))) ? (max((arr_49 [i_9 - 2] [i_12] [i_12] [4LL] [i_12]), (((/* implicit */unsigned long long int) arr_38 [i_9 - 2] [i_9 - 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)30)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-113))))))));
                            arr_51 [i_11] [i_15] [i_12] [(short)3] [21] = ((/* implicit */signed char) ((long long int) var_13));
                        }
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_45 [i_9 + 1] [i_9] [i_9 + 1] [(_Bool)1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_8))))) : (2065406887U)));
        arr_52 [i_9 - 2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_31 [i_9] [i_9 + 1])) ? (1565107805322508330ULL) : (((/* implicit */unsigned long long int) arr_31 [15ULL] [i_9 - 1])))) <= (((/* implicit */unsigned long long int) ((arr_31 [(signed char)17] [i_9 - 1]) / (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
    }
    for (long long int i_16 = 0; i_16 < 20; i_16 += 1) 
    {
        arr_55 [12ULL] [i_16] |= ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_18))));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 20; i_17 += 1) 
        {
            for (unsigned int i_18 = 1; i_18 < 17; i_18 += 4) 
            {
                {
                    var_37 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) max((arr_61 [18U] [18U]), (var_10)))))))) / (max((915855326U), (arr_39 [i_17] [i_18 + 1])))));
                    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) min((((3480665103U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2040))))), (((((/* implicit */int) arr_53 [i_18 + 1] [8ULL])) >= (((/* implicit */int) arr_56 [i_16] [i_18 + 2] [i_18])))))))));
                    var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_61 [2ULL] [i_18 + 1])) ? (((/* implicit */int) arr_48 [i_16] [8] [i_18] [13] [i_18])) : (((/* implicit */int) arr_34 [i_16] [i_16]))))) / (((((/* implicit */_Bool) arr_39 [i_18 + 1] [i_18 - 1])) ? (var_7) : (((/* implicit */long long int) arr_39 [i_18 - 1] [i_18 + 2])))))))));
                    var_40 = ((/* implicit */int) min((var_40), (var_2)));
                    var_41 *= ((((((/* implicit */_Bool) max((arr_60 [i_17]), (((/* implicit */int) arr_57 [(unsigned char)14] [13U]))))) || (((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_31 [i_16] [i_17])))))) && (((/* implicit */_Bool) min((4294966787U), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_16)), (arr_56 [i_16] [i_16] [i_16]))))))));
                }
            } 
        } 
    }
}
