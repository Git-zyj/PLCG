/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63094
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
    var_12 = ((((/* implicit */long long int) ((/* implicit */int) var_9))) | ((-((+(var_0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = (~(((/* implicit */int) arr_0 [i_0])));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)131))));
                    var_13 = ((((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) / (var_0)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_1])));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */short) (_Bool)1);
                                arr_17 [i_2] = ((/* implicit */short) -4099312466276747837LL);
                                arr_18 [i_0] [(short)5] [(short)5] [(unsigned short)14] [i_2] [i_2] [i_4] = ((/* implicit */long long int) 2389052177793085583ULL);
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_1] = ((/* implicit */_Bool) ((var_0) << (((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [14] [i_2] [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2])))) - (214)))));
                }
            } 
        } 
    }
}
