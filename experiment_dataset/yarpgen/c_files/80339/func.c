/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80339
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 += ((/* implicit */signed char) (short)5456);
                var_19 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 886228646)))) * (((((/* implicit */unsigned int) (~(((/* implicit */int) (short)26402))))) & (3404347478U)))));
            }
        } 
    } 
    var_20 &= ((/* implicit */int) min((8983323445960663736ULL), (((((9463420627748887855ULL) / (9463420627748887880ULL))) << (((/* implicit */int) (signed char)53))))));
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((short) ((((/* implicit */int) (signed char)55)) << (((8943246049301192975ULL) - (8943246049301192961ULL)))))))));
    var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (short)5532))))))), ((+(min((7329922156397317619ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
}
