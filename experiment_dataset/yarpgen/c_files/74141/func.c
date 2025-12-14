/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74141
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min(((unsigned short)3), (((/* implicit */unsigned short) (signed char)0)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_3 [i_0])))) ? (((/* implicit */long long int) min((arr_1 [i_0]), (arr_1 [10])))) : (((var_14) ? (8360117875395676836LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))))), (min((min((4949618034277242244ULL), (arr_3 [i_0]))), (((/* implicit */unsigned long long int) min(((unsigned short)40644), (((/* implicit */unsigned short) arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 986528980)) ? (((/* implicit */int) (unsigned short)224)) : (((/* implicit */int) (unsigned short)65533))));
                    arr_9 [6LL] &= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_7 [8] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)65533))))) : (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_14))))))), (min((((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-29642)))), (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)7)))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (min((var_0), (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned short)65533)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) var_15))))))))));
    var_20 = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) min(((-2147483647 - 1)), (var_2)))))), (((/* implicit */long long int) min((min((((/* implicit */int) (signed char)3)), (1887559830))), (((var_13) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13)))))))));
}
