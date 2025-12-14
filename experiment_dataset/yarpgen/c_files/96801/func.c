/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96801
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
    var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) (signed char)63)), (var_14)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) >> (((((((/* implicit */_Bool) (unsigned short)40197)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) - (13942407278717457462ULL)))))));
        var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)32759)) ^ (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) (unsigned short)65528)) ? (8559252670987645791ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_9 [i_1] [i_1] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32759)))))));
                        arr_12 [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)59)), (var_9)));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (unsigned char)168))));
                        var_24 = ((/* implicit */_Bool) 15552092408886437519ULL);
                    }
                } 
            } 
        } 
    }
    var_25 &= ((/* implicit */long long int) var_4);
}
