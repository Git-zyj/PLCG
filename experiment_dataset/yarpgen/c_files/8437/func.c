/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8437
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)2047)), ((unsigned short)2047)))) == (((((/* implicit */int) (unsigned short)50768)) - (((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_12 += ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)37119))));
                    var_13 &= ((/* implicit */unsigned char) var_7);
                    arr_7 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) max((arr_3 [i_2]), (arr_1 [i_0])));
                    arr_8 [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_5 [22U] [i_1] [i_2]);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_0)))))))) ? (((/* implicit */int) max(((unsigned char)48), (((/* implicit */unsigned char) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_3)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (unsigned short)26074))))) ? (((/* implicit */int) arr_3 [12ULL])) : (((/* implicit */int) min((arr_1 [i_0]), (var_10))))))));
        arr_10 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), ((unsigned short)39461)))) ? (min((arr_6 [i_0]), (arr_6 [i_0]))) : (((/* implicit */int) arr_3 [i_0]))))) + (((((arr_4 [i_0] [i_0] [i_0]) * (arr_5 [i_0] [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [(unsigned char)12])) ? (((/* implicit */int) (unsigned short)39433)) : (((/* implicit */int) arr_1 [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            arr_18 [i_3] [i_3] [i_3] |= arr_4 [1] [i_3 + 2] [i_3 + 2];
            var_14 |= ((/* implicit */unsigned int) arr_15 [i_3 + 2] [i_4] [i_3]);
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) arr_17 [(unsigned short)11] [(unsigned short)11])) : (arr_6 [i_4])))) ? (var_1) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)47388)) : (((/* implicit */int) (unsigned char)78))))));
            arr_19 [i_4] [i_3] = ((/* implicit */unsigned long long int) var_4);
        }
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            arr_24 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) 413326083U))));
            /* LoopNest 3 */
            for (unsigned short i_6 = 2; i_6 < 15; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    for (unsigned short i_8 = 3; i_8 < 14; i_8 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */int) var_4);
                            var_17 *= ((/* implicit */unsigned short) arr_14 [i_3 - 2] [i_6 - 1]);
                            arr_32 [i_3 - 3] [i_3] [11] [i_7] [14ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */int) arr_16 [i_5] [4U] [i_7])) : (((/* implicit */int) arr_30 [i_7] [i_7] [i_6 - 1]))));
                            arr_33 [i_7] [5ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (arr_5 [i_7] [i_6 - 1] [i_7]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_8] [i_7] [i_3] [i_6 + 1] [(unsigned short)6] [i_3] [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_12 [i_3])))))));
                        }
                    } 
                } 
            } 
            arr_34 [i_5] [i_3] [i_3] = (!(((/* implicit */_Bool) ((short) var_8))));
            arr_35 [i_3] [i_3] = ((/* implicit */unsigned int) arr_16 [i_3 + 2] [i_5] [i_5]);
        }
        for (unsigned int i_9 = 4; i_9 < 15; i_9 += 2) /* same iter space */
        {
            arr_39 [i_3] [i_3] [i_3 + 1] |= (+(arr_15 [i_9] [i_9 - 1] [i_3 + 2]));
            var_18 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_0 [i_9])))) >= (((/* implicit */int) ((unsigned short) arr_21 [i_9] [i_3])))));
            var_19 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_3 + 3] [i_3 + 1] [i_9 - 4]))));
        }
        for (unsigned int i_10 = 4; i_10 < 15; i_10 += 2) /* same iter space */
        {
            arr_43 [i_3] [(unsigned char)0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_10] [i_10] [(unsigned short)10])) <= (((/* implicit */int) ((((/* implicit */int) (unsigned short)36680)) == (((/* implicit */int) var_3)))))));
            var_20 &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_10 - 3] [i_3 + 3] [i_3 + 3]))));
        }
        arr_44 [7U] [i_3] = ((/* implicit */unsigned long long int) var_2);
        arr_45 [i_3 - 2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_30 [(unsigned short)12] [(unsigned short)12] [(unsigned short)12])) ? (((/* implicit */int) arr_37 [i_3 - 3])) : (((/* implicit */int) var_3))))));
    }
    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) 
    {
        var_21 = ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) var_11)), (2672917933693023986ULL)))))) ? (((/* implicit */int) min((arr_46 [i_11]), (arr_3 [i_11])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) >= (arr_5 [i_11] [i_11] [i_11])))));
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 1; i_15 < 20; i_15 += 3) 
                        {
                            {
                                arr_56 [i_12] [i_12] [i_12] [i_13] [i_14] [19ULL] [i_15] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_6 [i_15 + 1])) ? (arr_6 [i_15 - 1]) : (arr_51 [i_15 - 1] [i_15 - 1])))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28855)))))) + (((((/* implicit */_Bool) max((var_5), (arr_53 [(unsigned short)8] [i_11] [(unsigned short)8] [i_11] [i_11] [(unsigned short)8])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_11]))))) : (var_4)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 1; i_16 < 20; i_16 += 3) 
                    {
                        for (short i_17 = 0; i_17 < 21; i_17 += 3) 
                        {
                            {
                                arr_62 [(unsigned short)19] [(unsigned short)15] [i_12] [i_16 - 1] [i_17] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)26089)))) >= (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) var_2)), (arr_3 [i_16])))))));
                                var_23 -= ((/* implicit */_Bool) (+(max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32497)) || (((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))))));
                                arr_63 [i_11] [i_12] [(_Bool)1] [i_16] [i_17] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) ((unsigned short) var_0))) / (((/* implicit */int) min((arr_46 [i_11]), (((/* implicit */unsigned short) arr_61 [i_12] [i_12]))))))));
                            }
                        } 
                    } 
                    var_24 &= ((/* implicit */unsigned short) var_3);
                    arr_64 [i_11] [i_12] [i_11] [i_13] = ((/* implicit */int) arr_52 [i_12] [i_11] [i_11] [i_11] [i_13]);
                    arr_65 [(_Bool)1] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((arr_53 [i_11] [i_11] [i_12] [i_11] [(unsigned short)12] [i_13]) << (((/* implicit */int) arr_52 [i_12] [i_11] [i_12] [i_11] [i_12]))))) || (((/* implicit */_Bool) arr_57 [i_11] [i_12] [(_Bool)1] [(unsigned short)15])))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */_Bool) var_1);
}
