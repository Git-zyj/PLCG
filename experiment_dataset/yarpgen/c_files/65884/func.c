/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65884
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_2))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_3 [i_0 + 1] [i_0 - 1]))) % (((/* implicit */int) (short)(-32767 - 1)))));
                arr_9 [i_0 + 1] [(signed char)12] [i_1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (+(5588860181386428944LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) 8802667573282995943ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21164))) : (7LL))))));
                arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 259515097361677045LL)))))));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41523))) / (7466886399980851793LL))))))));
            }
        } 
    } 
}
