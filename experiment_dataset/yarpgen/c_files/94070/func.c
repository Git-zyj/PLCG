/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94070
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [(short)8] [(short)8] = ((/* implicit */unsigned char) min((((long long int) ((long long int) (short)0))), (((/* implicit */long long int) (-(((/* implicit */int) (short)12)))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) ((_Bool) var_7));
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [8] [i_1] [i_1])) ? (max((((/* implicit */int) (signed char)4)), (0))) : (((((/* implicit */int) (unsigned char)41)) << (((var_3) - (1741153874)))))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_10 [i_3 + 1] [i_3 - 1] [18LL] [i_3] [i_3 + 1] [i_3])), ((short)-1)))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)8)) : (((/* implicit */int) (short)-8))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [16LL] [i_4 + 4] [10LL] [i_4 + 4] [i_4] [8]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)160))) & (7245712603623110457LL))))) : (((/* implicit */long long int) -1649059503))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_12 [i_0] [i_1] [(short)7])))), (((((/* implicit */int) (short)-7585)) ^ (((/* implicit */int) (signed char)-19))))));
            }
        } 
    } 
    var_16 = max(((+(((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_5))))))), (((/* implicit */int) var_9)));
}
