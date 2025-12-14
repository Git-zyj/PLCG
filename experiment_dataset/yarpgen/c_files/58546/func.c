/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58546
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
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0 + 1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) (unsigned char)7))))) ? (((unsigned long long int) arr_2 [i_0 + 1] [i_0 + 1])) : (((/* implicit */unsigned long long int) ((((arr_2 [i_1] [i_1]) + (((/* implicit */long long int) var_19)))) << (((arr_2 [i_1 + 1] [i_1 + 1]) - (8443877325360228338LL))))))));
                var_20 = ((/* implicit */unsigned int) (~(min((((((/* implicit */_Bool) (short)3968)) ? (((/* implicit */int) arr_1 [(unsigned short)10])) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) arr_1 [i_0 + 2]))))));
                var_21 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)-116)), (var_3)))), (((((/* implicit */_Bool) (unsigned char)248)) ? (var_1) : (((/* implicit */unsigned long long int) 2437836799U)))))) ^ (8646911284551352320ULL)));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_10 [12ULL] [i_1 - 1] [i_0] = arr_5 [i_0] [i_0 - 1] [i_0];
                            arr_11 [i_0] [i_0 - 2] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) (unsigned char)94);
                            arr_12 [i_0] [i_0 + 2] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((((/* implicit */int) arr_1 [i_0 + 2])) << (((((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_0 + 1] [i_0 + 1])) - (26))))) : (((((/* implicit */int) var_2)) ^ (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (signed char)95))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_8);
    var_23 = ((/* implicit */int) (+(var_19)));
    var_24 = ((/* implicit */int) var_1);
}
