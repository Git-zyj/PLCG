/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73406
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_10 |= ((/* implicit */unsigned short) (((-(max((((/* implicit */unsigned int) (_Bool)0)), (88480293U))))) >> (((/* implicit */int) ((((((/* implicit */_Bool) 3800388547U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3294))) : (18446744073709551605ULL))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)35271))))))))));
                var_11 = max((max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) 2244602121U))))))), (((/* implicit */int) (((!(((/* implicit */_Bool) 24ULL)))) && (((/* implicit */_Bool) (-(2244602121U))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) (-(2244602121U)));
}
