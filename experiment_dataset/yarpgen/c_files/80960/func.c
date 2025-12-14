/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80960
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
    var_14 = (_Bool)1;
    var_15 = ((((((/* implicit */_Bool) var_1)) ? (max((var_0), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) < (((/* implicit */long long int) var_11)));
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned int) (((_Bool)0) || (((/* implicit */_Bool) 4232967847U)))))))) + (15336871894807772904ULL)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) 17172412873521277083ULL);
        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)7177)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-9763)))) * (((/* implicit */int) (short)9788))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) -1856128808))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) var_1)))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2063)) ? (((/* implicit */int) ((((/* implicit */_Bool) 288230376151711712LL)) || (((/* implicit */_Bool) (short)-23530))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3202453119U)) ? (((/* implicit */int) (short)9762)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) (unsigned short)54775)) ? (((/* implicit */int) (short)-9763)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) var_13))))))));
    }
    for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) 1956203538679289529LL)) ? (((/* implicit */unsigned long long int) 3202453090U)) : (14388008410126206907ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 4134808584U)))) : (max((arr_8 [(_Bool)0] [i_2 - 1]), (1092514159U)))));
        arr_10 [i_2 + 3] = ((/* implicit */signed char) arr_8 [i_2] [i_2 + 3]);
    }
}
