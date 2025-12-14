/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96950
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
    var_20 = ((/* implicit */int) ((((/* implicit */long long int) 2473786695U)) ^ (3670830458757591221LL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) 1628911947);
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) var_4);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((arr_2 [i_1 + 2] [i_1 + 1] [i_1 + 2]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))), (((((1969480322208275554ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            }
        } 
    } 
}
