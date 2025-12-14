/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96902
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
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [0] [i_1] [i_2] &= ((/* implicit */long long int) (+((~(arr_6 [i_2 + 3] [i_2] [i_1])))));
                    var_12 = ((/* implicit */int) max((var_12), ((~(383998308)))));
                    arr_8 [i_0] [i_1] &= arr_2 [i_0] [i_1] [i_2];
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_13 &= var_11;
                        var_14 &= ((/* implicit */int) (-(arr_5 [i_3])));
                    }
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1379002445)) ? (-1121046437) : (-1121046434)))) ? (((long long int) var_11)) : ((+(var_2))))))))));
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -6778057031306845612LL)) ? (-1121046424) : (-1121046424)))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1121046437)) ? (var_2) : (((/* implicit */long long int) 2090812203))))) ? (max((var_9), (((/* implicit */long long int) var_1)))) : (min((((/* implicit */long long int) 166449696)), (7844296102215332706LL)))))));
    var_17 &= ((/* implicit */long long int) var_11);
}
