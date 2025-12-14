/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66703
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
    var_17 |= ((/* implicit */long long int) var_15);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_18 |= ((/* implicit */long long int) (((~(((/* implicit */int) var_4)))) - (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) <= (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(-1)))) >= (((unsigned long long int) min((((/* implicit */int) arr_0 [i_0 + 1] [i_1])), (1606980378))))));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                var_20 = ((/* implicit */unsigned char) (+((+(var_6)))));
                var_21 -= ((/* implicit */unsigned short) 1606980405);
            }
            for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 3) 
            {
                var_22 = ((/* implicit */short) ((((var_1) > (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1 - 3])))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 2])) ? (arr_7 [i_1] [i_1 - 4]) : (arr_7 [i_1] [i_1 + 4]))) : ((~(var_6)))));
                var_23 = ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */_Bool) var_7)) ? (arr_8 [i_0] [i_3] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1 - 4]))))));
                arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_3 - 3]))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((arr_2 [i_0 - 1]), ((short)11941))))));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_0 - 1])) ? (arr_7 [i_1] [i_1]) : (((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_3]))));
            }
            for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                var_25 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (-(1606980378)))) ? (((((-1606980411) + (2147483647))) >> (((var_1) - (8376271968082001532ULL))))) : (1606980416)))));
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    arr_15 [i_1] = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_5 [i_1] [i_1 - 4] [i_5] [i_1])))), ((+(((/* implicit */int) arr_5 [i_1] [i_1 + 4] [12U] [i_4]))))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_6] = min((((/* implicit */unsigned long long int) (unsigned short)35141)), (((((/* implicit */_Bool) 1606980378)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))) : (16491555340509460432ULL))));
                        var_26 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1606980404)) <= ((+(994966325885305371ULL)))));
                        var_27 = ((/* implicit */short) var_9);
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_13 [i_6] [i_1 + 4] [i_4] [i_0 + 1] [i_5] [(unsigned short)9]), (((/* implicit */short) var_10))))) ? ((-(((/* implicit */int) arr_5 [i_1] [i_1 + 3] [i_1 + 3] [i_0 + 1])))) : (((/* implicit */int) ((arr_8 [4ULL] [i_1 + 2] [i_0] [i_0 - 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1 - 4] [(short)4]))))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((unsigned int) arr_2 [i_0 + 1])))));
                        arr_22 [i_4] [(unsigned short)13] [i_1] [i_4] [i_4] [i_4] [(unsigned short)0] = ((/* implicit */short) (-(((/* implicit */int) var_3))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        arr_26 [i_0] [i_0 - 1] [i_5] [i_1] = ((/* implicit */long long int) arr_23 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_4] [i_4] [(unsigned short)7] [8ULL]);
                        arr_27 [i_8] [i_1] [i_4] [i_1 - 1] [i_1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) max((((arr_7 [i_1] [i_5]) & (((/* implicit */int) (unsigned char)252)))), ((+(((/* implicit */int) arr_2 [i_8]))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_0 - 1] [i_1 + 2])))) : (arr_20 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_1 - 2] [i_1 + 3])))));
                    }
                }
            }
        }
        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            arr_31 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) (short)-1);
            var_30 = ((/* implicit */_Bool) 1606980405);
            arr_32 [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) -1606980407);
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (min((((((/* implicit */int) (unsigned char)242)) * (((/* implicit */int) var_11)))), (((/* implicit */int) var_12)))) : (((/* implicit */int) ((unsigned char) arr_30 [i_0 - 1] [i_10])))));
            var_32 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned short) -1606980427))), (max((((/* implicit */unsigned long long int) -1606980421)), (17078892821390390824ULL)))));
        }
    }
    var_33 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            {
                var_34 = ((/* implicit */int) 3685724658465610071LL);
                arr_42 [i_11] [i_12] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(min((1606980380), (((/* implicit */int) (unsigned char)64))))))), (var_1)));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned long long int) (-(756095180)));
}
