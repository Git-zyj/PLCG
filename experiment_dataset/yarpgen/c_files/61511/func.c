/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61511
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
    var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_11))));
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (+(((((/* implicit */_Bool) max((var_3), (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (var_8))))) : (max((((/* implicit */unsigned long long int) var_5)), (var_7))))))))));
    var_15 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */short) var_8);
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_2 [i_0] [i_1] [9LL]))))))) && (arr_6 [i_1] [i_2]))))));
                    arr_8 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0] [i_2]) / (((/* implicit */unsigned int) var_5))))) * ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2422))) : (14358813059321015272ULL))))));
                    arr_9 [i_0] [3LL] [i_2] [i_2] = ((/* implicit */_Bool) var_6);
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0]);
        var_17 = ((/* implicit */long long int) var_11);
    }
    for (int i_3 = 1; i_3 < 15; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (unsigned int i_5 = 1; i_5 < 15; i_5 += 4) 
            {
                {
                    arr_18 [i_3] [i_3] [i_5 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_2))));
                    arr_19 [i_4] = ((/* implicit */unsigned long long int) -1837250472738546333LL);
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) (_Bool)0);
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-(((((/* implicit */int) (short)7050)) * (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))))))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */_Bool) min((var_20), (var_9)));
}
