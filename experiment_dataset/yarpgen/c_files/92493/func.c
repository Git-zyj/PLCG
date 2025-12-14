/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92493
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
    var_16 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_7 [i_2])))) ? (((unsigned long long int) arr_7 [i_2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24864)))));
                            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-24845))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (short)-9235)))))))))));
                                var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) (+(((/* implicit */int) var_5))))), (max((((/* implicit */long long int) (signed char)-98)), (((((/* implicit */_Bool) var_13)) ? (-779403106248469753LL) : (((/* implicit */long long int) arr_5 [i_3] [i_2 - 1] [i_1 + 1]))))))));
                            }
                            var_20 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1]))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) (~(max((229511692U), (((/* implicit */unsigned int) (short)-24870))))));
                var_22 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1])) ^ (var_12)));
                arr_15 [i_0] [11] [(unsigned char)4] = ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-50)))) + (((/* implicit */int) (short)19815)))), (max((((((/* implicit */_Bool) 5049054101126253884LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_1])))), (((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1]))))));
                var_23 = ((/* implicit */short) arr_6 [i_0] [i_1 + 1] [i_0]);
            }
        } 
    } 
}
