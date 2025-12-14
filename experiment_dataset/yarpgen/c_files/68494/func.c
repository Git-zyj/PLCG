/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68494
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
    var_14 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_15 = ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0] [i_0])))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((arr_3 [i_0]) ^ (arr_1 [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_17 *= (+(((/* implicit */int) ((((/* implicit */int) (signed char)105)) < (((/* implicit */int) ((unsigned short) arr_3 [i_1])))))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((var_1) >> (((((/* implicit */int) arr_2 [i_1] [i_1])) - (111)))))), (max((((/* implicit */unsigned long long int) arr_5 [i_1])), (13820446204326564552ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 2; i_4 < 13; i_4 += 2) 
                {
                    {
                        arr_13 [(signed char)5] [14U] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_3] [i_4])) ? (max((((/* implicit */long long int) ((_Bool) arr_11 [i_3 - 1]))), (min((((/* implicit */long long int) 33488896)), (arr_1 [i_4 + 1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2 + 3] [i_3 - 1])) ? (var_8) : (((/* implicit */int) var_0)))))));
                        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_3 - 1] [i_3] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 2] [i_3 - 1]))) : (arr_7 [i_3 - 1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [1] [i_2 + 2] [i_3 - 1] [i_3 - 1] [i_4 + 2]))))))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) max((arr_6 [i_2 + 2] [i_2 + 3]), (((/* implicit */unsigned char) ((signed char) arr_6 [i_2 + 1] [i_2 + 1])))))))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) + ((~(((((/* implicit */_Bool) var_5)) ? (4669771196663878446ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-110)) & (((/* implicit */int) (signed char)11))));
        var_23 = ((/* implicit */int) var_5);
    }
    for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        var_24 = ((/* implicit */long long int) max((arr_7 [i_6]), (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_2)), (4336898211045985082LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_5))))))))));
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) min((11355324493875736635ULL), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_12 [(unsigned char)8] [i_6] [i_6] [i_6] [i_6]))))))))))));
        var_26 &= ((/* implicit */unsigned short) max((((((/* implicit */int) arr_16 [i_6])) <= (((/* implicit */int) var_2)))), (((((/* implicit */int) var_10)) == (((/* implicit */int) arr_16 [i_6]))))));
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (int i_9 = 2; i_9 < 14; i_9 += 3) 
            {
                {
                    var_27 *= var_0;
                    var_28 = ((/* implicit */long long int) arr_15 [14LL] [i_7]);
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) arr_12 [(signed char)6] [i_9 - 1] [i_9 + 1] [i_9 - 2] [i_9 + 1]))))))));
                    var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_26 [i_7] [i_9] [i_9 + 1] [i_9 - 1])) : (((/* implicit */int) arr_26 [i_7] [i_7] [i_9 - 2] [i_9 - 1]))))), (min((arr_1 [i_8]), (((/* implicit */long long int) var_3))))));
                }
            } 
        } 
    } 
}
