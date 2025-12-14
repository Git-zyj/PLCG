/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67942
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
    var_12 &= ((/* implicit */short) (+(((((/* implicit */_Bool) min((var_10), (var_11)))) ? (-2007280198716487133LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)29))) : (8388607U))))))));
    var_13 = ((/* implicit */unsigned char) var_0);
    var_14 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)0))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_15 = min((((((/* implicit */_Bool) (signed char)29)) ? (6872340289700145108ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))), ((+(((unsigned long long int) (signed char)-1)))));
        var_16 = ((/* implicit */unsigned short) (unsigned char)0);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (short)32767));
    }
    for (unsigned short i_1 = 2; i_1 < 16; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 17; i_2 += 2) 
        {
            for (int i_3 = 2; i_3 < 14; i_3 += 2) 
            {
                {
                    var_17 -= ((/* implicit */_Bool) var_6);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 16; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (((_Bool)1) ? (-8192080025326400293LL) : (((/* implicit */long long int) 1099381146U))));
                                arr_19 [i_1] [i_2] [i_4] [i_2 + 1] [i_4] [i_4 - 1] [i_5 + 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4 - 1])) && (((/* implicit */_Bool) arr_1 [i_1 + 1])))))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)24144))));
                                arr_20 [i_3] [i_2] [i_3] [i_3] [(short)10] |= ((/* implicit */int) arr_10 [1LL] [i_2 - 1]);
                            }
                        } 
                    } 
                    arr_21 [i_1] [i_1] [3] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)24)) ? (var_0) : (arr_6 [i_1] [i_1])))) ? (((((/* implicit */int) (unsigned char)21)) / (((/* implicit */int) (unsigned char)21)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-580)), ((unsigned short)58247)))))) >= (((/* implicit */int) ((short) ((var_11) ^ (((/* implicit */int) (short)-1))))))));
                }
            } 
        } 
        arr_22 [i_1 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8192080025326400292LL)) ? (8630427621600947518ULL) : (((/* implicit */unsigned long long int) 862623511))));
    }
    for (unsigned char i_6 = 2; i_6 < 17; i_6 += 1) 
    {
        arr_27 [i_6 + 1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6 - 2])) ? (((/* implicit */int) arr_4 [i_6 + 1])) : (((/* implicit */int) arr_23 [i_6 + 1]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_6 - 1]))))) : (var_9)));
        arr_28 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)3))))) : (((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) : (8192080025326400292LL)))));
        /* LoopSeq 3 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 1; i_8 < 17; i_8 += 2) 
            {
                for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    {
                        arr_38 [i_9] [i_6] [i_8] [i_9] = ((/* implicit */short) var_4);
                        arr_39 [i_6] [i_6] [i_6 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2958966453U)) ? (((/* implicit */int) var_7)) : (arr_9 [i_6 - 2])))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) max((((/* implicit */short) (signed char)77)), ((short)567)))) : (((/* implicit */int) (short)579))))) : (var_0)));
                    }
                } 
            } 
            var_20 ^= ((/* implicit */unsigned short) arr_1 [i_7 - 1]);
        }
        for (int i_10 = 3; i_10 < 16; i_10 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)194)) : (-534003905)))) ? ((-(arr_25 [i_10 - 3] [i_6 + 1]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)246)))))))));
            arr_44 [i_6] [i_6] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (arr_16 [i_10] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) arr_14 [i_6] [i_10 - 1] [i_6 + 1] [i_10])) : ((+(arr_15 [i_6 - 2] [i_10] [i_10] [i_6 - 2] [i_6]))))), (arr_16 [i_6 - 2] [i_6] [i_10] [3ULL])));
        }
        for (int i_11 = 3; i_11 < 16; i_11 += 2) /* same iter space */
        {
            arr_48 [(signed char)7] [i_6] [i_6] = ((/* implicit */_Bool) var_4);
            /* LoopNest 2 */
            for (signed char i_12 = 1; i_12 < 15; i_12 += 2) 
            {
                for (signed char i_13 = 3; i_13 < 16; i_13 += 4) 
                {
                    {
                        arr_56 [i_6] [i_13] [i_12 + 2] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) 0ULL)) ? ((+(var_0))) : (((/* implicit */unsigned long long int) (+(4111835786U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_11)) : (var_9)))) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) arr_7 [i_11 - 1])))))));
                        arr_57 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (arr_34 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (arr_49 [i_6 - 2] [i_6] [i_13 - 1])))))));
                        var_22 |= ((/* implicit */unsigned short) arr_31 [(short)4]);
                        arr_58 [i_6] [i_11] [i_11] [i_6] = ((/* implicit */int) ((unsigned short) min((var_3), (arr_7 [i_12 + 1]))));
                    }
                } 
            } 
        }
        var_23 += ((/* implicit */signed char) ((-8192080025326400293LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7270)))));
    }
    var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 91633362U)) ? (5130058214179721130LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7270))))) >> ((((-(((/* implicit */int) ((short) (unsigned short)7288))))) + (7321)))));
}
