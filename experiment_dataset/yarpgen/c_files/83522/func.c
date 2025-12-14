/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83522
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
    var_19 &= ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) ((var_18) / (((/* implicit */long long int) var_14)))))), (var_17)));
    var_20 = min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)217)))) >= ((-(var_0)))))), (((((/* implicit */int) (short)0)) >> (((((((/* implicit */_Bool) (unsigned char)31)) ? (var_14) : (var_5))) - (2130637608U))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) max(((unsigned short)31720), (((/* implicit */unsigned short) var_2))))) ? (((/* implicit */int) ((-6114177670978901612LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18465)))))) : (((/* implicit */int) (unsigned char)31))))));
    var_22 = ((/* implicit */signed char) ((var_18) % (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)31))));
        arr_3 [i_0] = ((/* implicit */int) ((unsigned int) (unsigned short)47096));
        arr_4 [(short)6] [(short)6] = ((/* implicit */unsigned long long int) ((unsigned int) var_11));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */int) arr_6 [i_1]);
        /* LoopSeq 2 */
        for (int i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */int) (unsigned short)62985)) : (((/* implicit */int) ((_Bool) (unsigned char)217)))));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_8 [i_2])))) ? (((/* implicit */int) ((var_17) != (((/* implicit */int) arr_9 [i_1] [(unsigned char)14]))))) : (((/* implicit */int) (short)32758))));
            /* LoopSeq 3 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 22; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_19 [i_1] [18U] [(unsigned short)18] [11] = ((/* implicit */unsigned int) arr_17 [i_1] [i_1] [i_2] [i_3] [(unsigned char)16] [i_4 - 2] [i_3]);
                            arr_20 [9U] [i_2] [i_2] [i_3] [i_4] [9U] [i_5] = ((/* implicit */short) arr_16 [i_1] [i_1] [i_3] [(short)16]);
                            arr_21 [i_1] [i_2] [i_4] [i_1] [10ULL] [i_4] = ((/* implicit */long long int) arr_16 [i_1] [i_4] [i_3] [i_4 - 1]);
                        }
                    } 
                } 
                arr_22 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) var_9)))));
            }
            for (int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 22; i_7 += 1) 
                {
                    for (long long int i_8 = 1; i_8 < 22; i_8 += 2) 
                    {
                        {
                            arr_31 [i_1] [2] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_2 + 1] [i_7 - 1]))));
                            arr_32 [i_7] [i_2 - 2] [i_7] = ((/* implicit */unsigned int) (+(arr_17 [i_2 - 2] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_8 + 1] [i_8 - 1])));
                            arr_33 [i_1] [22LL] [i_1] [i_1] [i_8] = ((/* implicit */signed char) (unsigned short)2044);
                            arr_34 [i_2] [i_6] [i_7 + 1] [i_8 - 1] = ((/* implicit */int) (+(arr_6 [i_2 - 2])));
                        }
                    } 
                } 
                arr_35 [i_6] [i_2] [16] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)11360))));
                arr_36 [i_1] [8] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_6] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_25 [i_1] [i_2 - 2] [i_6])));
                arr_37 [i_1] = ((/* implicit */int) ((long long int) (short)29303));
            }
            for (int i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
            {
                arr_42 [i_1] [(unsigned short)13] [(signed char)22] = var_0;
                arr_43 [i_1] [9] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)62972))));
                arr_44 [i_1] [i_1] [4LL] = ((/* implicit */unsigned short) (-(((int) var_17))));
                arr_45 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_2 - 1] [21] [i_2 - 2] [i_2 - 2] [i_2 + 1])) - (((/* implicit */int) (unsigned char)219))));
            }
        }
        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            arr_48 [i_1] [i_1] [i_10] &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
            arr_49 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_15)) : (372961089)));
            arr_50 [i_10] = ((/* implicit */signed char) ((2406475769U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56)))));
            arr_51 [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) 9223372036854775807LL)))));
        }
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) 
    {
        arr_55 [i_11] = ((/* implicit */_Bool) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned short)46285)))))) : (((((/* implicit */_Bool) (signed char)56)) ? (arr_54 [i_11]) : (((/* implicit */long long int) 0U))))));
        arr_56 [i_11] &= ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned char)97))))));
        arr_57 [(signed char)0] [i_11] = ((/* implicit */unsigned short) arr_54 [i_11]);
    }
}
