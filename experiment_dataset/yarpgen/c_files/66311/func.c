/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66311
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
    var_13 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (18446744073709551604ULL)))), (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) var_5))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((var_2) + (671833215)))))) ? (min((var_6), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (var_3))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))) * (((((/* implicit */int) var_9)) * (((/* implicit */int) var_10))))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))), (max((var_6), (((/* implicit */unsigned long long int) var_11))))))) ? (((/* implicit */long long int) max((((((/* implicit */int) var_9)) | (((/* implicit */int) (short)-31482)))), (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (signed char)-115)))))))) : (min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) var_0))))), (max((291202591745936694LL), (((/* implicit */long long int) var_9))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)20709)) && (((/* implicit */_Bool) 18446744073709551598ULL))))), (((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (7686940024131222607ULL) : (arr_1 [i_0]))) + (((var_6) >> (((((/* implicit */int) (unsigned short)6144)) - (6134)))))))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((arr_2 [i_0]) - (776621494797166513ULL)))))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)3)))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 3] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (var_5)))))) ? (max((min((((/* implicit */unsigned long long int) var_4)), (arr_2 [i_1 - 1]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_4 [i_1] [i_0] [i_0])))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (unsigned short)256))))), (((((/* implicit */_Bool) 23U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_1 [i_1 - 3]))))))))));
                var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-49)));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (short)11567))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)14879)) * (((/* implicit */int) (_Bool)0))))) : (max((var_4), (((/* implicit */unsigned int) arr_4 [15LL] [i_0] [i_1]))))))) | (max((8589934336ULL), (((/* implicit */unsigned long long int) (short)-31495)))))))));
            }
        } 
    } 
}
