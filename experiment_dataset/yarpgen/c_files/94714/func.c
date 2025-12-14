/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94714
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (-(min((var_0), (((/* implicit */int) (_Bool)0))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_15)))))))) ? (((/* implicit */int) ((short) (~(((/* implicit */int) var_13)))))) : (min((var_5), (((/* implicit */int) var_16))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) min((1823275199), (min((((/* implicit */int) arr_6 [i_1])), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (-1823275225) : (((/* implicit */int) var_14))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) arr_14 [i_1] [i_2] [i_1] [i_4 - 2] [i_4 + 1] [i_4 - 2]);
                            arr_17 [(_Bool)1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)0))));
                        }
                        for (unsigned short i_5 = 2; i_5 < 9; i_5 += 4) /* same iter space */
                        {
                            var_23 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_5] [i_3])) ? (arr_7 [i_0] [i_0] [i_3]) : (arr_7 [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) ((max((var_4), (var_10))) && ((!(var_15)))))) : (((/* implicit */int) min((max((((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [(unsigned short)2])), (var_11))), (((/* implicit */short) arr_16 [i_0] [i_1] [i_5]))))));
                            var_24 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_15 [i_2] [i_5 + 1] [i_2] [i_5 - 1] [i_5 + 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * (arr_5 [i_5 - 2] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1823275193)) ? (var_5) : (((/* implicit */int) var_2))))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) var_13))), (((((/* implicit */_Bool) arr_6 [i_3])) ? (2284584852U) : (((/* implicit */unsigned int) 692575360)))))))));
                        }
                        var_26 = ((/* implicit */short) (+((-(arr_9 [i_1])))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            arr_25 [i_6] [i_6] [10U] = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_17)))));
            arr_26 [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) ((unsigned short) (_Bool)1));
        }
        for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            arr_30 [3ULL] [i_6] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */int) ((1823275213) != (((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) ((arr_22 [i_6]) + (((/* implicit */int) (_Bool)1))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17491))))) : (max((((((/* implicit */_Bool) var_3)) ? (arr_24 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6]))))), (var_1)))));
            arr_31 [i_6] [i_8] = ((/* implicit */short) (+(min((((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)21490)))), (((/* implicit */int) var_18))))));
        }
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((8388600), (((/* implicit */int) (unsigned short)61761))))), (((((/* implicit */_Bool) (unsigned short)42843)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_6] [i_6]))))) : (((long long int) ((((/* implicit */int) (unsigned short)3781)) ^ (arr_22 [i_6]))))));
        arr_32 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_6])) ? (((unsigned int) (unsigned char)112)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_27 [i_6])))))))));
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            for (int i_10 = 2; i_10 < 17; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            {
                                arr_44 [(unsigned char)2] [(unsigned char)2] [15U] [i_9] [i_11] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)61757), (((/* implicit */unsigned short) var_2))))) + (((/* implicit */int) max(((signed char)11), (((/* implicit */signed char) var_4)))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4564))) : (arr_40 [i_6] [i_9] [i_10 - 1] [i_9] [i_11] [i_12]))))) : (((/* implicit */int) (unsigned char)128))));
                                var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_43 [i_10 - 2] [i_10 - 2] [i_9] [i_10 - 1] [i_10 - 2] [i_10 - 2])) ? (((((/* implicit */_Bool) var_5)) ? (arr_24 [4LL]) : (((/* implicit */unsigned long long int) arr_22 [i_11])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_38 [i_6] [i_6] [i_6] [2] [2])))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) min((arr_27 [i_6]), (arr_27 [i_9])))), (max((arr_28 [i_9]), (((/* implicit */long long int) arr_38 [i_6] [(short)13] [i_9] [i_9] [i_6])))))), (((/* implicit */long long int) (signed char)17))));
                }
            } 
        } 
    }
    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_43 [2ULL] [(unsigned short)12] [(unsigned short)12] [(unsigned short)12] [i_13] [i_13])) ? (((/* implicit */int) (unsigned short)10842)) : (var_5))), (((((/* implicit */_Bool) arr_37 [(unsigned short)8] [(unsigned short)8])) ? (((/* implicit */int) (signed char)0)) : (8388600)))))), (((((/* implicit */_Bool) ((long long int) arr_36 [i_13] [i_13] [8LL] [i_13]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)40769), (((/* implicit */unsigned short) var_13)))))) : (13982355648761250372ULL)))));
        var_31 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) min((2375481742U), (((/* implicit */unsigned int) (unsigned char)41))))), (arr_29 [i_13] [i_13] [i_13]))), (((/* implicit */unsigned long long int) (short)-12884))));
        var_32 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) min((arr_42 [i_13] [i_13] [i_13]), (var_14)))), (((unsigned short) arr_35 [i_13] [i_13]))));
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_13] [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_38 [i_13] [i_13] [i_13] [i_13] [(_Bool)1])) : (((/* implicit */int) arr_38 [i_13] [i_13] [i_13] [i_13] [i_13]))));
    }
    var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
    var_35 = ((/* implicit */unsigned int) (-(min((var_0), ((-(var_0)))))));
    var_36 = ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
}
