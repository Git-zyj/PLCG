/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74393
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_3))) != (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) ? (3152346391513457405LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned short)17] [i_0]))))))));
        var_20 = ((/* implicit */_Bool) ((unsigned char) ((_Bool) arr_1 [i_0])));
        arr_4 [(unsigned char)14] = ((/* implicit */unsigned long long int) var_7);
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 3; i_4 < 23; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 3152346391513457405LL)) ? (((unsigned int) (unsigned short)2849)) : (((/* implicit */unsigned int) ((/* implicit */int) ((278338722U) < (((/* implicit */unsigned int) -892087514)))))))), (((/* implicit */unsigned int) arr_14 [i_4 - 3] [i_5]))));
                                var_22 = ((/* implicit */signed char) -892087514);
                                arr_20 [i_5] [i_3] [i_3] [(unsigned short)9] [i_2] [i_3] [(unsigned short)9] = ((_Bool) max((((/* implicit */signed char) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))), (((signed char) var_8))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70))) ^ (278338722U))))));
                    var_24 = ((/* implicit */int) var_12);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) (unsigned char)154);
        arr_25 [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (signed char)-59)), (9606689944214400942ULL)));
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            var_26 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((0ULL) >> (((/* implicit */int) (unsigned short)0))))) ? (((0U) >> (((811681906U) - (811681887U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 4073131715U)))))));
            arr_28 [i_7] [i_6] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) (short)31918)));
            var_27 = var_14;
        }
        var_28 = ((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (_Bool)0))));
        var_29 += ((/* implicit */unsigned char) var_1);
    }
    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned char) (unsigned short)9105);
        arr_31 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) - (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (4294967295U)))));
        var_31 = ((/* implicit */long long int) var_14);
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        var_32 = ((/* implicit */unsigned short) (!(arr_26 [i_9])));
        /* LoopSeq 2 */
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
        {
            var_33 = ((/* implicit */long long int) (-(((/* implicit */int) arr_30 [i_9]))));
            var_34 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_9)) >> (((/* implicit */int) var_4))))));
        }
        for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                var_35 += ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                arr_42 [i_9] [(signed char)1] = ((_Bool) -7491760631495078467LL);
            }
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                for (signed char i_14 = 3; i_14 < 11; i_14 += 2) 
                {
                    {
                        arr_47 [(short)13] [1LL] [i_13] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)52266)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)154))));
                        var_36 = ((/* implicit */unsigned short) ((signed char) arr_15 [i_14 + 2] [i_14 - 1] [i_13] [i_13] [i_9]));
                        arr_48 [(short)6] [i_9] [(short)6] [i_13] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (var_1)))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) > (14136125681962079843ULL))))));
                        arr_49 [i_9] [i_11] [i_11] [i_11] [i_9] [i_9] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
                        var_37 = ((/* implicit */_Bool) var_15);
                    }
                } 
            } 
            arr_50 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_11] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_10)));
        }
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            for (unsigned short i_16 = 0; i_16 < 14; i_16 += 1) 
            {
                {
                    arr_56 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) (unsigned char)154);
                    var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) 9006649498927104LL))));
                    var_40 = ((/* implicit */unsigned short) ((3278056449867523549LL) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775789LL))) + (44LL)))));
                }
            } 
        } 
        arr_57 [i_9] = var_13;
    }
}
