/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79716
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
    var_13 = ((/* implicit */short) var_9);
    var_14 = ((/* implicit */short) ((((_Bool) ((((-9020864980288648936LL) + (9223372036854775807LL))) >> (((var_1) - (856202272U)))))) ? ((-(((((/* implicit */_Bool) -2982852220793668777LL)) ? (((/* implicit */long long int) var_5)) : (2982852220793668774LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((3091285683U), (((/* implicit */unsigned int) var_8))))) ? (max((4004108452U), (((/* implicit */unsigned int) 960479501)))) : ((-(var_10))))))));
    var_15 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1])))))) : (arr_2 [i_0 - 1])))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */short) var_9);
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0 - 1] [i_0 - 1] [(_Bool)1] [i_1 - 1] [i_2 + 4])) ? (((/* implicit */long long int) var_9)) : (arr_10 [i_0] [i_0 - 1] [i_0])))))));
                                var_19 = ((/* implicit */unsigned int) ((((_Bool) (-9223372036854775807LL - 1LL))) ? (((((((/* implicit */_Bool) -2059228343528500958LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))) : (2LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -2982852220793668796LL)))))) : (((/* implicit */long long int) ((15U) & (arr_11 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 3] [(_Bool)1]))))));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) -5341579794093820026LL)) ? (arr_18 [i_2] [i_2] [19U] [23ULL] [i_2 - 2] [20ULL]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4261412864ULL)) ? (((/* implicit */int) (_Bool)1)) : (var_8)))))) - (((/* implicit */unsigned long long int) (~(arr_2 [i_0]))))));
                    arr_19 [i_0 - 1] [(_Bool)0] [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 284676423U))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) ((short) (short)11893));
        arr_20 [i_0] &= ((/* implicit */_Bool) var_11);
        var_22 += ((/* implicit */int) ((((/* implicit */_Bool) ((short) (short)-30602))) ? (12242062970564886828ULL) : (((unsigned long long int) ((((/* implicit */_Bool) 3734975262U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30589))) : (4004108448U))))));
    }
}
