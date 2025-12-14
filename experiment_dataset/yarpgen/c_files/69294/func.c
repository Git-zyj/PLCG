/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69294
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
    for (short i_0 = 1; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((0ULL) ^ (((((((/* implicit */_Bool) 3381741481U)) ? (2599063448897720564ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))))) << (((/* implicit */int) (_Bool)1))))));
        arr_2 [i_0] = ((/* implicit */_Bool) var_11);
    }
    for (short i_1 = 1; i_1 < 14; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-109))) > (max((((arr_4 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((arr_4 [5ULL]) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))))))));
        arr_6 [i_1] [i_1] &= ((/* implicit */int) ((((arr_4 [i_1]) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))))) == (((/* implicit */long long int) (-(min((-1), (((/* implicit */int) (signed char)-115)))))))));
    }
    var_15 -= ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
    var_16 = ((/* implicit */long long int) (~(min((1623052554U), (((/* implicit */unsigned int) -1897407238))))));
    var_17 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_0)) ? (1871493716749797593ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((var_13) - (((/* implicit */unsigned int) var_3))))))) + (((/* implicit */unsigned long long int) (-(var_13))))));
}
