/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99140
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
    var_12 = ((-1876680638) % (((/* implicit */int) (short)-31082)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) - (((((/* implicit */_Bool) max((0), (((/* implicit */int) (_Bool)0))))) ? (max((3123124408594854876ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 3])))))));
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_0 + 1])) || ((_Bool)0))), (((((/* implicit */_Bool) arr_1 [i_0 + 2])) && (((/* implicit */_Bool) arr_1 [i_0 + 3]))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_6)) <= (((((/* implicit */_Bool) 3123124408594854876ULL)) ? (((/* implicit */int) (short)-29566)) : (arr_6 [i_1])))))) < (((/* implicit */int) (_Bool)1))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */int) var_8))))) ? (0) : (((/* implicit */int) (!(((/* implicit */_Bool) 11369310403997635531ULL)))))))) % (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)255))))) | (5423907656438927422ULL)))))));
        var_16 = ((/* implicit */int) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (var_2)))))), ((!(min(((_Bool)0), (arr_5 [i_1])))))));
    }
}
