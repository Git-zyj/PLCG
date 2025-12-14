/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55319
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
    var_10 = ((/* implicit */signed char) (((~(var_0))) & (((/* implicit */int) var_3))));
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) (~(var_1)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_2] &= ((((/* implicit */_Bool) var_9)) ? (var_4) : (var_4));
                                arr_13 [(short)0] [(signed char)19] [i_2] [(signed char)19] [(_Bool)1] [i_4] = ((/* implicit */long long int) ((var_4) ^ (var_4)));
                            }
                        } 
                    } 
                    arr_14 [(unsigned short)14] [i_0] = ((/* implicit */int) (~(13ULL)));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */int) var_2))));
                        var_13 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (unsigned char)68))))) - (((7431919102219937668ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))))));
                    }
                    for (signed char i_6 = 2; i_6 < 22; i_6 += 3) 
                    {
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 11014824971489613948ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_1)))) : (var_5)));
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (var_6))))));
                    }
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_8))));
    }
}
