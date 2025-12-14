/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62927
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((9223372036854775807LL), (9223372036854775793LL)))) ? (((/* implicit */int) (unsigned short)2040)) : (((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */unsigned long long int) 9223372036854775807LL)))))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
        {
            arr_5 [i_1] = ((/* implicit */unsigned int) ((_Bool) arr_1 [i_0]));
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) var_14);
            arr_7 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -9223372036854775801LL)) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_1] [i_1]))) | (((((/* implicit */_Bool) (signed char)75)) ? (arr_4 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) var_4))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
        {
            var_17 &= ((/* implicit */short) var_14);
            arr_11 [i_0] [16U] [16U] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2] [i_0])) % (var_13)));
        }
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
        {
            arr_15 [i_3] = -1396843481;
            arr_16 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_4 [i_3] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_10 [i_0]))))) ? (arr_9 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((var_7), (arr_9 [i_3]))))))));
        }
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0])) && (((/* implicit */_Bool) arr_18 [i_5]))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_0] [i_4]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)3)))) * ((~(((/* implicit */int) (unsigned char)252))))))) : (((arr_18 [i_0]) / (arr_18 [i_0])))));
            }
            var_20 = ((/* implicit */int) var_2);
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_19 [i_4]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_4])) ? (min((((/* implicit */unsigned long long int) var_15)), (arr_18 [i_4]))) : (((/* implicit */unsigned long long int) arr_9 [i_0])))))));
        }
        var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((arr_17 [(unsigned short)0] [i_0]), (((/* implicit */short) (signed char)-82))))) ? (((unsigned long long int) var_1)) : (arr_4 [i_0] [i_0] [i_0])))));
    }
    for (int i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (((~(((/* implicit */int) var_6)))) ^ (((int) arr_17 [i_7] [i_7])))))));
            arr_30 [i_6] &= ((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned short)23739)))), (((((/* implicit */_Bool) ((unsigned short) (unsigned short)43479))) ? (((((/* implicit */_Bool) arr_17 [i_6] [(unsigned short)14])) ? (((/* implicit */int) (unsigned short)8176)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)23742))))));
        }
        var_24 &= ((((/* implicit */int) (((~(arr_28 [i_6] [i_6] [i_6]))) <= (((/* implicit */int) arr_12 [13U]))))) < (((/* implicit */int) arr_17 [2] [i_6])));
    }
    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_4))));
}
