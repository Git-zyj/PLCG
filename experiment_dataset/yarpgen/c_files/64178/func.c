/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64178
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
    var_20 = ((/* implicit */int) (+(((long long int) -2413006597801314331LL))));
    var_21 = ((/* implicit */short) ((var_4) | (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (arr_0 [(_Bool)1] [i_0])))) ? ((+(arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22032))) : (arr_0 [i_0] [i_0]))))))));
        var_23 = ((/* implicit */_Bool) ((short) arr_1 [i_0]));
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            var_24 = ((((/* implicit */_Bool) 3930996750279922323LL)) || ((_Bool)0));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */short) max((((/* implicit */int) arr_2 [i_0] [i_1])), (((((_Bool) (short)-18681)) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1] [i_1 - 1] [i_2])) : (((/* implicit */int) var_12))))));
                            var_26 = ((((/* implicit */_Bool) ((long long int) max((var_11), (var_11))))) ? (-3930996750279922303LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        }
                    } 
                } 
            } 
            arr_10 [i_0] [i_0] = var_15;
        }
        for (unsigned int i_5 = 1; i_5 < 17; i_5 += 4) 
        {
            var_27 = min((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [i_0] [i_0] [i_5 + 1]) ? (var_6) : (((/* implicit */long long int) var_14))))) || (var_9)))), ((((+(var_15))) / (((/* implicit */long long int) ((((/* implicit */_Bool) -3930996750279922324LL)) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) arr_14 [i_0]))))))));
            arr_15 [5U] [5U] [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (-2147483647 - 1)))) ? (arr_3 [i_5] [i_5] [i_0]) : ((+(var_13)))))) - (9223372036854775807LL)));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_25 [(short)10] [(short)10] [15LL] [i_6] &= ((/* implicit */long long int) arr_22 [i_8] [i_7]);
                    /* LoopSeq 2 */
                    for (long long int i_9 = 3; i_9 < 24; i_9 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (2147483642)));
                        arr_28 [(_Bool)1] [i_7] [(_Bool)1] [(unsigned char)9] = ((/* implicit */int) (-((~(((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (arr_17 [i_6])))))));
                        var_29 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_3)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_10 = 4; i_10 < 24; i_10 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned short) ((unsigned int) 5465644976833979944LL));
                            var_31 = ((/* implicit */short) ((_Bool) var_4));
                        }
                        var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_8])) ? (arr_29 [i_6] [i_6] [i_6] [i_8] [i_6] [21LL] [i_9 - 1]) : (((/* implicit */int) (short)-22914))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 36588471898074289LL)) ? (((/* implicit */long long int) var_19)) : (var_4)))))) : ((+(var_6)))));
                    }
                    for (long long int i_11 = 3; i_11 < 24; i_11 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 25; i_12 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned int) (-(min((var_3), (((/* implicit */long long int) (-(var_19))))))));
                            var_34 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) (~(((/* implicit */int) var_8))))), (min((arr_20 [i_11] [i_8] [i_6]), (((/* implicit */long long int) var_13)))))) ^ (((long long int) ((2842768303U) < (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
                            var_35 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_14)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_6] [i_8] [i_8] [i_11 - 2] [i_12]))) - (-3930996750279922303LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_6] [i_12] [i_8] [i_6] [i_7] [i_7])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_34 [i_6] [i_7] [i_8] [i_11 + 1] [i_12])))))));
                            var_36 = ((/* implicit */_Bool) (((((~(((/* implicit */int) var_11)))) < ((~(((/* implicit */int) var_9)))))) ? (((((/* implicit */long long int) (+(arr_36 [i_6] [i_7] [(short)21] [(_Bool)1] [i_11])))) | (min((((/* implicit */long long int) 1168192185)), (arr_17 [i_7]))))) : (min((var_3), (((/* implicit */long long int) var_5))))));
                        }
                        arr_37 [i_11] [i_11] [i_11] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) (short)-17671))))), (((long long int) (!(((/* implicit */_Bool) 3439709459244920215LL)))))));
                    }
                    var_37 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_8] [i_8] [(short)14])) ? (arr_17 [i_6]) : (arr_30 [i_6] [(unsigned char)8] [i_8] [i_6] [i_7]))) ^ (max(((-(arr_17 [i_6]))), (min((((/* implicit */long long int) arr_35 [i_6] [i_6] [i_6] [i_6])), (arr_24 [i_6] [i_7] [i_7] [i_8])))))));
                }
            } 
        } 
        var_38 = ((/* implicit */short) (-(var_19)));
        arr_38 [i_6] = ((/* implicit */int) ((arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [(unsigned char)10]) == (((/* implicit */int) ((_Bool) ((arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) % (((/* implicit */int) (unsigned short)43504))))))));
    }
    for (unsigned char i_13 = 1; i_13 < 21; i_13 += 4) 
    {
        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (short)-799)) : (((/* implicit */int) (short)-17657))))) : ((~((-9223372036854775807LL - 1LL))))))) ? (max((((/* implicit */long long int) min(((short)-2840), (((/* implicit */short) (unsigned char)30))))), (arr_17 [i_13 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 - 1])))));
        /* LoopNest 2 */
        for (long long int i_14 = 1; i_14 < 20; i_14 += 4) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    var_40 &= ((/* implicit */long long int) ((unsigned char) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) var_7))))));
                    arr_47 [i_13 - 1] [i_13 - 1] [i_15] [4LL] = (-((-(min((-8222875320501892647LL), (((/* implicit */long long int) (short)-1)))))));
                }
            } 
        } 
        var_41 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [(short)7] [10LL]))))) ? (((long long int) var_18)) : ((-(arr_45 [8] [i_13] [i_13])))))) ? (min((max((((/* implicit */long long int) arr_34 [(unsigned char)2] [(_Bool)1] [(unsigned char)2] [i_13] [i_13])), (0LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_13] [i_13] [i_13])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) | (min((arr_44 [i_13] [i_13] [i_13] [i_13]), (((/* implicit */unsigned int) var_1)))))))));
    }
    var_42 = ((/* implicit */unsigned short) var_4);
}
