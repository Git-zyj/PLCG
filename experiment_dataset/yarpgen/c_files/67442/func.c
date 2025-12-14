/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67442
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
    var_17 = ((/* implicit */unsigned short) (signed char)-1);
    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    arr_8 [i_2 - 1] [13] [(unsigned short)11] [i_0] = ((/* implicit */short) (unsigned short)36449);
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_4 [i_0]))))))) == (max((var_5), (((/* implicit */unsigned int) max((var_0), (((/* implicit */short) (unsigned char)146)))))))));
                    var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_0 [i_0] [i_0])) - (12203)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_5)))));
                }
                for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    arr_13 [i_3] [i_3] [i_3] [(signed char)9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (18446744073709551615ULL)))))));
                    arr_14 [i_1] [11ULL] [i_1] [i_1] = var_12;
                    var_20 = max((((/* implicit */long long int) max((2707395325U), (4180158619U)))), (max((((/* implicit */long long int) var_13)), (((long long int) 844853711)))));
                }
                var_21 = ((/* implicit */unsigned int) ((((3606824435240748968ULL) << (((max((((/* implicit */unsigned int) 355477229)), (529873909U))) - (529873866U))))) << (((((((/* implicit */_Bool) (signed char)-115)) ? (4180158642U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))))) - (4180158629U)))));
            }
        } 
    } 
}
