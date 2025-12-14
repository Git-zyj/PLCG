/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8547
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
    var_18 = ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) * (var_4));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = min((((3040350891615279993LL) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))), (min((arr_5 [i_0] [i_1]), (min((arr_5 [i_0] [i_1]), (arr_3 [i_0]))))));
                var_20 *= ((/* implicit */long long int) ((_Bool) max((arr_3 [i_1]), (((/* implicit */long long int) arr_2 [i_0] [i_0])))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */int) arr_14 [i_0] [1LL] [i_2] [i_0] [i_0])) - (((/* implicit */int) arr_14 [i_4] [i_0] [i_0] [i_1] [i_0]))))));
                                var_21 = (~(3702857414052766554LL));
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (1074588414485268600LL)))))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1074588414485268600LL)))))) : ((((_Bool)1) ? (arr_6 [i_4]) : (-7546819438439070990LL))))));
                                arr_18 [i_0] [i_0] [i_0] [i_4] [i_0] [21LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) ? (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [5LL]) : (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) % (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [2LL])))));
                                var_22 = ((/* implicit */long long int) min((var_22), (max((7160335281961723960LL), (((/* implicit */long long int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) min(((_Bool)1), ((_Bool)1))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) -1074588414485268588LL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            for (long long int i_7 = 1; i_7 < 21; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    {
                        var_25 = (!(((/* implicit */_Bool) 1074588414485268600LL)));
                        var_26 &= ((/* implicit */long long int) arr_2 [i_7] [i_6]);
                        var_27 = ((/* implicit */long long int) min((var_27), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_10 [i_5 + 1])))));
                        arr_30 [i_7] [16LL] [i_6] = ((/* implicit */long long int) (_Bool)1);
                    }
                } 
            } 
        } 
        var_28 *= ((/* implicit */long long int) (((!(arr_15 [2LL]))) ? (((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_5] [i_5 + 1])) : (((/* implicit */int) (_Bool)1))));
    }
}
