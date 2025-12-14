/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7056
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) (~(min((((/* implicit */int) min((((/* implicit */short) var_11)), (var_0)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 2])) : (-2057407535)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) (+((~((+(-8655282383637064089LL)))))));
                    var_16 += ((/* implicit */unsigned long long int) var_0);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        arr_8 [i_2] [i_2] [i_0 - 2] [i_2] = ((/* implicit */unsigned char) (~(2057407534)));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1 - 2] [i_0 - 2])) >> (((((/* implicit */int) arr_3 [i_1 - 2] [i_0 - 2])) - (9215)))));
                        var_18 = ((/* implicit */unsigned short) ((signed char) arr_5 [i_1 - 2] [i_2 - 1] [i_3 + 2]));
                        var_19 = ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (-8655282383637064089LL) : (((/* implicit */long long int) var_5))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) var_9);
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0 - 1]))) ? (((/* implicit */unsigned int) var_2)) : (((((((/* implicit */_Bool) (signed char)-125)) && (arr_9 [i_4] [i_2] [i_1] [i_0]))) ? (((/* implicit */unsigned int) 2057407535)) : (max((((/* implicit */unsigned int) -2057407535)), (var_6)))))))));
                        var_22 = ((/* implicit */unsigned short) var_1);
                    }
                }
            } 
        } 
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
        {
            arr_15 [i_0] [i_0] [i_5] = ((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 2] [i_5]);
            arr_16 [(short)5] [i_5] [11U] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_2 [(unsigned short)8])))));
            var_23 = ((/* implicit */signed char) arr_3 [i_0 - 1] [i_5]);
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) ((int) 280364971U));
            arr_20 [i_6] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) 8655282383637064089LL)) ? (2741024722223701115ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
        }
        for (short i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */short) ((((((var_12) <= (var_12))) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)125)) && (((/* implicit */_Bool) arr_19 [i_0])))))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)124)) & (((/* implicit */int) (_Bool)1)))))));
            var_26 = ((/* implicit */short) (~(var_2)));
        }
        for (short i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned int) arr_6 [i_0]);
            /* LoopSeq 3 */
            for (unsigned short i_9 = 1; i_9 < 12; i_9 += 2) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned short) (_Bool)1);
                var_29 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0 - 2]);
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    arr_30 [i_0] [i_8] [i_10] [i_9] [i_10] [1LL] = ((/* implicit */unsigned int) ((short) (-(((/* implicit */int) ((_Bool) 2057407535))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 2; i_11 < 13; i_11 += 4) 
                    {
                        var_30 &= ((/* implicit */unsigned short) var_3);
                        var_31 -= ((/* implicit */unsigned int) (((_Bool)1) ? (4480756417538745471LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 2; i_12 < 11; i_12 += 2) 
                    {
                        var_32 = var_1;
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((4691685600827567746ULL) == (((/* implicit */unsigned long long int) 4260422450U)))))));
                        var_34 = ((/* implicit */int) ((((/* implicit */int) arr_24 [i_0])) <= (((/* implicit */int) var_10))));
                        var_35 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned short)46646)) ^ (((/* implicit */int) (_Bool)0))))));
                    }
                    for (short i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        var_36 = ((/* implicit */long long int) ((short) min((((/* implicit */int) ((-5763568387128930146LL) != (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) 2057407534)) ? (((/* implicit */int) arr_29 [i_0] [i_8] [i_9 + 1] [(unsigned short)10] [i_13] [(signed char)9])) : (arr_5 [i_13] [i_10] [i_8]))))));
                        var_37 = ((((/* implicit */_Bool) arr_31 [i_0] [i_8] [4LL] [i_10] [i_8])) ? (((/* implicit */int) (((+(((/* implicit */int) (unsigned short)45893)))) < (((/* implicit */int) arr_34 [10] [10] [5] [5] [10] [10]))))) : (((/* implicit */int) arr_3 [i_0] [i_0])));
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -2057407535)))))));
                        var_39 = ((/* implicit */unsigned char) ((long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19643))) : (var_3))));
                    }
                    arr_38 [4] [i_10] [4] [i_10] = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)19643));
                }
            }
            /* vectorizable */
            for (unsigned short i_14 = 1; i_14 < 12; i_14 += 2) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)1468))));
                var_41 = (-(((((/* implicit */_Bool) arr_28 [i_14] [i_8] [(short)6] [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_11 [i_8] [i_8] [i_14])) : (((/* implicit */int) arr_41 [i_0] [(signed char)12] [(unsigned short)11])))));
                var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)3)) >> (((-2057407564) + (2057407569)))))) ? (((((/* implicit */_Bool) 748493087)) ? (7040520900016285869LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18890))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
                var_43 = ((/* implicit */short) 7514491894025521957ULL);
            }
            for (unsigned short i_15 = 1; i_15 < 12; i_15 += 2) /* same iter space */
            {
                arr_46 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_15 + 2] [i_15 + 1])) < (((/* implicit */int) arr_3 [i_15 - 1] [i_15 + 2]))))) / (arr_42 [i_0])));
                var_44 = ((/* implicit */long long int) (((-(748493081))) & (((/* implicit */int) (unsigned short)18173))));
            }
            /* LoopSeq 1 */
            for (signed char i_16 = 0; i_16 < 14; i_16 += 1) 
            {
                var_45 = ((((/* implicit */_Bool) ((unsigned short) (unsigned short)55215))) ? (((long long int) (unsigned short)20313)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 + 1])) != (((/* implicit */int) arr_45 [i_0 + 2] [i_0 - 2] [i_0])))))));
                var_46 = ((/* implicit */long long int) arr_32 [i_16] [4] [i_16]);
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 14; i_17 += 3) 
                {
                    for (long long int i_18 = 0; i_18 < 14; i_18 += 1) 
                    {
                        {
                            var_47 = ((/* implicit */short) min((((int) -2697486113088672575LL)), (((/* implicit */int) ((short) ((unsigned char) var_5))))));
                            var_48 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [i_0 + 2] [i_0 + 1]))));
                        }
                    } 
                } 
            }
        }
    }
    var_49 = ((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned short) min((var_9), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) < (748493103)))))))));
}
