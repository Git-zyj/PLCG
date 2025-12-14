/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73792
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((((4294967288U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -114620113))))), (((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))) && (((/* implicit */_Bool) arr_1 [7U] [i_0]))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
                {
                    var_19 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]);
                    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)34635)) && (((/* implicit */_Bool) ((arr_7 [i_0] [i_1] [i_2]) ? (arr_4 [22] [22]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 746313553)) ? (((/* implicit */int) var_10)) : (var_0)))) : (min((((/* implicit */unsigned int) (unsigned short)46528)), (0U)))))));
                    var_21 -= ((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)1))))));
                }
                arr_10 [i_0] [i_0] [i_0] = ((short) (!(((/* implicit */_Bool) var_3))));
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))), (max((((/* implicit */unsigned long long int) 114620113)), (var_7))))))))));
            }
        } 
    } 
}
