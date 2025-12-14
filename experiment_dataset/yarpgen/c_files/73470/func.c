/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73470
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
    var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_13)) ? ((+(var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)37114)) * (((/* implicit */int) var_10))))))), (var_3)));
    var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) var_5);
                var_17 ^= ((/* implicit */unsigned short) (-((((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) : ((-(var_7)))))));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)60084)) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) (unsigned short)9)))))));
                /* LoopNest 3 */
                for (long long int i_2 = 4; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)37114)))))));
                                arr_11 [i_4] [(unsigned short)19] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13633714906994469467ULL))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
