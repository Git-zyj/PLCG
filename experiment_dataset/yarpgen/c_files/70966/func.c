/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70966
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0 - 1] [i_0 - 1] [i_1] = min((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_10))))), (((536870911) << (((((int) 671971774)) - (671971774))))));
                arr_7 [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */int) ((((/* implicit */long long int) ((671971799) & (-671971775)))) > (((long long int) arr_3 [i_0] [i_0] [i_0]))))) : (((671971803) + (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) == (-671971776))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((unsigned short) 671971758));
}
