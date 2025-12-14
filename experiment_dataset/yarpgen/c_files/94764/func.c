/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94764
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
    var_11 -= ((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
                    {
                        var_12 = ((/* implicit */short) (~(((((/* implicit */int) (unsigned short)58823)) + (((/* implicit */int) arr_4 [i_0] [i_0]))))));
                        var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_5 [i_0] [i_1 - 2] [i_2]))))) : (((/* implicit */int) min((var_4), (((/* implicit */unsigned char) arr_6 [i_0] [i_1 + 2] [i_2]))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 2] [i_1 - 1])))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
                    {
                        var_14 -= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) (unsigned short)6713))))) / (-4614563189187885356LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [(unsigned short)10] [i_4])))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 2; i_5 < 18; i_5 += 2) 
                        {
                            arr_16 [19ULL] [i_5] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1] [i_1 + 1] [i_2]))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_4]))) % (((((/* implicit */_Bool) 4614563189187885358LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_7)))))));
                            var_15 *= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_9 [i_2] [i_5] [i_5 - 1] [i_2] [i_5] [i_5 + 1])) + (((/* implicit */int) arr_15 [(unsigned char)15] [i_1] [(unsigned char)15] [i_4] [i_5] [i_5 - 2])))));
                            arr_17 [i_0] [i_1] = ((/* implicit */unsigned short) arr_14 [13LL] [(signed char)6]);
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) ((signed char) (unsigned char)1)))))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_21 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) (signed char)70)), ((-(arr_18 [(_Bool)1] [i_6] [(_Bool)1] [(_Bool)1] [i_6 + 1] [i_1 + 2] [(_Bool)1])))));
                            arr_22 [i_6] [i_1] [i_1] [i_0] [(_Bool)1] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_1 + 2] [(signed char)9])) != (((((/* implicit */int) (signed char)-65)) + (((/* implicit */int) var_6)))))))));
                            arr_23 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned char) arr_13 [i_6] [i_0] [i_2] [i_0] [i_0])), (arr_4 [i_0] [i_0]))))))) ? (((/* implicit */int) ((short) ((signed char) var_5)))) : (((/* implicit */int) ((short) arr_1 [i_0])))));
                        }
                        /* vectorizable */
                        for (short i_7 = 3; i_7 < 19; i_7 += 2) 
                        {
                            arr_28 [i_1 + 2] [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) & (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))) : (arr_26 [i_7 + 2] [i_7] [i_7] [i_1 - 1] [i_1 - 1]));
                            var_17 = ((((/* implicit */int) (unsigned short)58822)) != (arr_11 [i_0] [i_1 + 2] [i_7 - 2]));
                        }
                    }
                    arr_29 [i_0] [15ULL] [i_2] = ((/* implicit */unsigned char) ((signed char) ((unsigned char) min((((/* implicit */long long int) arr_19 [i_1 + 2] [i_1] [i_1] [i_1 + 2] [(unsigned char)0])), (-4614563189187885354LL)))));
                    arr_30 [i_0] [i_1] [i_2] = ((/* implicit */short) min(((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)11))) < (var_3)))))), (((arr_13 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2]) ? (((/* implicit */int) ((2745941211U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        for (short i_9 = 2; i_9 < 20; i_9 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((_Bool) ((unsigned char) (-(((/* implicit */int) (unsigned char)252))))));
                                arr_39 [i_9] [14ULL] [i_2] [i_8 + 1] [i_8 + 1] &= ((/* implicit */short) arr_33 [i_2] [i_2] [i_2] [i_1] [i_1] [i_0]);
                            }
                        } 
                    } 
                    arr_40 [i_0] [i_0] = ((/* implicit */short) ((unsigned short) ((short) var_2)));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_10 = 2; i_10 < 14; i_10 += 3) /* same iter space */
    {
        arr_43 [i_10] [i_10] = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) ((signed char) arr_7 [i_10]))), (((((/* implicit */_Bool) arr_15 [i_10] [i_10] [i_10] [1LL] [i_10] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))), (((((/* implicit */int) arr_12 [i_10 + 1] [i_10])) % (((/* implicit */int) ((_Bool) var_10)))))));
        /* LoopNest 3 */
        for (long long int i_11 = 4; i_11 < 12; i_11 += 3) 
        {
            for (int i_12 = 1; i_12 < 12; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    {
                        arr_51 [i_10] = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */unsigned long long int) max((arr_0 [i_11]), (((/* implicit */int) arr_34 [11LL]))))), (((((/* implicit */_Bool) var_2)) ? (arr_32 [i_10] [i_10] [i_10] [i_10] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58823))))))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_10] [i_10] [i_10] [i_13] [i_13])) / (arr_49 [i_13] [i_12])))) ? (((/* implicit */int) max(((unsigned char)94), (arr_2 [i_13] [i_13])))) : (((/* implicit */int) ((unsigned char) var_5))))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned char) ((_Bool) (!((!(((/* implicit */_Bool) var_7)))))));
    }
    for (unsigned char i_14 = 2; i_14 < 14; i_14 += 3) /* same iter space */
    {
        var_21 -= ((/* implicit */unsigned char) ((signed char) ((arr_44 [14ULL] [i_14 + 1] [i_14 + 1]) - (arr_44 [(unsigned char)10] [i_14 - 2] [i_14 + 1]))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2788757081U), (((/* implicit */unsigned int) (short)-1506))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (((long long int) var_9))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_38 [(signed char)14] [i_14] [i_14 - 2] [i_14 - 2] [i_14 + 1])), ((unsigned short)1)))) ? (arr_24 [(signed char)6] [i_14] [i_14] [i_14 + 1] [i_14] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned char)18]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (unsigned short)65535))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-106)) < (((/* implicit */int) (signed char)-126))))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_14] [i_14] [i_14])) != (((/* implicit */int) arr_37 [i_14 - 1] [i_14] [i_14] [i_14] [i_14]))))))))));
        arr_55 [i_14 - 1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((signed char) ((signed char) (unsigned short)0)))), (((unsigned int) (unsigned short)33772))));
        /* LoopNest 3 */
        for (short i_15 = 0; i_15 < 15; i_15 += 2) 
        {
            for (short i_16 = 0; i_16 < 15; i_16 += 2) 
            {
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    {
                        arr_64 [i_14] [i_14] [i_16] [i_17] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [(signed char)20] [i_16] [i_16]))))) ? (max((((unsigned long long int) arr_59 [(_Bool)1] [(_Bool)1] [i_16] [i_17 - 1])), (((/* implicit */unsigned long long int) arr_26 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1])))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_10 [i_14] [i_15] [i_16])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_9)))))))));
                        var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) arr_6 [(unsigned char)16] [i_16] [i_16]))))) ? (((/* implicit */int) var_1)) : (-456875955)))) ? (((/* implicit */int) ((short) max((((/* implicit */unsigned char) arr_59 [i_15] [i_15] [0ULL] [0ULL])), ((unsigned char)20))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (arr_18 [i_14] [i_14] [(unsigned short)1] [i_17 - 1] [i_14] [i_15] [i_17]) : (((/* implicit */long long int) arr_27 [i_14] [i_17] [i_17] [i_17 - 1] [i_17 - 1]))))))));
                        arr_65 [i_15] [i_15] [(_Bool)1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_49 [i_16] [i_16])) ? (35184237871104ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (arr_27 [i_14 + 1] [i_15] [i_16] [i_16] [i_17 - 1])));
                    }
                } 
            } 
        } 
        arr_66 [(_Bool)0] = ((/* implicit */signed char) ((_Bool) ((short) arr_9 [i_14] [i_14] [i_14 - 1] [i_14] [i_14] [i_14])));
    }
    /* vectorizable */
    for (unsigned char i_18 = 2; i_18 < 14; i_18 += 3) /* same iter space */
    {
        arr_71 [(signed char)14] = ((/* implicit */unsigned long long int) arr_60 [i_18]);
        arr_72 [i_18] = ((/* implicit */unsigned char) arr_69 [i_18]);
        arr_73 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_18 + 1] [i_18 + 1])) ? (arr_47 [i_18 - 2] [(signed char)11]) : (arr_47 [i_18 - 2] [14LL])));
    }
    for (unsigned char i_19 = 2; i_19 < 14; i_19 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) ((unsigned long long int) arr_3 [i_19] [i_19]));
        arr_76 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_42 [i_19] [i_19]))))) ? (((/* implicit */int) (unsigned short)25393)) : (max((((/* implicit */int) ((unsigned short) var_9))), (((((/* implicit */_Bool) (short)32752)) ? (arr_11 [i_19] [i_19] [i_19]) : (((/* implicit */int) (signed char)57))))))));
    }
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_4)))))) >> (((((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) var_1)))) + (39))))))));
    var_26 += ((unsigned short) var_1);
}
