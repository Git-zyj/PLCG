/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99872
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
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_4))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) arr_8 [i_0] [(signed char)0] [2ULL] [i_2]))));
                    var_15 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) ((unsigned char) -8471466687975345426LL))), ((+(arr_6 [(_Bool)1])))))));
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (~(arr_6 [i_2]))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~((~(arr_8 [i_2] [(signed char)6] [(signed char)6] [(_Bool)1]))))))));
                    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_6 [i_0 - 4])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))) : (arr_1 [(short)10]))) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) var_1)), (var_12)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [1LL])) ? (((/* implicit */int) arr_9 [6])) : (((/* implicit */int) var_1))))))))));
                }
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned short) var_7);
    var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((var_1), (var_1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_11))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) 510689590001784595LL)) && (((/* implicit */_Bool) -8471466687975345426LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -8471466687975345405LL))))))))));
}
