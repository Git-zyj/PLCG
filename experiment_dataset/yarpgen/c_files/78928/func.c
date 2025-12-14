/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78928
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_17))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((short) max((((((/* implicit */_Bool) arr_3 [(unsigned char)11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) <= (21U)))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_8 [i_1] [12U] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3028663844U)), (7035724304852174463ULL)))) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((1493161625) != (((/* implicit */int) (short)0)))))) % (arr_6 [i_0 + 3] [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_7 [(signed char)11] [i_1] [15U]))) != (((/* implicit */int) ((arr_1 [5ULL]) < (arr_4 [(signed char)9] [(_Bool)1]))))))))));
                    var_22 += ((/* implicit */unsigned long long int) arr_3 [(signed char)8]);
                    arr_9 [i_0] [(unsigned char)13] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0] [i_1]))))))) << ((((-(arr_4 [i_0 - 1] [i_0 - 1]))) - (17888173719354184447ULL)))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [(short)2])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_11 [i_3]) : (arr_11 [(signed char)22])))) || (((/* implicit */_Bool) min(((unsigned short)25415), (((/* implicit */unsigned short) var_13)))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [(_Bool)1] [i_3])), (var_10)))) ? ((-(((/* implicit */int) arr_10 [i_3] [i_3])))) : ((~(((/* implicit */int) var_14)))))))))));
        var_24 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_11 [i_3]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 4; i_4 < 22; i_4 += 2) 
        {
            for (unsigned int i_5 = 2; i_5 < 21; i_5 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) arr_10 [i_4] [2ULL]);
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) (unsigned short)40098))))), (var_1)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_14 [i_4 - 2] [i_5 - 1] [i_4]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 2; i_6 < 22; i_6 += 4) 
                    {
                        var_27 += ((/* implicit */short) (((+(((arr_18 [i_3] [i_4] [i_5] [i_6] [i_3] [i_6]) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) * (arr_13 [(unsigned short)11])));
                        var_28 = ((/* implicit */unsigned char) (+(arr_11 [17U])));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_7])) ? (((/* implicit */int) (unsigned short)25461)) : (((((/* implicit */_Bool) 7LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_17 [i_7] [i_7]))))));
        arr_24 [(unsigned char)2] [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_7] [i_7]))) : (-3318219864203849798LL)))));
    }
    var_30 = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
}
