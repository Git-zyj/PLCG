/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6608
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (((((+(2803208122U))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2803208132U))))) : (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-32)) || (((/* implicit */_Bool) var_9))))) >> (((((long long int) (unsigned short)34885)) - (34858LL))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((unsigned int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_8)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)8))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_13 = ((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) var_4)) - (86))));
                    var_14 = ((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_0]));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */_Bool) (+(var_6)));
                        var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_0));
                    }
                    var_17 = ((/* implicit */unsigned long long int) (((+(arr_0 [(signed char)7]))) * (((/* implicit */int) (!(var_1))))));
                    arr_13 [(signed char)12] [(signed char)12] [i_0] = ((/* implicit */long long int) (!((_Bool)0)));
                }
            }
        } 
    } 
    var_18 = var_9;
    var_19 = ((/* implicit */signed char) max((min((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (var_6))), (min((((/* implicit */unsigned int) var_4)), (4294967295U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (var_0)))))))));
}
