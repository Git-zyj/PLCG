/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93931
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) var_8);
                    var_15 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */unsigned long long int) ((var_5) / (arr_10 [i_0] [i_1] [i_2] [i_0])))) : (((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned long long int) var_6))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(((/* implicit */int) ((unsigned char) 3344156187U))))))));
    /* LoopNest 2 */
    for (short i_3 = 4; i_3 < 24; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        {
                            arr_23 [21ULL] [i_4] [i_4] [i_6] = ((/* implicit */_Bool) (-(3447044316961466062LL)));
                            var_17 = ((/* implicit */_Bool) var_0);
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) arr_13 [i_5])))))))) ? (var_12) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -851070103)) || (((/* implicit */_Bool) 1957813936893630317LL))))), (var_2))))))));
                            arr_24 [i_3] [i_4] [(short)11] [i_3] = arr_21 [i_4];
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) var_4))), ((((~(var_2))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [(_Bool)1])), (arr_17 [i_3] [i_3]))))))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) var_3);
            }
        } 
    } 
}
