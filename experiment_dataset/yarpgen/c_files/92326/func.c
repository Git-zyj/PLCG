/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92326
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((+(var_0))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (var_0))))))))))));
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    var_18 |= ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned char)3] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (4182973979924163331LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0 + 4])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((signed char) 0U)))));
                            var_21 = ((/* implicit */unsigned short) arr_9 [i_0] [i_0 + 3] [i_0] [i_0]);
                            arr_11 [i_0] [i_1 - 1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) (~(((((/* implicit */_Bool) -4182973979924163332LL)) ? (17169582764359950901ULL) : (((/* implicit */unsigned long long int) -4182973979924163331LL)))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [4] = ((/* implicit */int) min((((((/* implicit */_Bool) (~(arr_7 [i_0] [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0] [i_1 + 1])), (arr_7 [i_1 + 1] [i_0 + 4] [i_0 + 4])))) : ((-(0ULL))))), (arr_10 [i_0 + 4] [i_1] [i_1] [i_1])));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_11);
}
