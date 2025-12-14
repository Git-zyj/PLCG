/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70794
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
    var_17 = ((/* implicit */int) (short)26366);
    var_18 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) var_5)), (var_15))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned int) 1534165024)) : ((((_Bool)1) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
    var_19 = ((/* implicit */short) (_Bool)1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((((((/* implicit */int) var_8)) + (2147483647))) << (((4744847509125699548LL) - (4744847509125699548LL)))))))), (4294967295U)));
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((signed char) (signed char)-1))), (((((/* implicit */_Bool) ((signed char) var_3))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (_Bool)1))))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(var_14)))) < (min((var_9), (((/* implicit */unsigned long long int) (_Bool)1))))));
        arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) (~(0U)))) : (max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) : (arr_1 [(unsigned short)4] [i_0])))), (var_15)))));
        var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [(signed char)3] [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) (signed char)-110)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65527))))))), (((/* implicit */unsigned long long int) (_Bool)1))));
    }
}
