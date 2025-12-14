/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62320
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3 - 1] [i_2] [i_1 - 2] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_9);
                                var_16 += ((/* implicit */unsigned char) (-(8589934528ULL)));
                                var_17 ^= ((/* implicit */unsigned long long int) ((short) var_11));
                                var_18 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0]))))), (8589934547ULL)))) ? (1152921504605798400ULL) : (((/* implicit */unsigned long long int) var_9)));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) max((var_11), (3921961765356986629LL)));
                    arr_14 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) ((int) ((short) ((unsigned char) var_2))));
                    arr_15 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-46))));
                }
            } 
        } 
    } 
    var_20 -= ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (var_10)))) : (((/* implicit */int) (!((_Bool)0))))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) -872769882)) : (36028797018963967ULL))));
}
