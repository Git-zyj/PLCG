/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56533
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
    var_14 = ((/* implicit */int) var_12);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) var_7);
        arr_2 [(short)10] &= min((((/* implicit */short) (!((!(((/* implicit */_Bool) -785289814))))))), (arr_1 [i_0] [(unsigned short)8]));
        arr_3 [i_0] = ((((/* implicit */int) (unsigned char)139)) + (((/* implicit */int) (_Bool)0)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_1] [i_2 + 2] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (unsigned short)32541)) && (((/* implicit */_Bool) var_6)))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < ((~(var_3)))));
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (arr_0 [i_2 + 1] [i_2])))))));
                            var_18 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (arr_9 [i_0] [i_3] [(_Bool)1] [i_0]))));
                        }
                        arr_15 [i_0] [i_1 - 1] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) var_9);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */_Bool) (((!(((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) (unsigned char)204)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)17839))))) - (((unsigned long long int) 36028797018963968LL))))));
                        arr_20 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_5] [i_1] [i_0]))))), (min((2147483647), (((/* implicit */int) var_4)))))))));
                        var_19 = arr_18 [i_0] [i_0];
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 3 */
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */int) var_3);
                            arr_24 [i_0] [i_1] [3LL] [i_0] [i_6] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_6 [i_0] [i_0] [i_2 - 1]))))) ? (((((/* implicit */int) var_13)) + (((/* implicit */int) (unsigned char)208)))) : (((/* implicit */int) ((_Bool) (unsigned short)21575))))));
                        }
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned char) var_0);
                            arr_29 [i_0] [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-12307)), (2671805160525240108LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1014294297))))) : (-748783614)));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            var_23 = ((/* implicit */int) min((var_23), ((((!(((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))) ? (((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_11)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (9381952187935092499ULL)))))))))));
                            var_24 = ((/* implicit */short) ((unsigned short) (_Bool)1));
                            arr_34 [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) (+(((unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))));
                            arr_35 [i_0] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) arr_13 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 - 2])))));
                            var_25 ^= ((/* implicit */long long int) ((((((/* implicit */int) var_7)) >= (((((/* implicit */int) arr_7 [i_0])) - (((/* implicit */int) var_10)))))) ? (-1823918728) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)4150))))))));
                        }
                    }
                    var_26 += ((/* implicit */short) max((min((max((((/* implicit */int) var_4)), (536870400))), (((/* implicit */int) var_2)))), (((/* implicit */int) (!(((_Bool) (_Bool)1)))))));
                }
            } 
        } 
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (_Bool)1))))))));
        var_28 *= ((/* implicit */int) var_0);
        var_29 = ((/* implicit */unsigned long long int) (~(((int) -902156968))));
    }
    /* vectorizable */
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_11 = 1; i_11 < 17; i_11 += 4) 
        {
            arr_44 [i_10] = ((/* implicit */short) ((((long long int) -1)) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31790)))));
            arr_45 [(short)0] [6LL] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-16128))));
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 2) 
                {
                    {
                        arr_51 [i_10 - 1] [i_11] [i_10] [i_13] = ((((((/* implicit */_Bool) 2732665919U)) ? (((/* implicit */int) (unsigned short)56395)) : (((/* implicit */int) var_9)))) - (((/* implicit */int) (_Bool)1)));
                        arr_52 [i_11] [i_12] [i_10] = ((/* implicit */int) (+(var_12)));
                        /* LoopSeq 4 */
                        for (unsigned short i_14 = 1; i_14 < 16; i_14 += 2) 
                        {
                            arr_55 [i_10] [i_10] [i_10] [i_12] [i_10] [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_10 - 1] [i_11 + 2]))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 261632LL)) >= (((((/* implicit */unsigned long long int) 8589869056LL)) | (var_0)))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_53 [i_10 - 1] [i_11] [9] [i_11] [i_14 - 1] [i_14 + 1] [i_11 - 1]) : (((/* implicit */int) (unsigned short)16384))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) var_12))));
                            arr_58 [i_10 - 1] [i_11] [i_12] [i_10] [i_15] = ((/* implicit */short) var_3);
                        }
                        for (short i_16 = 1; i_16 < 18; i_16 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (unsigned short)33745))));
                            var_34 |= ((/* implicit */_Bool) (+(arr_53 [i_10] [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_10] [i_10])));
                        }
                        for (int i_17 = 3; i_17 < 17; i_17 += 4) 
                        {
                            arr_65 [8ULL] [i_11] [i_10] [i_13] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (arr_49 [i_17 - 3] [i_11] [i_17 - 3] [i_10 - 1])));
                            var_35 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_56 [i_11 + 1] [i_17 - 1]) : (arr_56 [i_11 + 1] [i_17 - 1])));
                        }
                    }
                } 
            } 
        }
        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_10 - 1])) ? (((/* implicit */long long int) arr_37 [i_10 - 1])) : (var_3)));
        /* LoopSeq 1 */
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((1031797939) / (((/* implicit */int) arr_40 [(short)14])))))));
            var_38 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_9))))));
        }
    }
}
