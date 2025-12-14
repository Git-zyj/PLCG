/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65911
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
    var_17 = var_14;
    var_18 = ((/* implicit */unsigned char) var_11);
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((signed char) var_0)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) arr_1 [i_0])))) != (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-29937)))))))) <= (((((/* implicit */_Bool) 3346677227U)) ? (10400339276638324572ULL) : (0ULL)))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((unsigned int) var_9)))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(17556858553270941450ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */short) arr_0 [i_0] [i_0])), ((short)17037))), (((/* implicit */short) arr_0 [i_0] [i_0])))))) : (9ULL)));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
}
