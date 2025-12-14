/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90504
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [9] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((unsigned int) 8412787716886436461ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (min(((~(2606714994U))), (var_7)))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(var_1)))) <= (((min((((/* implicit */unsigned long long int) (unsigned short)25649)), (0ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_12);
}
