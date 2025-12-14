/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58000
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
    var_12 ^= ((/* implicit */unsigned char) ((_Bool) var_10));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [1U]);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_13 = ((((/* implicit */_Bool) arr_5 [i_2] [i_3])) ? ((-(((/* implicit */int) arr_5 [i_0] [i_2 - 1])))) : (((((/* implicit */_Bool) arr_5 [(unsigned char)0] [i_2])) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_3])) : (((/* implicit */int) arr_5 [i_1] [i_2 + 1])))));
                        var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) / (((/* implicit */unsigned long long int) max((arr_12 [i_0] [i_1] [i_0] [i_3]), (((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_3] [i_3] [i_3])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((short) var_7))))) : (((/* implicit */int) (unsigned char)7))));
                        arr_13 [i_0] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) var_4);
                        var_15 ^= ((/* implicit */signed char) var_0);
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) (short)8251);
        /* LoopNest 2 */
        for (unsigned char i_4 = 3; i_4 < 21; i_4 += 3) 
        {
            for (long long int i_5 = 4; i_5 < 19; i_5 += 2) 
            {
                {
                    arr_20 [3LL] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16566))) : (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)8412))) : (((((/* implicit */_Bool) arr_15 [i_4] [i_5 - 3])) ? (arr_4 [i_0 + 3] [i_0 + 2] [i_0 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5]))))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)26286)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 19; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            {
                                arr_26 [i_6] [i_5] [(unsigned short)9] [i_6] = ((/* implicit */signed char) min((((arr_21 [18U] [i_5 - 3] [i_4 + 1] [i_0]) ? (((((/* implicit */_Bool) arr_25 [i_0] [i_6] [i_6] [(_Bool)1] [(_Bool)1])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6] [20U] [i_5] [20U] [i_6]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (arr_3 [(short)21] [12])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_7] [i_0 + 2] [i_7] [i_0 + 2] [(_Bool)1] [i_0 + 2])) > (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_17 [i_7])) >= (var_10)))))))));
                                var_16 = ((/* implicit */signed char) max((((/* implicit */int) min((arr_0 [i_0 + 3]), (((/* implicit */short) max((var_1), ((unsigned char)12))))))), ((-(((/* implicit */int) arr_21 [i_5 + 3] [15] [i_5] [i_6 + 3]))))));
                                arr_27 [i_0 + 1] [(unsigned char)10] [i_5] [i_5] [i_5] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) arr_16 [i_7])))))) ? (((((/* implicit */_Bool) arr_3 [i_5] [i_5 - 3])) ? ((-(((/* implicit */int) arr_23 [i_5] [i_5])))) : (((int) var_0)))) : (((/* implicit */int) arr_16 [(_Bool)1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_8 = 2; i_8 < 20; i_8 += 2) 
        {
            for (signed char i_9 = 3; i_9 < 20; i_9 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_8] [(unsigned char)5])) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0 + 2] [i_8] [i_9 - 1] [i_8] [i_9])) ? (((/* implicit */int) arr_29 [i_8])) : (arr_31 [i_9 - 2])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))) : (((arr_31 [i_8]) / (((/* implicit */int) arr_25 [i_0 + 3] [i_8] [i_9 + 1] [i_9] [i_9]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)7));
                        arr_35 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_5);
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 21; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            {
                                arr_41 [i_0] [(unsigned short)15] [i_9] [i_11] [i_12] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned long long int) min((arr_30 [i_0] [i_0] [i_9]), (((/* implicit */long long int) var_5))))) | (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_8 - 1] [i_9] [i_12])), (var_6))))));
                                var_19 |= ((/* implicit */signed char) (short)14304);
                                arr_42 [i_0] [i_8 - 1] [i_0] [i_9] [i_11] [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)63684))) ? ((-(((/* implicit */int) arr_8 [i_0] [i_8] [i_9] [i_11])))) : (((/* implicit */int) arr_22 [(short)8] [i_8] [12U] [i_11] [i_8])))) / (((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_6 [i_0 + 1]))))));
                                var_20 = ((/* implicit */short) arr_16 [i_9]);
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_2))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 2) 
    {
        arr_45 [9ULL] = ((/* implicit */unsigned short) ((short) ((short) arr_28 [i_13] [i_13] [i_13])));
        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_13] [(unsigned char)10] [i_13] [i_13])) & (((/* implicit */int) (short)-28444))));
    }
    /* LoopNest 3 */
    for (signed char i_14 = 1; i_14 < 21; i_14 += 2) 
    {
        for (unsigned short i_15 = 3; i_15 < 23; i_15 += 3) 
        {
            for (signed char i_16 = 3; i_16 < 23; i_16 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        for (long long int i_18 = 1; i_18 < 21; i_18 += 3) 
                        {
                            {
                                arr_60 [i_17] [i_17] [i_14] [i_14] [i_17] [i_17] [i_17] = ((/* implicit */long long int) arr_52 [i_17] [i_15] [i_16]);
                                var_23 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_59 [i_14] [i_15] [i_14] [i_17] [(unsigned short)10])) ? (((/* implicit */int) arr_55 [i_14] [i_14] [i_16] [i_17] [i_14])) : (((/* implicit */int) var_7))))))) == (arr_57 [i_14 + 1] [i_17] [i_18])));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_19 = 0; i_19 < 24; i_19 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_20 = 0; i_20 < 24; i_20 += 2) 
                        {
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((((/* implicit */_Bool) arr_47 [i_14])) ? (arr_47 [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_14] [i_15] [i_20] [i_19]))))) + (((((/* implicit */_Bool) arr_61 [i_14 + 1] [(short)8] [i_20] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_20] [(unsigned char)12] [i_14 + 2] [i_20] [i_20]))) : (arr_47 [i_14]))))))));
                            arr_66 [i_14] [i_15] [i_16] [i_14] [i_15] = ((/* implicit */unsigned char) var_8);
                        }
                        var_25 -= ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) var_11)) ? (-1544482906) : (((/* implicit */int) arr_58 [i_14] [i_14] [i_19] [i_19] [i_19])))), (((((/* implicit */_Bool) arr_59 [4U] [i_14] [5U] [(_Bool)1] [5U])) ? (((/* implicit */int) arr_46 [i_14] [i_19])) : (((/* implicit */int) var_9))))))));
                    }
                    arr_67 [16ULL] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((2322980686298806508LL) > (((/* implicit */long long int) ((/* implicit */int) var_11)))))) % (((/* implicit */int) ((((/* implicit */long long int) arr_56 [(short)6] [(short)14] [i_16 + 1] [(short)14] [(short)6])) != (arr_59 [(short)5] [(short)5] [(short)0] [(signed char)22] [i_16]))))))) ? (((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) arr_63 [i_15 - 3] [i_15] [i_14 - 1] [i_14] [(_Bool)1]))))) : (((((/* implicit */_Bool) arr_46 [22] [22])) ? (((/* implicit */int) arr_46 [(short)18] [(short)18])) : (((/* implicit */int) arr_55 [i_16] [i_16 + 1] [i_16 - 1] [(_Bool)1] [i_16 + 1]))))));
                }
            } 
        } 
    } 
}
