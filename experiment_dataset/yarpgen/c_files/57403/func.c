/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57403
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
    var_16 |= ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((unsigned long long int) ((long long int) 2065065383));
                arr_7 [22ULL] [i_1] = ((/* implicit */long long int) var_6);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34453))))), (var_6)));
                            arr_16 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18191006382126392182ULL)) ? (255737691583159434ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 0LL))))));
                            arr_17 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_11 [i_3 - 1] [i_1] [i_1] [i_1 + 3]))) ? (((/* implicit */int) min((arr_1 [i_1 + 2]), (((/* implicit */unsigned short) (_Bool)1))))) : ((-(((/* implicit */int) var_4))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
