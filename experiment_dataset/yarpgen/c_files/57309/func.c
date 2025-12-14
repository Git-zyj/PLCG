/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57309
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
    var_16 = ((unsigned char) ((((((/* implicit */_Bool) var_13)) ? (var_13) : (var_8))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4))))));
    var_17 |= ((/* implicit */int) (+(((min((var_12), (((/* implicit */long long int) var_4)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_15) : (var_8))))))));
    var_18 = ((/* implicit */signed char) (!(((((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) <= (((/* implicit */unsigned int) ((var_10) / (((/* implicit */int) var_7)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [(signed char)6] [(signed char)6])))) + (((((arr_0 [(unsigned short)2] [(unsigned short)2]) < (arr_0 [8U] [8U]))) ? (min((((/* implicit */long long int) arr_1 [i_0] [(short)0])), (arr_0 [0LL] [0LL]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [(_Bool)1])) && (((/* implicit */_Bool) arr_0 [(short)0] [i_0]))))))))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) max((arr_0 [(unsigned short)0] [(signed char)8]), (((/* implicit */long long int) arr_1 [i_0] [8]))))) && (((/* implicit */_Bool) ((var_12) << (((arr_1 [8LL] [8LL]) - (1608475912))))))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        for (int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            {
                arr_7 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_4 [(signed char)10] [i_2]), (((/* implicit */unsigned long long int) var_7))))) ? (arr_3 [(short)0] [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) && (((/* implicit */_Bool) var_15))))) : (max((((/* implicit */int) var_2)), (var_9))))))));
                var_21 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_4 [i_1] [i_2]))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_1] [i_2])) + (2147483647))) >> (((((/* implicit */int) var_1)) - (162)))))))) ^ (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_5 [i_2] [i_1]))))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (max((((((unsigned int) arr_4 [i_2] [i_1])) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_5)))))))));
            }
        } 
    } 
}
