/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83722
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
    var_11 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_0 [i_0]))))));
                            arr_14 [i_0] [i_1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((((/* implicit */_Bool) arr_6 [i_2])) || (((/* implicit */_Bool) (unsigned short)2774))))))) >= (((/* implicit */int) ((unsigned short) arr_1 [i_2])))));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) (unsigned short)47531)))));
                        }
                    } 
                } 
                arr_16 [i_0] = ((min((8269645847241127394LL), (var_0))) & (((var_0) / (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)65531), (var_7))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7)) && (((/* implicit */_Bool) -5452835797088759425LL))))) : (((/* implicit */int) (!(((-8771447867714029002LL) > (5452835797088759424LL))))))));
}
