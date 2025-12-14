/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99715
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
    var_12 = ((/* implicit */long long int) (-((+(min((((/* implicit */unsigned int) (unsigned short)0)), (2946647798U)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [(unsigned short)9] [i_1] = ((/* implicit */int) 611488764U);
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */int) (unsigned short)5)) == (arr_2 [i_1])))), (((signed char) arr_1 [i_1 + 2]))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((+(((1574782301221165678LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-28928))))))) % (((/* implicit */long long int) arr_1 [i_0]))));
            }
        } 
    } 
}
