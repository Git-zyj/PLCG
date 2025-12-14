/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90180
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-82)) && (((/* implicit */_Bool) arr_2 [i_1] [5U])))))));
            var_17 = ((/* implicit */unsigned long long int) ((int) var_10));
            arr_5 [1ULL] [i_1] = ((/* implicit */unsigned short) arr_4 [i_1 + 2]);
        }
        var_18 += ((/* implicit */short) (-(((((/* implicit */unsigned int) 131071)) / (var_12)))));
        arr_6 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (signed char)105))));
        var_19 = ((/* implicit */_Bool) min((var_19), ((!(((/* implicit */_Bool) var_8))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) 4066735155U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5219384794115586417ULL))))) : (((/* implicit */int) (unsigned short)64076)))))));
    }
    var_21 |= ((/* implicit */int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)4095)) <= (var_8)))) + (((/* implicit */int) var_11)))))));
    var_22 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_7)))))), (595858712861441229ULL)));
}
