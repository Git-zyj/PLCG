/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59122
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
    var_20 = ((((((/* implicit */int) var_12)) != (((/* implicit */int) min((var_15), (var_15)))))) ? (((/* implicit */int) ((((/* implicit */int) max(((unsigned short)59025), ((unsigned short)11249)))) < (((/* implicit */int) ((unsigned char) 2251799813685247LL)))))) : (((/* implicit */int) (signed char)-52)));
    var_21 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [20LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((var_3), (var_7))))))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-5))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_11) : (((/* implicit */unsigned long long int) 0)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)100)) & (((/* implicit */int) (unsigned short)0)))))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1 - 1] [i_1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59025))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) (_Bool)1))))))))));
                var_23 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) (short)32767)) | (((/* implicit */int) (signed char)-94))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), (arr_4 [8LL] [i_1 + 1] [13LL])))) ? (max((((/* implicit */long long int) (short)32767)), (arr_2 [i_1]))) : (min((((/* implicit */long long int) (unsigned char)5)), (arr_2 [i_0])))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) max((min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)65531)))), (((/* implicit */int) var_5)))), (max(((((_Bool)1) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (unsigned short)21428))))))));
}
