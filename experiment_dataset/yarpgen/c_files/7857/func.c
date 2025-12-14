/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7857
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
    var_15 = ((/* implicit */_Bool) min((min((min((9223372036854775804LL), (((/* implicit */long long int) 709099157U)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)8)), (var_2)))))), (((/* implicit */long long int) min((min((((/* implicit */unsigned int) var_8)), (var_10))), (((/* implicit */unsigned int) min((((/* implicit */signed char) var_0)), (var_12)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_3 [i_0])), ((unsigned short)47811)))), (min((981431975U), (((/* implicit */unsigned int) (unsigned short)9239))))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_0)), (var_11)))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (238648388658156094ULL)))))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */short) max((min((min((36028779839094784ULL), (((/* implicit */unsigned long long int) var_7)))), (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) -9223372036854775788LL)))))), (min((min((var_5), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))), (min((var_13), (((/* implicit */unsigned long long int) arr_3 [i_0]))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((min((min((((/* implicit */long long int) (unsigned short)65535)), (var_3))), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_12)), ((unsigned char)255)))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) min((var_7), (var_4)))), (min(((unsigned char)251), (((/* implicit */unsigned char) var_6)))))))));
}
