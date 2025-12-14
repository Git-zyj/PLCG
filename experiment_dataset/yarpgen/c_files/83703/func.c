/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83703
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23286))))))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_13)))) || (((/* implicit */_Bool) var_9))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_4) | (((((/* implicit */_Bool) var_11)) ? (var_9) : (14404392780566357660ULL)))))) ? (((((((/* implicit */int) arr_0 [i_2])) * (((/* implicit */int) (short)-10832)))) / (((/* implicit */int) var_8)))) : (((((/* implicit */int) (short)32740)) * (((/* implicit */int) (short)-26601))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)511))) : (var_9))) ^ (((((/* implicit */_Bool) 4502022760807200271ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25531)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) (short)14);
                                var_23 = ((/* implicit */short) var_11);
                                arr_13 [i_0] [i_0] [i_2] [(short)5] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)15396)) != (((/* implicit */int) (short)23283)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-15069))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32740))) : (var_4)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-9627))))) ? (((/* implicit */int) arr_11 [i_4] [i_2] [i_1] [(short)3])) : (((/* implicit */int) var_10))))) : (((((((/* implicit */_Bool) var_18)) ? (9015848218496920456ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25531))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_4] [i_1] [i_2 - 1] [i_3])) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) arr_3 [i_1 - 1] [i_1]))))));
                                arr_14 [i_0] [i_0] [i_1] [i_3] [i_4 - 1] [6ULL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32762))) < (6630640791141598449ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
