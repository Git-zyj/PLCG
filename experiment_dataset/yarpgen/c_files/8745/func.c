/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8745
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = ((((/* implicit */_Bool) max((arr_2 [i_1]), (arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (arr_3 [i_0] [i_0])))) : (((((/* implicit */int) ((_Bool) (_Bool)1))) | (((/* implicit */int) arr_5 [i_0])))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) : (arr_0 [i_0]))) ^ (((/* implicit */unsigned long long int) (((((_Bool)1) ? (var_1) : (((/* implicit */long long int) var_9)))) / (min((((/* implicit */long long int) (short)-446)), ((-9223372036854775807LL - 1LL)))))))));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((min(((_Bool)1), ((_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-446))))) : (((((/* implicit */_Bool) (short)-469)) ? (1342931788062663795ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (14151806022011606871ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17914)))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
}
