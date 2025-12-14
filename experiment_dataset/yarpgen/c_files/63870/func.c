/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63870
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((min((((1618027160U) * (1618027160U))), (12U))) / (((((/* implicit */_Bool) ((2676940138U) * (34U)))) ? (((((/* implicit */_Bool) 34U)) ? (37U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98))))) : (((432377032U) / (3862590261U))))));
                arr_6 [i_0] |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (2676940135U)))) ? (max((4294967295U), (var_13))) : ((+(var_5)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_3 - 1] = ((unsigned int) 4294967250U);
                            arr_15 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (2676940135U)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 432377057U)))))));
                            arr_16 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_7)) - (110)))))) ? (min((var_4), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-18))))))))));
                        }
                    } 
                } 
                arr_17 [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((unsigned int) (signed char)-126)) > (((((/* implicit */_Bool) ((var_3) + (1618027157U)))) ? (((((/* implicit */_Bool) var_12)) ? (4294967295U) : (1860765947U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_15)))))))));
                arr_18 [i_0] [i_0] = ((/* implicit */signed char) ((4290384860U) <= (2434201348U)));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((var_14) > ((((+(688734829U))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33))) - (4294967279U))) - (4294967256U)))))));
}
