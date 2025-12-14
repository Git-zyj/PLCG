/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68831
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
    var_10 = ((/* implicit */unsigned long long int) 3193889980427931882LL);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_5))) < (((/* implicit */int) (!(((/* implicit */_Bool) -233521550))))))))) == (max((((unsigned int) var_8)), (((/* implicit */unsigned int) min((var_3), (((/* implicit */unsigned char) (signed char)102))))))))))));
                    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (max((var_9), (((/* implicit */unsigned long long int) 2616769900U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))))))));
                }
            } 
        } 
    } 
}
