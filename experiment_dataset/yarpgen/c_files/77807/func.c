/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77807
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 9))) ? (max((((int) var_10)), (var_4))) : (var_12)));
    var_17 = ((int) -7032344);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) 127)) / (2422908077281710921LL)));
                var_18 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */long long int) ((var_0) + (var_14)))) == (var_7))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            arr_11 [5] [i_0] [5] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max((((unsigned long long int) 0)), (((/* implicit */unsigned long long int) max((-5664801495718108041LL), (var_7))))))) ? (var_6) : (((/* implicit */unsigned int) ((1547905666) - (((/* implicit */int) ((((/* implicit */_Bool) 2422908077281710923LL)) || (((/* implicit */_Bool) 0ULL)))))))));
                            arr_12 [i_0] [9ULL] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_3 [i_3] [i_1] [1])) ? (1298472214780500776ULL) : (((/* implicit */unsigned long long int) var_12)))) == (arr_7 [i_0 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (-2422908077281710889LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2422908077281710922LL)) ? (((/* implicit */long long int) -1049410721)) : (-2422908077281710922LL)))))))) : (757940050U)));
                            arr_13 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0] = ((((/* implicit */_Bool) 1758915463U)) ? (4294967292U) : (4294967295U));
                            var_19 = min((min((var_11), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1339411111)) >= (5363013641527729147ULL)))))), (((((/* implicit */_Bool) -222092788)) ? (-1100910783333534897LL) : (-1100910783333534904LL))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((long long int) var_3);
}
