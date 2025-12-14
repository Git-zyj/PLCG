/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54978
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] [i_0] = ((unsigned long long int) ((unsigned long long int) arr_3 [i_2 - 2]));
                    var_14 = ((/* implicit */unsigned long long int) 4294967295U);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = 0;
                        var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) < (var_7))))))) ^ (17198976017649279328ULL));
                        var_16 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)123))))) ^ (min((((/* implicit */unsigned long long int) var_7)), (arr_1 [i_0] [i_1]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)52)))) * (((/* implicit */int) var_5))));
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_1])) || ((_Bool)1))) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) var_0)))))));
                        arr_17 [i_0] [(unsigned char)7] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((signed char) ((var_8) + (((/* implicit */long long int) var_7)))));
                    }
                    arr_18 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((1166408891) != (((/* implicit */int) arr_3 [i_0])))))) || (((((/* implicit */int) (signed char)(-127 - 1))) != (((((/* implicit */int) (signed char)-53)) / (-889935014)))))));
                }
            } 
        } 
        var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_2))))) < (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_12)))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((unsigned short) var_4)))));
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            arr_25 [i_5] [i_5] = ((/* implicit */long long int) ((_Bool) arr_23 [i_6] [i_6] [i_6]));
            arr_26 [10] = ((/* implicit */_Bool) var_1);
        }
        for (unsigned int i_7 = 3; i_7 < 21; i_7 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((int) var_4)))));
            arr_29 [i_7] [i_7] [i_5] = ((/* implicit */unsigned long long int) var_10);
            arr_30 [i_7] [i_7] [i_5] = ((((long long int) 13261388869876615719ULL)) < (((/* implicit */long long int) ((/* implicit */int) ((short) arr_24 [(unsigned short)13] [i_5] [i_5])))));
        }
        var_21 = ((arr_20 [i_5]) << (((((/* implicit */int) (unsigned char)82)) - (77))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [(short)10] [(short)10])) != (((/* implicit */int) var_13))));
    }
    var_23 = ((/* implicit */unsigned long long int) (~(703565496U)));
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                {
                    arr_41 [7LL] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((min((6252765925033967733LL), (((/* implicit */long long int) var_2)))) & (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_8] [i_9] [i_9] [i_10])))))) < (max((arr_32 [i_9]), (((/* implicit */unsigned long long int) ((int) var_8)))))));
                    var_24 = ((/* implicit */signed char) max((var_24), (var_2)));
                    arr_42 [i_8] [i_9] [i_10] = ((short) ((int) ((long long int) var_7)));
                }
            } 
        } 
    } 
}
