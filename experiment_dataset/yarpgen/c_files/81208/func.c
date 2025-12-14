/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81208
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
    var_14 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_3)))) || ((!(((/* implicit */_Bool) max(((signed char)-98), (((/* implicit */signed char) (_Bool)0)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_11)) : (3607559963U)))) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (var_4)))))) ? ((+(((/* implicit */int) arr_4 [i_0 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_7))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 2; i_4 < 11; i_4 += 2) 
                            {
                                arr_15 [i_0] [i_0] [i_0 - 1] [i_1] [i_2 + 1] [i_3 + 3] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) ((_Bool) (signed char)97))), (max(((short)13194), (((/* implicit */short) arr_7 [i_0] [i_1])))))))));
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((max(((~(1323299954U))), (((/* implicit */unsigned int) (unsigned short)39987)))) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                            }
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)51774)))))));
                        }
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)40014))))) ? ((-(((/* implicit */int) arr_12 [(unsigned short)5] [(unsigned short)5] [i_0 - 1] [i_1 + 3] [i_0 - 1])))) : (((/* implicit */int) max(((short)13186), (((/* implicit */short) arr_13 [i_1 - 3] [i_1 - 3])))))));
            }
        } 
    } 
}
