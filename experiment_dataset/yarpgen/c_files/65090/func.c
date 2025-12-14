/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65090
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
    var_11 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 2; i_3 < 18; i_3 += 4) /* same iter space */
                    {
                        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_2] [i_1] [i_3]))) == (17968657606655550511ULL))))) == (min((((/* implicit */unsigned long long int) arr_5 [i_3] [i_1] [i_0] [i_3])), (var_2))))))));
                        arr_9 [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_1 [i_3])))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)1)))) : (((/* implicit */int) ((short) arr_2 [i_3 - 2]))))), (((/* implicit */int) (unsigned char)75))));
                        arr_10 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (((unsigned int) arr_5 [i_1] [i_3] [i_3 - 2] [i_1]))));
                    }
                    for (short i_4 = 2; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        arr_14 [i_1] [i_1] [i_1] [(short)15] = ((/* implicit */unsigned short) var_0);
                        arr_15 [i_0 - 1] [i_1] [(unsigned char)10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_8 [i_4] [i_4] [i_4 + 1] [i_0 - 1] [i_0 - 1]), (arr_8 [i_4 - 2] [i_4 + 2] [i_4 + 1] [i_1] [i_0 - 1]))))));
                        var_13 ^= ((/* implicit */unsigned char) ((((_Bool) ((unsigned short) arr_6 [i_0] [i_1] [6ULL]))) ? (((unsigned int) ((var_2) + (((/* implicit */unsigned long long int) arr_1 [4ULL]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) arr_7 [i_0] [14] [2LL] [i_4] [i_4] [i_2])) : (((/* implicit */int) arr_7 [i_4] [(_Bool)0] [i_2] [i_4] [i_0] [18LL])))))));
                    }
                    var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned char)0))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) >= (max((max((((/* implicit */int) arr_2 [i_0])), (1886423264))), ((((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)0))))))));
                    var_15 |= ((/* implicit */unsigned long long int) (!(arr_12 [i_0] [i_2])));
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */short) arr_3 [(short)0] [(short)4] [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            arr_20 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0 - 1] [i_0 + 1] [3]);
            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 901619866U))));
        }
        var_17 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((arr_12 [i_0] [i_0]) ? (((/* implicit */int) arr_18 [i_0] [(short)5] [i_0])) : (((/* implicit */int) var_9)))), (((/* implicit */int) (unsigned char)181)))))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = ((/* implicit */unsigned long long int) var_9);
        var_18 ^= ((((/* implicit */_Bool) arr_5 [0LL] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_5 [(unsigned char)2] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_5 [12U] [i_6] [i_6] [(_Bool)1])));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_25 [i_7] [i_7]))));
        arr_26 [i_7] [(short)1] = ((/* implicit */_Bool) ((var_8) ? (((var_8) ? (((/* implicit */int) arr_4 [(short)18])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned char)16))));
    }
    var_20 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (min((max((17629494373944266631ULL), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (signed char)35)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_5 [0LL] [i_8] [i_8] [0LL])) ? (arr_27 [i_8]) : (((/* implicit */long long int) 1541126867U))))))));
        var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_8])) ? (((/* implicit */int) arr_19 [i_8])) : (((/* implicit */int) arr_19 [i_8]))));
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_29 [i_9] [i_9]))));
        var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_29 [i_9] [i_9 - 1])), (min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))))))) >= (((((/* implicit */_Bool) arr_29 [i_9 - 1] [(_Bool)1])) ? (((/* implicit */int) arr_29 [i_9] [i_9])) : (((/* implicit */int) arr_29 [i_9 - 1] [i_9 - 1]))))));
        var_25 = ((/* implicit */unsigned char) ((long long int) (short)127));
    }
}
