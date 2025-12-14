/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97036
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
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) min((var_10), (((/* implicit */short) var_7))))) | (((/* implicit */int) ((short) -1141946842197116047LL))))))));
    var_13 = ((/* implicit */_Bool) ((unsigned short) var_4));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) (!(var_7))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_7);
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */int) min((min((((/* implicit */long long int) var_11)), ((-(var_1))))), (((/* implicit */long long int) ((arr_5 [i_1] [i_1]) == (((/* implicit */long long int) (+(((/* implicit */int) var_2))))))))));
        arr_6 [13LL] = ((/* implicit */long long int) (((!(((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) arr_5 [i_1] [i_1])))))) || (((/* implicit */_Bool) (~(var_4))))));
        var_16 = ((/* implicit */long long int) ((unsigned short) min((var_1), (arr_5 [i_1] [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
    {
        var_17 += ((/* implicit */unsigned long long int) arr_5 [i_2] [i_2]);
        arr_9 [i_2] [i_2] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((long long int) var_6))))) % (var_6)));
    }
    var_18 = ((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) (!((_Bool)1))))));
    var_19 |= ((/* implicit */_Bool) var_2);
}
