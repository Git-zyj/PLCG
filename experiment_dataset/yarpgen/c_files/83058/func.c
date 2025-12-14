/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83058
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
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */int) var_10)), (((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_14)))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_11))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned int) ((unsigned long long int) arr_1 [i_0 - 1]));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                arr_9 [i_0] [i_2] = ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) ((signed char) arr_6 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    for (unsigned int i_4 = 2; i_4 < 15; i_4 += 1) 
                    {
                        {
                            var_17 = ((unsigned short) arr_15 [i_0] [i_2] [i_2] [i_2] [i_4]);
                            var_18 += ((/* implicit */unsigned short) ((((int) (unsigned short)52673)) >> (((((/* implicit */int) arr_6 [i_3 - 1] [i_3 + 1])) - (39321)))));
                        }
                    } 
                } 
            }
            var_19 &= ((((/* implicit */_Bool) (short)8192)) ? (((/* implicit */int) (short)-18848)) : (565909578));
            var_20 = ((/* implicit */short) ((int) arr_5 [i_0 - 1] [i_0 - 1]));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-18848)) : (-406694651))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_13 [i_0] [i_0] [i_5] [i_5] [i_5]))));
            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_14 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0])))) % (((unsigned long long int) arr_1 [i_5])))))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 4; i_6 < 15; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)31363))))) ? (((/* implicit */int) min(((short)0), (((/* implicit */short) arr_14 [i_0 - 1] [i_0 - 1] [i_5] [i_6 - 2] [12] [i_7]))))) : (((/* implicit */int) (unsigned short)24576)))))));
                        arr_24 [5ULL] [5ULL] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_12 [i_6 - 1] [3] [i_6 - 3]), (((/* implicit */signed char) ((arr_15 [i_0] [i_6] [i_6] [i_6] [i_7]) <= (arr_20 [i_0] [i_5] [i_6] [i_5]))))))) | (((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_0] [i_0]))) ? (arr_15 [i_0] [i_5] [(unsigned char)6] [i_6] [i_7]) : (((((/* implicit */_Bool) arr_4 [i_6 - 1] [i_0])) ? (((/* implicit */int) arr_22 [i_0 - 1] [i_5] [i_6] [(unsigned short)7] [i_7])) : (arr_20 [i_0] [i_5] [i_6] [(short)0])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_8 = 3; i_8 < 15; i_8 += 3) 
                        {
                            var_25 |= ((unsigned short) ((unsigned short) arr_10 [12] [12] [i_6 + 1] [i_6] [(unsigned short)7] [12ULL]));
                            arr_29 [i_8 - 2] [i_8] [i_8] [i_8] [(signed char)11] = ((/* implicit */unsigned long long int) ((unsigned short) arr_20 [i_0] [i_5] [i_8 - 1] [i_0 - 1]));
                            arr_30 [13] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((unsigned short) ((short) (short)-32539)));
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_9] [16] [i_9])) ? (((/* implicit */int) ((signed char) arr_23 [i_0 - 1] [i_5] [i_7] [i_9]))) : ((+(arr_8 [i_0 - 1] [i_6 - 1] [i_6 - 1])))));
                            arr_33 [i_0] [i_9] [i_0 - 1] [8] [3] [3] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_22 [i_0 - 1] [i_6 + 2] [i_0 - 1] [i_6 - 2] [i_6 + 2]))));
                        }
                    }
                } 
            } 
            arr_34 [(unsigned char)1] [i_0] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-18830))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                arr_40 [i_11] [i_10] [(unsigned short)13] [i_11] = ((/* implicit */unsigned int) ((signed char) ((unsigned short) ((signed char) arr_31 [i_0] [i_10] [i_10] [i_11] [i_11]))));
                arr_41 [i_0] [i_10] [i_11] [i_10] |= ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_7 [i_11] [i_10] [i_10] [16U]))) > (((/* implicit */int) ((short) max((arr_5 [i_10] [i_0]), (((/* implicit */unsigned short) arr_0 [i_11] [5]))))))));
            }
            for (unsigned short i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_3 [(signed char)5] [(unsigned short)9] [(unsigned short)9])) ? (arr_26 [i_12] [i_12] [i_10] [i_10] [i_0 - 1] [i_0 - 1]) : (arr_26 [i_10] [i_12] [i_12] [i_10] [i_10] [i_0]))))) ? ((+(1783271317U))) : (((/* implicit */unsigned int) max((((/* implicit */int) min((arr_35 [i_0] [i_10]), (((/* implicit */unsigned short) arr_13 [i_10] [i_10] [i_10] [(unsigned short)16] [i_10]))))), (((int) 11211736826533809249ULL)))))));
                arr_45 [(signed char)0] [i_10] [i_0] = ((/* implicit */signed char) ((unsigned short) ((signed char) ((unsigned short) arr_21 [i_12]))));
                arr_46 [i_0] [4] [9ULL] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) ((short) arr_19 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10]))) > (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1])))));
                arr_47 [i_0] [i_10] [i_12] = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) arr_21 [i_10])))))) ? (((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_0 [i_10] [i_12])))))) : (((/* implicit */int) arr_16 [i_0 - 1] [i_10] [i_0 - 1] [i_10] [i_0 - 1]))));
            }
            /* LoopSeq 1 */
            for (int i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((int) arr_15 [i_0 - 1] [i_14] [i_0 - 1] [i_14] [i_0 - 1])))));
                    /* LoopSeq 3 */
                    for (int i_15 = 0; i_15 < 17; i_15 += 3) 
                    {
                        var_29 &= ((/* implicit */unsigned short) ((signed char) arr_19 [i_0 - 1] [i_10] [(unsigned char)2]));
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((unsigned short) arr_3 [i_0] [i_0 - 1] [i_0])))));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((unsigned short) ((unsigned short) arr_35 [i_14] [i_14]))))));
                        var_32 = arr_35 [i_0 - 1] [i_0 - 1];
                        arr_56 [i_13] [8] = ((signed char) (signed char)-15);
                    }
                    for (signed char i_16 = 0; i_16 < 17; i_16 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned char) arr_5 [i_0] [i_0]);
                        var_34 = ((/* implicit */int) arr_38 [i_13]);
                        var_35 = ((/* implicit */signed char) ((unsigned short) arr_42 [i_0 - 1] [i_0 - 1]));
                        arr_60 [(_Bool)1] [(unsigned short)10] [i_13] [i_16] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_58 [i_13] [i_13] [i_13] [i_14] [i_13]))))));
                    }
                    for (signed char i_17 = 0; i_17 < 17; i_17 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (short)3))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((arr_26 [i_0] [(unsigned short)4] [7ULL] [i_14] [i_14] [i_17]) - (((/* implicit */int) (short)3))))));
                        var_37 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)14461))));
                        var_38 = ((/* implicit */signed char) arr_7 [11] [i_13] [i_13] [i_13]);
                        arr_63 [i_17] [i_13] [i_13] [i_10] [i_13] [i_13] [(unsigned short)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)2047)) ? (4519319947286928624ULL) : (((/* implicit */unsigned long long int) 406694668))));
                        var_39 = ((/* implicit */signed char) ((short) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]));
                    }
                    var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((signed char) ((unsigned short) arr_15 [i_0] [i_14] [(_Bool)1] [i_14] [i_13]))))));
                }
                var_41 = (i_13 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_31 [i_0 - 1] [i_0 - 1] [i_10] [i_10] [i_13])) - (((/* implicit */int) arr_36 [(short)6] [i_10] [i_13])))))) ? (((/* implicit */int) ((unsigned short) ((arr_54 [i_0] [i_0] [i_0] [(signed char)14] [i_13]) + (arr_62 [i_13] [i_13] [i_10] [i_13] [7]))))) : (((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)-67))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_31 [i_0 - 1] [i_0 - 1] [i_10] [i_10] [i_13])) - (((/* implicit */int) arr_36 [(short)6] [i_10] [i_13])))))) ? (((/* implicit */int) ((unsigned short) ((arr_54 [i_0] [i_0] [i_0] [(signed char)14] [i_13]) - (arr_62 [i_13] [i_13] [i_10] [i_13] [7]))))) : (((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)-67)))))))));
                var_42 = ((/* implicit */unsigned int) ((signed char) (unsigned short)6144));
                var_43 = ((((((/* implicit */_Bool) ((unsigned short) arr_22 [(unsigned short)15] [i_10] [(unsigned short)15] [(unsigned short)15] [i_10]))) && (arr_27 [i_0] [i_0] [i_10] [i_10]))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_14 [i_0] [(unsigned short)12] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_14 [(unsigned short)4] [(unsigned short)4] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) : (((/* implicit */int) ((short) ((((/* implicit */int) (signed char)90)) << (((/* implicit */int) arr_31 [i_0 - 1] [i_10] [i_0] [i_0] [i_0 - 1])))))));
            }
        }
    }
}
