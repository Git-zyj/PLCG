/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60665
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-235789363) != (max((117440512), (((/* implicit */int) var_9)))))))) > (min((((/* implicit */unsigned long long int) (_Bool)0)), (((unsigned long long int) (signed char)-86))))));
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (((+(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (var_13))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
    var_17 = ((/* implicit */int) var_9);
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((max((((13712539928145646984ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))))), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_1] [i_2])))) <= (((/* implicit */unsigned long long int) (+(1524503027)))))))));
                    var_20 = ((/* implicit */_Bool) var_14);
                }
            } 
        } 
    } 
}
