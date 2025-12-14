/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86975
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((var_1) ? (arr_0 [i_1]) : (arr_0 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))))))));
                            var_13 = ((/* implicit */int) ((((/* implicit */int) ((arr_1 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) <= (((/* implicit */int) var_3))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (short)8950)))), (var_9)));
                var_14 |= ((/* implicit */short) (-((((((_Bool)1) && ((_Bool)1))) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [9ULL] [i_1])) : ((-(8709808153555799938ULL)))))));
                arr_12 [i_0] [i_0] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (1620994441) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_15 = ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (var_0) : (var_6))) : (((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) var_2))))))));
}
