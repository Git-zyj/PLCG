/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92037
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_1)))) & (((((/* implicit */_Bool) arr_0 [6ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_2 [i_0 - 1] [17U])))));
        var_19 = ((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2]);
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_3 [i_0 - 3] [i_0])) - (var_14))))));
        var_21 |= ((/* implicit */unsigned int) ((unsigned long long int) 1U));
    }
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((signed char) 4166651719077925954LL))), (((((/* implicit */unsigned long long int) var_18)) - (var_17))))))));
    var_23 += var_6;
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) var_1)) == (var_8)))), (var_5)))) | (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(arr_2 [i_2] [i_1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) * (arr_0 [2LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_7 [i_1]) : (arr_7 [i_2]))))))))));
                var_26 ^= var_15;
                arr_9 [i_1] = ((/* implicit */_Bool) ((arr_3 [i_2] [i_1]) % (((/* implicit */int) ((arr_8 [i_1] [i_2]) >= (min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_2])), (arr_7 [i_1]))))))));
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    var_27 ^= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) + (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3] [i_3])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))))))) >> (((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_8))) * (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) - (622U)))));
                    var_28 = ((/* implicit */_Bool) ((arr_0 [3LL]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) (short)31603)))) <= (((/* implicit */int) arr_10 [(unsigned short)4] [i_3]))))))));
                }
            }
        } 
    } 
}
