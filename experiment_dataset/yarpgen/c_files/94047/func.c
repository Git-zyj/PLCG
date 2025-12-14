/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94047
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
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_4)), (var_5))), (((/* implicit */unsigned long long int) max(((unsigned short)55155), (((/* implicit */unsigned short) (unsigned char)237))))))))));
    var_15 = ((/* implicit */signed char) ((var_0) + (((/* implicit */int) ((_Bool) max((-9188636720446257740LL), (((/* implicit */long long int) (signed char)120))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */short) ((unsigned long long int) arr_4 [i_0] [i_0] [i_1]));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_4);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (9188636720446257754LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [(signed char)19])), (2263643798095050511ULL)))) ? (((((/* implicit */_Bool) (unsigned short)29839)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (-9188636720446257740LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)55141)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (9188636720446257747LL))) + (((/* implicit */long long int) ((unsigned int) var_8))))) < (((/* implicit */long long int) ((/* implicit */int) var_9)))));
}
