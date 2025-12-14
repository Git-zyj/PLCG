/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85050
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
    var_16 = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((short) 10197491900062522501ULL)))))));
    var_17 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) max((max((-3188501193874052491LL), (1570470188583738997LL))), (((/* implicit */long long int) ((((2618003280U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47661))))) + (((/* implicit */unsigned int) ((var_10) - (((/* implicit */int) (unsigned short)45686))))))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            arr_9 [i_1] = ((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_2 [i_1 - 1])))));
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_9);
        }
        for (short i_2 = 1; i_2 < 13; i_2 += 3) 
        {
            arr_14 [i_2 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)183))))) : (((((/* implicit */_Bool) arr_5 [(unsigned short)10] [i_2 + 1] [i_2 + 1])) ? (max((4765367148645273428LL), (((/* implicit */long long int) (unsigned short)65510)))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) ((((int) 4194303)) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)65523)) < (((/* implicit */int) (short)10312)))))));
            arr_16 [(unsigned short)12] = ((/* implicit */unsigned long long int) max((((long long int) (unsigned short)1)), (((/* implicit */long long int) ((unsigned short) ((unsigned short) arr_5 [14U] [i_0] [i_0]))))));
        }
        for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            arr_19 [(unsigned short)10] = ((/* implicit */short) var_4);
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                for (int i_5 = 1; i_5 < 13; i_5 += 2) 
                {
                    {
                        arr_24 [i_5] [(unsigned short)8] [i_3] [(unsigned char)13] = ((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (7016281937770829102LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65535)))));
                        arr_25 [i_5 - 1] [i_4] [i_0] |= ((/* implicit */long long int) (-(max((2068996268), (((/* implicit */int) (short)-18177))))));
                        arr_26 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */signed char) arr_12 [(short)2]);
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
    {
        arr_30 [i_6] = ((unsigned short) 8019686159044952268LL);
        arr_31 [i_6] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
    }
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_9 = 2; i_9 < 13; i_9 += 2) 
                {
                    for (unsigned short i_10 = 2; i_10 < 12; i_10 += 3) 
                    {
                        for (short i_11 = 3; i_11 < 13; i_11 += 3) 
                        {
                            {
                                arr_47 [i_7] = ((/* implicit */unsigned short) (((((~(1637444202))) > (((/* implicit */int) (short)-1910)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_7] [i_10] [i_7] [i_11 + 1] [i_11]))) : (max((((/* implicit */long long int) arr_37 [i_7] [i_9 - 2] [i_11 - 3])), (var_4)))));
                                arr_48 [i_10] = ((/* implicit */_Bool) arr_22 [i_7] [i_7] [i_7] [i_10]);
                            }
                        } 
                    } 
                } 
                arr_49 [i_7] [11] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (!((_Bool)0)));
}
