/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68349
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
    var_13 = ((/* implicit */int) ((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)20659))))));
    var_14 = ((/* implicit */int) (+(max((((((/* implicit */_Bool) 18082661881010431209ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20659))) : (var_6))), (3655221724263224971ULL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [i_3] [i_4 - 1] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) || (((/* implicit */_Bool) var_5))))) < (var_10))), (((((arr_10 [i_3] [i_1 - 1] [i_2] [(_Bool)1] [i_1 - 1] [(signed char)11]) + (((/* implicit */long long int) var_10)))) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_4 - 1] [i_1 - 1])))))));
                                var_15 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_4 - 1])) ? (((/* implicit */long long int) var_9)) : (arr_7 [i_0 + 3] [i_1 - 1] [i_2] [i_4 - 1])))));
                                var_16 = ((/* implicit */long long int) var_5);
                            }
                        } 
                    } 
                    arr_12 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((long long int) 364082192699120397ULL)), (max((((/* implicit */long long int) var_1)), (1878728385226694867LL)))))) - (min((((unsigned long long int) (unsigned short)20629)), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1 - 1] [19LL] [i_1 - 1]))))));
                    var_17 = ((/* implicit */short) var_8);
                    var_18 = ((/* implicit */int) max((var_18), ((+((+(arr_0 [i_1 - 1])))))));
                }
            } 
        } 
    } 
}
