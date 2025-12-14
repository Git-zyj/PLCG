/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83027
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
    var_11 = ((/* implicit */short) var_1);
    var_12 = ((/* implicit */unsigned long long int) max(((short)-32742), (((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) var_1))))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */int) (+(-6141639698229343407LL)));
                arr_6 [i_0] [(unsigned char)16] = ((/* implicit */short) ((((long long int) ((((/* implicit */_Bool) 1402094439697744846LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_0))))) || (((/* implicit */_Bool) 4279232675876125728LL))))))));
            }
        } 
    } 
}
