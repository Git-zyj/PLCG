/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93950
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) 4294967292U);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_11 -= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) max(((short)7899), ((short)-7885))))))));
                                arr_14 [i_2] [i_2] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_8 [i_0] [(unsigned char)4] [i_0])) ? (((-9223372036854775782LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)118))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)220))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)28))))) && (((((/* implicit */_Bool) 4147936253U)) || (((/* implicit */_Bool) (short)7885)))))))));
                                arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-7885))));
                                var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0] [i_4] [i_4])))))));
                            }
                        } 
                    } 
                    var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((4246717177124294305LL), (4246717177124294305LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (short)-27757)) : (((/* implicit */int) (short)7886))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1]))))) : (min((140737488355328LL), (((/* implicit */long long int) (short)7901)))))) : (((/* implicit */long long int) ((/* implicit */int) (short)11)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 3707659815U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-7858)) && (((/* implicit */_Bool) (short)0)))))) : (((((/* implicit */_Bool) (signed char)-96)) ? (6248036139049196199ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)75))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-7885)))))));
}
