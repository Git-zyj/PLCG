/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67770
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
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((short) var_7)), (var_12)))), (min((((/* implicit */unsigned int) ((int) var_7))), ((~(var_6)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0 - 2])), (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)19]))) : ((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (arr_0 [i_0]))))) : (arr_1 [i_0])))));
        var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) var_15)) | (var_7)))))))) : (arr_1 [i_0])));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            var_23 += min((arr_2 [i_1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(unsigned char)17])) | (((/* implicit */int) arr_2 [i_0 + 2])))))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((arr_7 [(_Bool)1] [i_3]) & (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [(unsigned char)7] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 - 3])) / (arr_8 [2U] [2U] [i_2] [2U] [i_1 + 1])))) : (arr_5 [i_1] [i_1] [i_1] [i_3 + 3])))));
                            var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(var_1)))), (((arr_9 [i_0] [i_2] [i_2] [i_3] [i_0]) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 + 2])) >> (((var_10) + (1854774663)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_10)) == (arr_5 [i_2] [i_2] [i_3] [i_4]))))) : (max((var_4), (arr_1 [i_0])))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4]))) : (var_7))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned char i_5 = 3; i_5 < 23; i_5 += 3) /* same iter space */
    {
        arr_14 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) arr_0 [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (min((((/* implicit */unsigned int) arr_10 [i_5] [(_Bool)0] [i_5] [i_5] [i_5 + 2] [i_5] [i_5])), (arr_1 [i_5])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_5 + 1]), (((/* implicit */unsigned char) ((arr_6 [i_5] [i_5]) <= (((/* implicit */long long int) ((/* implicit */int) arr_9 [22] [22] [i_5] [22] [i_5])))))))))) : (max((((/* implicit */unsigned int) arr_12 [i_5 - 1])), (arr_1 [i_5])))));
        arr_15 [i_5] = ((/* implicit */long long int) arr_5 [(short)16] [i_5 - 2] [i_5] [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                {
                    var_26 -= ((/* implicit */long long int) arr_7 [i_5] [i_5]);
                    var_27 += ((/* implicit */unsigned short) arr_6 [i_5] [i_5]);
                }
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 10; i_8 += 1) 
    {
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_8])))))));
        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) max((((max((arr_16 [i_8] [i_8] [i_8]), (arr_19 [i_8]))) ? (((/* implicit */int) ((_Bool) arr_23 [i_8]))) : (((((/* implicit */_Bool) var_18)) ? (arr_17 [i_8]) : (((/* implicit */int) var_11)))))), (((/* implicit */int) arr_22 [i_8])))))));
    }
    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) var_8))));
}
