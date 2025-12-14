/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56939
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
    var_14 = ((/* implicit */unsigned long long int) var_13);
    var_15 &= ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((unsigned int) var_10))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        var_16 = (+(((/* implicit */int) arr_4 [i_2])));
                        var_17 = ((/* implicit */unsigned int) (+((+(6346317474855616497LL)))));
                        arr_12 [(unsigned char)4] [i_1] [(unsigned char)4] [i_2] [i_0] = min((min((arr_6 [i_2]), (arr_6 [i_2]))), (((/* implicit */signed char) ((_Bool) var_10))));
                        var_18 = ((/* implicit */long long int) arr_8 [10U] [i_1] [i_2] [7U]);
                    }
                    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_4 [i_2 + 2])), (((((/* implicit */_Bool) 933351404U)) ? (13002534451519482571ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 933351382U)) || (((/* implicit */_Bool) 4294967295U))))))))));
                    arr_13 [i_2] [i_2] [i_2 + 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4)))) + (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 - 1]))) * (arr_5 [i_1] [i_2 + 2] [i_2])))));
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((var_7) % (((/* implicit */long long int) ((/* implicit */int) var_5))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2]))))))));
                }
            } 
        } 
    } 
}
