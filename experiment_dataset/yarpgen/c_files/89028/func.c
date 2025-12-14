/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89028
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
    var_18 = ((/* implicit */unsigned long long int) ((_Bool) var_13));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_10 [i_2 - 1] [i_1] [i_2] [i_3] = ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))) ^ ((~(arr_1 [i_0] [i_1])))));
                            var_19 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */unsigned long long int) arr_4 [i_0])) - (arr_1 [i_0] [i_0]))) : (((((/* implicit */unsigned long long int) -5294344170578094052LL)) - (arr_5 [i_0] [i_3 - 1] [i_0])))))));
                            var_20 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_1]), (((/* implicit */signed char) var_11))))) ? (((/* implicit */unsigned long long int) ((7734142563616748946LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_17)))))) : (8388607ULL))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (+(min((arr_5 [i_0] [i_0] [i_1]), (arr_5 [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (((+(var_9))) == (5294344170578094055LL)))) | ((+(((/* implicit */int) ((2106535521U) > (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((_Bool) var_11)) && (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_10)))))))) != (((unsigned int) var_8))));
}
