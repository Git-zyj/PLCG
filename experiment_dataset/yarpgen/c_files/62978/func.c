/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62978
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
    var_12 = ((/* implicit */unsigned long long int) var_3);
    var_13 = ((/* implicit */signed char) (-((-(var_9)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) || ((_Bool)1))))) >= (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [7])) : (var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((arr_2 [(unsigned short)1] [i_0]), (((/* implicit */unsigned long long int) var_9)))) == (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)0)), (var_9)))))))) : (arr_3 [i_0])));
                var_14 = ((/* implicit */long long int) min((((/* implicit */signed char) ((_Bool) arr_2 [i_0] [i_0]))), (((signed char) ((((/* implicit */_Bool) arr_4 [i_0] [(signed char)5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) : (4623435657154964545LL))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_5);
}
