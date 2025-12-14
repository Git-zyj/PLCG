/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7209
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31110))) : (9223372036854775807LL)))) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) max((var_8), ((short)-26286))))))));
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (+((((((_Bool)0) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (short)-1895)) : (((/* implicit */int) (!((_Bool)0)))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) (((~(((((/* implicit */int) var_2)) * (((/* implicit */int) var_0)))))) <= (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (2876825055399749277ULL)))) << (((max((((/* implicit */unsigned int) (short)-31102)), (var_4))) - (4294936189U)))))));
        var_13 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_0 [i_0 + 2] [i_0]))) != (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2]))));
    }
    for (short i_1 = 2; i_1 < 17; i_1 += 2) 
    {
        arr_4 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-31110)))))));
        var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((15962303496510825665ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5702))))))));
        var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-76)), (arr_3 [i_1 + 1])))) ? (((((/* implicit */_Bool) ((int) 14542534055599909203ULL))) ? (arr_2 [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_8))));
    }
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((max((((/* implicit */int) var_8)), (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) var_9)))))));
}
