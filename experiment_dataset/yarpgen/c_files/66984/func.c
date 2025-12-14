/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66984
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_15)) + (((/* implicit */int) var_1)))), ((~(((/* implicit */int) (signed char)-19))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max(((short)-13), (((/* implicit */short) (signed char)86)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_1]) == (arr_1 [i_0]))))) < (((arr_1 [i_0]) * (arr_1 [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_17 += ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_4 - 1] [i_4 + 4] [i_2] [i_4] [(signed char)20]))) * (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) < (arr_2 [16ULL])))))))));
                                var_18 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_15))))));
                                var_19 = ((((((arr_4 [i_0] [i_0]) * (arr_10 [i_1]))) - (((/* implicit */unsigned long long int) max((arr_13 [i_0] [i_0] [20U] [i_0] [i_3] [i_3]), (arr_9 [i_0] [i_0] [i_0])))))) + (((/* implicit */unsigned long long int) ((int) (-(arr_1 [i_4]))))));
                                var_20 = ((/* implicit */unsigned long long int) max((max((((756823825U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)28))))), (((/* implicit */unsigned int) arr_7 [i_4 - 1] [i_4 - 1])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_3])) > (((/* implicit */int) arr_7 [i_0] [10U])))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) ((((arr_4 [i_0] [i_0]) & (((arr_4 [i_0] [i_0]) >> (((var_0) - (17474195094405295134ULL))))))) > (((arr_1 [i_0]) | (arr_1 [i_0])))));
                arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (((~(arr_4 [i_0] [i_0]))) ^ (arr_4 [i_0] [i_0])));
                var_22 = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [11ULL] [i_0] [i_1] [i_1] [i_1])) <= (((/* implicit */int) var_5))))) > (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)30741)) || (((/* implicit */_Bool) (short)19)))))) : (((((((/* implicit */_Bool) arr_11 [1ULL] [i_1] [i_0] [i_1] [(short)19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32764))) : (8774501240269563010ULL))) >> ((((-(arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))) - (1292877411U)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        arr_18 [i_5] = ((/* implicit */signed char) ((((arr_9 [i_5] [i_5] [i_5]) > (arr_9 [i_5] [i_5] [i_5]))) ? (arr_9 [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-126)))))));
        var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) < (arr_4 [i_5] [i_5]))))));
        var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */short) var_5)), (arr_3 [i_5] [i_5] [i_5]))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((min((arr_19 [i_6]), (((/* implicit */unsigned long long int) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))) >> (((((/* implicit */int) max(((short)22852), ((short)30735)))) - (30682)))))));
        var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) var_13)) / (((/* implicit */int) arr_0 [i_6]))))))) * (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_6] [i_6])) / (((/* implicit */int) var_1))))), ((-(arr_17 [i_6] [i_6])))))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((var_3), (var_4))), (((/* implicit */short) ((((/* implicit */int) (signed char)-55)) <= (((/* implicit */int) (signed char)(-127 - 1))))))))) && (((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_16 [i_6] [i_6]))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_0 [i_6]))))))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
    {
        var_28 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_19 [i_7])) && (((/* implicit */_Bool) arr_24 [i_7])))) ? (((((/* implicit */unsigned long long int) (+(var_11)))) * (arr_10 [i_7]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_15)) <= (((/* implicit */int) arr_3 [i_7] [i_7] [i_7]))))) + (arr_20 [(signed char)3] [i_7]))))));
        var_29 = ((/* implicit */short) arr_1 [i_7]);
    }
    var_30 = ((/* implicit */long long int) var_8);
    var_31 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)-29)))) <= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (var_12)))) == (((/* implicit */int) var_2)))))));
}
