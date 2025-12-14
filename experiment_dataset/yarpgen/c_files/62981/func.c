/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62981
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_2 [(signed char)4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
        arr_3 [6ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) 16366398038722104530ULL)))) ? (((arr_1 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) (-(var_9)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_7 [13ULL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) arr_1 [i_1])))));
        var_13 = ((/* implicit */unsigned short) ((unsigned char) var_12));
        var_14 = ((/* implicit */long long int) 741499983U);
        var_15 = ((/* implicit */signed char) (-(((arr_6 [i_1] [i_1]) % (arr_6 [15LL] [i_1])))));
        arr_8 [i_1] = ((/* implicit */signed char) (!(((arr_1 [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
    }
    var_16 = ((/* implicit */_Bool) var_5);
    var_17 = ((/* implicit */unsigned long long int) var_2);
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
}
