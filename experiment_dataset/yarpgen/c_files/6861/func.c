/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6861
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_11 |= ((/* implicit */_Bool) (+(max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-12))))), (((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (short)0))))))));
                arr_6 [(unsigned short)8] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) min((var_5), (((/* implicit */unsigned char) (_Bool)1)))))))), (arr_0 [i_0] [i_1])));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+((~(max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (var_3)))))));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
            }
        } 
    } 
    var_12 = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) 9068839439864942663LL)), (1865502527852490144ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))))))) ? (((/* implicit */long long int) (+(max((((/* implicit */unsigned int) var_2)), (4294967295U)))))) : (min((((/* implicit */long long int) var_7)), ((-(var_8))))));
    var_13 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((var_10), (var_1)))) ? (max((var_1), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) 8922479618372748541LL)))), (((/* implicit */unsigned long long int) min((var_8), (min((var_8), (var_8))))))));
}
