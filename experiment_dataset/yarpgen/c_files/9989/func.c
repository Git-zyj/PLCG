/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9989
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) max((var_5), ((~(((/* implicit */int) (unsigned char)84)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
                arr_6 [i_0] [i_0] [i_1] = max((arr_0 [4ULL] [6ULL]), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)21172))))), (((((/* implicit */unsigned long long int) var_1)) * (14945837131567440588ULL))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) 1368159889232590212LL))), (((((/* implicit */int) var_8)) / (((/* implicit */int) var_7))))))) ? (((((/* implicit */int) min(((signed char)70), ((signed char)-61)))) / (((/* implicit */int) ((signed char) var_9))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) 17680221674547103082ULL))))), ((~(((/* implicit */int) var_8))))))));
}
