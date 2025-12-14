/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79312
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
    var_19 = ((/* implicit */signed char) var_11);
    var_20 = ((/* implicit */signed char) ((var_0) / (((/* implicit */unsigned int) min((((var_2) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) % (((/* implicit */int) arr_2 [i_1] [i_1] [i_0]))))) ? (((/* implicit */int) min((arr_2 [i_0] [i_1] [i_0]), (((/* implicit */unsigned short) arr_3 [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_1] [(_Bool)0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) arr_2 [i_1] [i_1] [i_0])) - (((/* implicit */int) arr_3 [i_0]))))))) : (arr_0 [i_1] [i_0])));
                arr_5 [i_0] [2] [i_1] = ((/* implicit */signed char) min((((((((/* implicit */_Bool) arr_1 [(short)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [20LL]))) : (arr_0 [i_0] [i_0]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)0]))))), (min((((((/* implicit */_Bool) arr_3 [(signed char)12])) ? (arr_0 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)16]))))), (((((/* implicit */_Bool) arr_2 [i_0] [(short)12] [20LL])) ? (arr_0 [i_0] [(unsigned char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [16])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_11 [i_2] [i_2])), (((((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) : (arr_0 [i_2] [(unsigned char)13]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_1 [i_2])))))))));
                arr_13 [i_3] [i_2] = arr_2 [i_2] [i_2] [i_2];
                arr_14 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) max((arr_1 [i_2]), (((/* implicit */unsigned short) arr_8 [i_3]))))) : (((/* implicit */int) arr_1 [i_2]))))) : (max((min((((/* implicit */unsigned long long int) arr_1 [i_2])), (arr_10 [i_3] [i_3] [i_3]))), (min((arr_6 [(unsigned char)14] [(unsigned char)14]), (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2]))))))));
                arr_15 [i_2] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_0 [i_3] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(signed char)12] [10LL]))))), (((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_10 [0LL] [11LL] [i_3]) : (((/* implicit */unsigned long long int) arr_11 [(unsigned char)4] [i_3])))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) min((arr_2 [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) arr_3 [i_2]))))) : (((/* implicit */int) max((arr_2 [i_2] [i_3] [i_2]), (((/* implicit */unsigned short) arr_8 [14]))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_10);
}
