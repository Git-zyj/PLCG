/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83361
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [(unsigned short)4] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                arr_5 [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2])))))) + (((238983377U) / (238983378U))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] = arr_3 [i_1];
                                arr_16 [(unsigned short)3] [i_1] [i_2] [i_3 + 1] [i_0] = ((/* implicit */unsigned int) ((unsigned short) max((((((/* implicit */_Bool) (unsigned short)35639)) ? (arr_14 [i_0] [4U] [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [12U] [i_0])) ? (((/* implicit */int) (unsigned short)7334)) : (((/* implicit */int) (unsigned short)29903))))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_2 [i_0]) <= (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (arr_1 [i_0] [i_1])))) ? (min((var_12), (var_9))) : ((-(var_1)))))));
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)63302)) ^ (((/* implicit */int) (unsigned short)34568))))) * (((unsigned int) var_13)))) <= (((unsigned int) ((var_9) + (var_13))))));
    var_17 = ((/* implicit */unsigned short) var_0);
}
