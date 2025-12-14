/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92500
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) (-(((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (max((2740418214681869830ULL), (((/* implicit */unsigned long long int) (signed char)8)))))))))));
                var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) (signed char)-127))), (((((/* implicit */_Bool) (-(arr_0 [(unsigned short)6])))) ? ((-(-15LL))) : (((/* implicit */long long int) 4064311622U))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) (_Bool)0)), (18446744073709551613ULL)))))) + ((-(min((((/* implicit */unsigned long long int) var_1)), (10940862142110821472ULL)))))));
}
