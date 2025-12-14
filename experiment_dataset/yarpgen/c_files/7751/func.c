/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7751
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
    var_19 = (+((+(((/* implicit */int) var_11)))));
    var_20 = ((/* implicit */long long int) (((!(((((/* implicit */_Bool) (unsigned short)12288)) || (((/* implicit */_Bool) var_17)))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (signed char)-122))))))) : (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) << (((arr_2 [i_0] [(unsigned short)6]) + (385817789))))) / ((+(((/* implicit */int) var_17))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((6866256482224612138LL) << (((((/* implicit */int) var_12)) - (10792))))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_22 &= var_1;
                    var_23 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned int) -889595506))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) (unsigned short)4790))))) ? ((-(((/* implicit */int) (unsigned char)127)))) : (-889595506))))));
                        var_25 = ((/* implicit */unsigned int) arr_5 [i_0]);
                    }
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                    {
                        var_26 = ((((-1443349816) + (2147483647))) >> (((((/* implicit */int) (short)-26070)) + (26070))));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) 889595506)) ? (((/* implicit */int) (unsigned short)29221)) : (((/* implicit */int) (unsigned char)147))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_2] [(unsigned char)9] = ((/* implicit */short) (+((+(889595518)))));
                        arr_18 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_2 - 1])) != (((/* implicit */int) arr_5 [i_2 + 2]))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (+(((int) var_1)))))));
                    }
                }
            } 
        } 
    }
    var_29 = ((/* implicit */long long int) (-((((-(var_0))) + (var_13)))));
}
