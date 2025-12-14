/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78097
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) 10777521933700864262ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
    var_18 |= ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) var_9)), (((var_8) ? (var_15) : (10777521933700864290ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (-8701350893564280910LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))))));
    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_4)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 9223372036854775782LL)), (arr_9 [i_3 + 1] [i_4] [i_0] [(unsigned short)8]))), (((/* implicit */unsigned long long int) var_9))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) arr_3 [i_2]);
                                var_21 += ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_1] [i_3 + 1]);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 10777521933700864280ULL)) ? (var_9) : (((/* implicit */long long int) 268419072U)))) << ((((-(arr_13 [i_0] [i_1] [i_0] [i_2] [i_1] [i_0] [i_0]))) - (826900927U)))));
                }
            } 
        } 
    } 
}
