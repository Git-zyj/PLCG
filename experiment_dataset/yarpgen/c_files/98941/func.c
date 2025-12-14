/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98941
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
    var_15 = ((/* implicit */int) (!((!(((var_2) >= (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    var_16 = ((/* implicit */unsigned long long int) ((signed char) var_7));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13400608208655186885ULL)) ? (13400608208655186885ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48590)))))) ? (4490320590724514368ULL) : (((/* implicit */unsigned long long int) var_2))));
        arr_3 [i_0] = ((/* implicit */long long int) ((min((arr_2 [i_0]), (arr_2 [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((((/* implicit */int) ((((/* implicit */_Bool) 14037866863772394273ULL)) && ((_Bool)1)))) >= (((/* implicit */int) (!(max((var_13), (var_13)))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_2 [10ULL]))) : (max((arr_0 [(signed char)12]), (((/* implicit */unsigned long long int) arr_5 [12ULL])))))))));
        var_19 = ((/* implicit */int) (+(arr_5 [i_1])));
    }
    var_20 = ((/* implicit */int) var_6);
}
