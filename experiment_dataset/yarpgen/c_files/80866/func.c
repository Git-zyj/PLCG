/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80866
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = 2ULL;
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_14 [i_2] [i_1] [i_1] [(unsigned short)12] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_1]) + (((/* implicit */unsigned long long int) var_4))))) ? (max((var_1), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
                            arr_15 [i_0] [i_1] [i_2] [1LL] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(arr_11 [i_0] [i_1] [i_2])))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_9)))) >= ((+(((/* implicit */int) ((signed char) arr_3 [i_0] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_13);
    var_15 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (var_11))) < (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_9)))))));
    var_16 = ((/* implicit */signed char) var_4);
}
