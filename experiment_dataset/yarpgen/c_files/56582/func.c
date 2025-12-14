/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56582
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)-9973))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)57099)))) || (((var_9) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14718)))))));
                var_12 += ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)8437)), (4294967269U)));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_13 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-2147483647 - 1))), (4294967269U)))), (((unsigned long long int) arr_4 [i_4 + 1] [i_4 + 1]))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4 + 1] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) var_5))) > (var_8))), (((arr_12 [i_0] [i_2] [i_2 - 1] [i_1] [i_0]) < (((/* implicit */unsigned long long int) 3465935077U))))));
                                arr_14 [i_0] [i_0] = ((unsigned short) ((_Bool) 1303899318U));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((unsigned char) (_Bool)0));
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        arr_19 [(unsigned char)11] [i_5] = ((((((/* implicit */unsigned long long int) 1139928649)) & (max((3573936481968543947ULL), (((/* implicit */unsigned long long int) var_9)))))) ^ (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) -1234081259)), (2991067978U))), (((/* implicit */unsigned int) ((signed char) -1234081259)))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 1; i_7 < 16; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 3; i_9 < 14; i_9 += 3) 
                        {
                            {
                                arr_29 [i_5] [i_6] [i_7 + 1] [3ULL] [(unsigned short)2] = ((/* implicit */int) ((((/* implicit */long long int) ((int) 280817960U))) | (((long long int) ((short) 2147483647)))));
                                arr_30 [i_9 + 2] [i_8] [i_6] = ((unsigned long long int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) max((arr_21 [i_5] [i_7] [i_5]), (((/* implicit */unsigned int) arr_18 [i_6] [i_9 - 1])))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max(((short)-17695), ((short)13825))))));
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
                    {
                        arr_35 [i_5] [i_5] [i_7] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((arr_22 [i_7 - 1] [i_6] [i_6]), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_2)))))))) + (((min((15459758915847034614ULL), (((/* implicit */unsigned long long int) (signed char)116)))) / (((/* implicit */unsigned long long int) 9223372036854775800LL))))));
                        arr_36 [i_5] [i_6] [i_7 - 1] [i_6] = max((((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */long long int) (unsigned short)57099)), (4044594922433684824LL))))), (((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) arr_20 [i_6] [i_6]))))) / (min((((/* implicit */unsigned long long int) (unsigned short)57099)), (12006324719062918318ULL))))));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((signed char) ((max((var_9), (var_0))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_7 + 1] [3])) || (((/* implicit */_Bool) var_8))))))))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_7 + 1] [i_11] [i_11] = ((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [13] [13]))) & (5693539443415719787ULL))));
                        var_17 = ((/* implicit */unsigned long long int) ((unsigned short) var_0));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) ((unsigned short) arr_15 [i_7] [i_7 - 1]))))))));
                    }
                    var_19 += ((/* implicit */short) max((((((arr_26 [i_7 - 1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_5] [i_5] [16ULL] [i_7 - 1]))))) / (((unsigned int) arr_28 [i_5] [i_6] [i_7] [i_6])))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_37 [i_7 - 1] [i_6] [7ULL])))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((1303899318U), (((/* implicit */unsigned int) (unsigned short)57099))))) - (((unsigned long long int) ((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_6]))))))));
                }
            } 
        } 
    }
}
