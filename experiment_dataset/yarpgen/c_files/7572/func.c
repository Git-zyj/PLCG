/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7572
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_17))))) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) var_2))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3926273374U)) || (((/* implicit */_Bool) (signed char)-50))))), (var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((unsigned char) var_15));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(var_13))))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_15) : (var_5)));
                        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_18))));
                    }
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_16)), ((+(min((var_7), (var_13)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            var_25 = ((/* implicit */int) var_11);
                            var_26 = ((/* implicit */int) (!(((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_15)))) && (((/* implicit */_Bool) var_8))))));
                        }
                    }
                    var_27 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_1)) : (var_7)))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) min((var_12), ((+(var_9)))));
    var_29 = ((/* implicit */unsigned char) var_15);
}
