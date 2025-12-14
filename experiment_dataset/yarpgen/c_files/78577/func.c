/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78577
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
    var_20 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) * ((((+(var_0))) / (((/* implicit */long long int) ((/* implicit */int) ((short) var_6))))))));
    var_21 = ((/* implicit */unsigned char) ((_Bool) var_9));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned char) ((((arr_1 [i_0]) << (((arr_1 [i_0]) - (375065902U))))) << (((arr_0 [i_0]) - (312211506426155301LL))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_22 ^= ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2])) + (arr_2 [i_2]))) >= (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2])) : (arr_2 [i_1])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [(_Bool)1] [i_1] [(_Bool)1] [13LL])) - (((/* implicit */int) arr_9 [i_0] [i_0] [i_2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(signed char)7])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_2] [i_3 - 1]))))) : (((((/* implicit */_Bool) arr_6 [(_Bool)1])) ? (arr_0 [i_3]) : (((/* implicit */long long int) arr_7 [i_0] [i_1] [(signed char)13]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_3 + 4] [i_2] [i_0]))) : (((long long int) ((((/* implicit */_Bool) arr_4 [i_1] [(unsigned char)13] [i_3])) ? (((/* implicit */int) arr_9 [(signed char)15] [i_1] [1LL])) : (arr_6 [i_0]))))));
                        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_3] [i_2])) : (((/* implicit */int) ((unsigned char) arr_0 [i_0])))))) ? ((~(arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_8 [i_0] [(signed char)8] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (((long long int) arr_6 [i_1])))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
    {
        arr_14 [6LL] = ((/* implicit */unsigned long long int) ((long long int) arr_8 [i_4] [i_4] [11] [i_4]));
        var_25 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) arr_10 [i_4] [i_4])) / (((/* implicit */int) arr_10 [i_4] [(unsigned short)9])))));
    }
    var_26 = ((/* implicit */_Bool) (+(((((int) var_2)) / (var_8)))));
    var_27 = ((/* implicit */unsigned char) ((var_8) / (((/* implicit */int) ((unsigned char) var_17)))));
}
