/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86321
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_12)), (var_13))) < (((/* implicit */unsigned long long int) ((((1262021722U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ? (min((2032210317U), (var_7))) : (((/* implicit */unsigned int) var_11))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((min((arr_0 [i_0]), (arr_0 [i_1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_5 [i_2] [i_1] [(_Bool)1])), (var_14)))))));
                    var_18 ^= ((/* implicit */long long int) (-(var_13)));
                    var_19 *= ((4236754579U) * (((2032210317U) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))) == (14351891523520344654ULL))))))));
                    arr_7 [i_2] [i_0] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((unsigned short) 11444847916925258535ULL))))) * (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) / ((-(((/* implicit */int) var_2))))))));
                }
            } 
        } 
    } 
}
