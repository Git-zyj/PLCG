/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90722
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
    var_15 = ((/* implicit */int) var_7);
    var_16 = ((/* implicit */signed char) (((((~(((/* implicit */int) (short)10845)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-10817)) ? (2147483640) : (((/* implicit */int) (signed char)-65))))), (var_9))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -2009349572)) ? (var_6) : (((/* implicit */unsigned int) 2009349580)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 6059243451480696791LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))) : (((arr_2 [i_0]) ? (arr_3 [8]) : (((/* implicit */unsigned long long int) arr_1 [i_0])))))) | (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)10845)) ? (-1) : (var_13))) & (((/* implicit */int) (unsigned short)7387)))))));
        arr_5 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2247665695003687503ULL)) || (((/* implicit */_Bool) var_11))))), (((arr_3 [i_0]) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
    }
}
