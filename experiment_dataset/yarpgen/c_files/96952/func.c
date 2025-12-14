/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96952
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((((var_3) ^ (var_0))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)6970)) : (((/* implicit */int) var_16))))))) ? (((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (var_14))))) : (((/* implicit */int) var_11)))))));
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (unsigned short)49123))) + (((/* implicit */int) ((short) var_15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0))))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 2305840810190438400ULL)) || (((/* implicit */_Bool) 2566086089747206098LL)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(var_10))) != (((((/* implicit */_Bool) var_10)) ? (13038574527805083203ULL) : (var_10))))))) : (((unsigned int) var_5))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_21 -= ((/* implicit */unsigned long long int) ((13038574527805083203ULL) >= (((/* implicit */unsigned long long int) arr_2 [i_0 + 1]))));
            var_22 = ((/* implicit */_Bool) (-(arr_2 [i_0 + 2])));
            var_23 = ((((/* implicit */_Bool) var_15)) ? (arr_2 [i_0 - 1]) : (((arr_2 [i_0 + 1]) ^ (((/* implicit */unsigned int) arr_3 [i_0 + 2] [i_1])))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4140))) : (13038574527805083207ULL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) ? ((+(((((/* implicit */_Bool) arr_2 [7LL])) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) (short)22334)))))) : (((/* implicit */int) ((signed char) 13038574527805083203ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_2])))));
        arr_11 [i_2] = ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_7 [(unsigned short)2])) - (((/* implicit */int) (short)32767)))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 549755812864ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) arr_1 [i_3 + 1] [i_3 + 1])) : (((((/* implicit */_Bool) var_11)) ? (arr_15 [i_3] [(signed char)11]) : (((/* implicit */unsigned long long int) var_13))))))))))));
        var_25 = ((((((/* implicit */int) arr_13 [i_3 + 1])) * (((/* implicit */int) arr_13 [i_3 + 2])))) / (((/* implicit */int) ((short) 16154416368254223092ULL))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 2) 
    {
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (-(arr_17 [i_4 + 1]))))));
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    {
                        arr_25 [(short)1] [i_5] [(short)1] [i_6] = ((/* implicit */unsigned int) var_5);
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((short) ((_Bool) var_4))))));
                        var_28 = ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_6])) > (((/* implicit */int) var_6))))) > (((/* implicit */int) (short)(-32767 - 1))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */short) (-(((/* implicit */int) ((var_15) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4]))))))));
    }
}
