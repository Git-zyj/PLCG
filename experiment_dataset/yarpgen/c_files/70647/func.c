/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70647
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
    var_17 = ((/* implicit */int) min((((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1382894418)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((((/* implicit */signed char) var_0)), (var_6)))))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)31725)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3584))) : (0ULL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                arr_8 [i_0 + 2] [i_1] [i_1 + 1] = ((/* implicit */long long int) arr_5 [i_0 + 2] [i_1] [i_0]);
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [(unsigned char)13]) ? (arr_2 [(unsigned char)0] [(unsigned char)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1])))))) ? (((/* implicit */int) arr_0 [i_1])) : (max((arr_5 [i_0] [i_0] [i_1 + 1]), (((/* implicit */int) arr_4 [i_1 - 1] [i_0] [i_0]))))))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 19; i_2 += 4) 
    {
        for (signed char i_3 = 2; i_3 < 18; i_3 += 2) 
        {
            {
                var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_12 [i_2])), (((((/* implicit */_Bool) ((arr_10 [(unsigned short)6]) ? (arr_2 [i_2] [i_3]) : (((/* implicit */unsigned long long int) arr_11 [i_2] [i_3 + 2] [(unsigned short)3]))))) ? (arr_2 [i_2] [8]) : (arr_7 [i_2] [i_2])))));
                var_21 = ((/* implicit */unsigned char) arr_11 [i_2] [17ULL] [i_3]);
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4051389007646821241LL)) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) (signed char)123))));
                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_1 [i_2 - 1]);
                arr_14 [i_2 - 1] [i_3] [i_3 + 1] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) arr_9 [i_2]))))), (arr_7 [(_Bool)1] [(unsigned short)8]))), (((/* implicit */unsigned long long int) arr_4 [i_2 + 1] [i_3 - 1] [(signed char)21]))));
            }
        } 
    } 
}
