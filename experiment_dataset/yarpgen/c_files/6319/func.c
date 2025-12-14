/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6319
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
    var_19 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(min((2221832409516172168ULL), (((/* implicit */unsigned long long int) 800583667U)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((2431394616U), (((/* implicit */unsigned int) -1530568879))))) ? (((/* implicit */unsigned int) 1615366037)) : (max((1863572679U), (((/* implicit */unsigned int) var_13)))))) + (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((arr_5 [i_0] [i_0] [i_1] [2]) + (((/* implicit */unsigned int) -1530568899)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)34)) : (arr_0 [i_0]))))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? ((-(var_6))) : (arr_4 [i_0] [i_0])));
                    arr_8 [(unsigned char)5] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_18), (arr_6 [i_0])))) << (((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) & (1863572679U))) - (131U)))))), (((((/* implicit */_Bool) (unsigned char)219)) ? (((((/* implicit */_Bool) 1838272860U)) ? (4271135867189234319ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_2])))) : (min((((/* implicit */unsigned long long int) var_3)), (8631288807490753273ULL)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (~(((unsigned long long int) ((12207829219785936867ULL) ^ (var_9)))))))));
}
