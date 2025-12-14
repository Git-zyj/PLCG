/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94818
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_6 [i_0 - 1] [(unsigned short)3] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) arr_0 [(unsigned char)11]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1] [i_2]))))) != (((/* implicit */int) (signed char)-76)))))));
                    var_17 -= ((/* implicit */signed char) (+((~(((/* implicit */int) arr_2 [i_0 - 4]))))));
                    arr_7 [i_0 - 3] [i_0 - 3] [i_2] [i_1] = ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-8))))));
                    arr_8 [(_Bool)1] [i_1] = min((((arr_1 [i_0] [i_2]) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)7)) : (arr_5 [(unsigned char)3] [i_1])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_3 [i_2]))))));
                }
            } 
        } 
        arr_9 [(short)0] |= ((/* implicit */unsigned short) max(((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (var_14)))))), (((/* implicit */int) min((arr_4 [i_0 - 3]), (arr_4 [i_0 + 1]))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 4; i_4 < 20; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (int i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        {
                            arr_23 [i_6] [i_5] [i_4] [(unsigned short)11] [19LL] = ((/* implicit */unsigned short) (-(max((((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_4])), ((unsigned short)32767)))), (arr_19 [i_0 - 3] [i_3] [i_4 + 2] [i_6 + 2])))));
                            var_18 = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) var_6)))) ? ((+(var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_3] [i_4] [i_5] [(_Bool)1])) ? (402653184U) : (arr_1 [i_4] [(unsigned char)9]))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) var_5)))))));
                        var_20 = ((/* implicit */unsigned int) min((arr_3 [i_0]), (((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) arr_28 [i_0 - 2] [i_3] [(unsigned char)8] [i_8]))))))));
                    }
                    for (unsigned int i_10 = 1; i_10 < 21; i_10 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) var_4);
                        var_22 = ((/* implicit */long long int) (_Bool)0);
                        var_23 = ((/* implicit */unsigned char) 1077709124);
                        arr_33 [(unsigned char)21] [1] [i_7] [i_8] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
                    }
                    arr_34 [i_0] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) ((((var_16) + (2147483647))) << (((((/* implicit */int) var_7)) - (35137)))))))));
                }
                var_24 |= (unsigned short)61421;
                /* LoopSeq 1 */
                for (unsigned char i_11 = 3; i_11 < 21; i_11 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 2; i_12 < 21; i_12 += 4) 
                    {
                        arr_41 [i_11] [i_3] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))) : (var_13)))) ? (((/* implicit */int) ((unsigned short) var_15))) : (((((/* implicit */_Bool) (unsigned short)32779)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned short) var_3)))))));
                        var_25 = (i_11 % 2 == 0) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_25 [17ULL] [i_11 - 2] [i_7])) ? (arr_19 [i_11 - 3] [i_12 + 1] [(unsigned short)15] [i_0 - 2]) : (((/* implicit */int) min(((unsigned short)32768), (((/* implicit */unsigned short) arr_3 [i_12 - 1]))))))), (((((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (unsigned short)65408)))) << (((((min((var_4), (arr_40 [i_11] [(unsigned char)12] [i_7] [(_Bool)1] [i_0] [(unsigned short)8] [i_11]))) + (2121932371))) - (29)))))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_25 [17ULL] [i_11 - 2] [i_7])) ? (arr_19 [i_11 - 3] [i_12 + 1] [(unsigned short)15] [i_0 - 2]) : (((/* implicit */int) min(((unsigned short)32768), (((/* implicit */unsigned short) arr_3 [i_12 - 1]))))))), (((((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (unsigned short)65408)))) << (((((((min((var_4), (arr_40 [i_11] [(unsigned char)12] [i_7] [(_Bool)1] [i_0] [(unsigned short)8] [i_11]))) + (2121932371))) - (29))) - (1943999263))))))));
                    }
                    for (unsigned short i_13 = 3; i_13 < 21; i_13 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) min((((/* implicit */long long int) (~(arr_5 [(unsigned char)6] [5LL])))), (var_13)));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((var_4) ^ (((/* implicit */int) arr_3 [i_0 - 4])))))) == ((+(((/* implicit */int) ((signed char) (unsigned short)53794)))))));
                        var_28 |= ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) min((arr_40 [i_0 - 2] [i_0 - 2] [i_3] [i_7] [i_11] [i_13] [i_0]), (var_4)))))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        arr_49 [i_11] [i_11] [i_11] [(unsigned short)1] = ((/* implicit */_Bool) (short)-1);
                        arr_50 [i_0] [(unsigned char)16] [i_7] [i_11] [i_11] = ((/* implicit */signed char) max((2083955398U), (((/* implicit */unsigned int) var_1))));
                        arr_51 [i_11] [i_3] [12U] [i_11 - 3] [i_14] = ((/* implicit */unsigned short) 268435452);
                    }
                    arr_52 [i_11] [i_7] [i_11] = ((/* implicit */int) 2083955414U);
                    arr_53 [i_0 - 3] [i_11 - 1] [i_11] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_7])) ? (((((/* implicit */_Bool) ((2083955389U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 - 2] [i_3] [i_7] [i_11])))))) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) arr_26 [2U] [i_11 + 1] [i_0 - 2] [i_0])))) : (((/* implicit */int) arr_16 [i_0 - 2] [i_0]))));
                    var_29 = ((/* implicit */unsigned char) var_1);
                }
            }
            arr_54 [(unsigned short)11] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (short)-17172)) > (((/* implicit */int) var_7)))))) ? ((+(((/* implicit */int) arr_28 [i_0 + 1] [i_0 - 2] [(unsigned char)5] [i_0 - 1])))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_38 [i_0] [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        }
    }
    /* LoopSeq 2 */
    for (unsigned char i_15 = 1; i_15 < 8; i_15 += 3) 
    {
        var_30 = (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_13))));
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (+(((/* implicit */int) arr_42 [19] [i_15 + 1])))))));
        var_32 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_36 [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15] [i_15] [i_15])))) / ((-(((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned char i_16 = 2; i_16 < 16; i_16 += 4) 
    {
        arr_61 [i_16 - 2] = ((/* implicit */unsigned int) min(((short)-24160), (((/* implicit */short) (unsigned char)255))));
        var_33 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)103)), (((((/* implicit */int) (unsigned short)11346)) / (((/* implicit */int) (unsigned char)57))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_36 [(unsigned short)15] [(unsigned short)15] [i_16] [(_Bool)1] [i_16 - 1] [(_Bool)1]))))) ? (((unsigned int) var_12)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_16] [i_16] [(unsigned char)20] [i_16 + 1] [i_16 - 2]))))));
        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (!((((!(((/* implicit */_Bool) var_15)))) || ((!(((/* implicit */_Bool) arr_43 [i_16 - 1] [(_Bool)1] [i_16 - 2] [i_16] [i_16] [i_16])))))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_17 = 0; i_17 < 25; i_17 += 3) 
    {
        arr_64 [i_17] = ((/* implicit */unsigned short) ((((2940898603U) > (((/* implicit */unsigned int) var_11)))) ? (93038760U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */int) var_1)))))));
        arr_65 [i_17] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        arr_66 [i_17] [i_17] = ((/* implicit */unsigned short) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_17])))));
    }
    var_35 = ((/* implicit */unsigned int) var_3);
}
