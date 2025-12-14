/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78611
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 12734380568740198348ULL))));
                    var_17 = min(((-(var_14))), (((/* implicit */int) ((2489424481U) == (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) % (var_11))));
        var_19 = var_5;
    }
    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        var_20 = ((((/* implicit */int) ((((/* implicit */int) (unsigned short)7168)) == (((/* implicit */int) (unsigned short)0))))) << (((/* implicit */int) ((_Bool) var_12))));
        var_21 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) 3459548049U)))));
    }
    var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) / (var_1)));
    var_23 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) -66477597)) : (12734380568740198348ULL)))) ? (max((((/* implicit */unsigned long long int) 2954032713U)), (1152921504338411520ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30891))) <= (var_1))))))));
}
