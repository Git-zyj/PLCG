/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85033
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((var_18), (var_11))) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (((_Bool)1) ? (-461400545) : (((/* implicit */int) (signed char)-91))))) <= (((((/* implicit */_Bool) -6001151221521643652LL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) : (((/* implicit */int) min((var_18), ((!(((/* implicit */_Bool) var_16)))))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((-1091661486), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)60673)) && (((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min((var_4), (var_4))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [8ULL] = ((/* implicit */int) -6001151221521643652LL);
        arr_4 [i_0] = ((/* implicit */unsigned char) (unsigned short)60673);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (unsigned short)17296)) : (((/* implicit */int) arr_2 [i_1])))) < (((((/* implicit */_Bool) 8490414685433660929ULL)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (unsigned short)4862))))));
        arr_8 [20] [(signed char)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? ((~(var_0))) : (((/* implicit */unsigned long long int) var_8))));
        arr_9 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1]))));
    }
    var_21 = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
}
