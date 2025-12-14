/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73986
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
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_15 = ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0])));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_16 = ((((var_8) << (((/* implicit */int) var_11)))) <= (arr_6 [i_0] [i_0]));
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) 5313842091620845044LL))));
            arr_7 [i_0] = ((/* implicit */long long int) ((unsigned char) 5313842091620845044LL));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (5313842091620845063LL)));
    }
    /* vectorizable */
    for (unsigned char i_2 = 3; i_2 < 19; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2846077590452227248LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(signed char)12]))) : (-5313842091620845025LL)));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) arr_1 [2LL]))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(signed char)10]))))) ? (((/* implicit */unsigned long long int) -2846077590452227259LL)) : (((((/* implicit */_Bool) (signed char)3)) ? (10561068052792206902ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [16])))))));
        var_20 ^= ((/* implicit */unsigned short) (-(var_14)));
    }
    var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2846077590452227248LL)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (var_14)))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (-5313842091620845045LL)))))) && (((/* implicit */_Bool) var_8))));
}
