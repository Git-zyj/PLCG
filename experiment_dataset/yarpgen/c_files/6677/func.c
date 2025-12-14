/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6677
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) ^ (((((((/* implicit */int) (short)-21290)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)40429)) - (40408)))))));
    var_13 = ((/* implicit */long long int) max((var_9), (((/* implicit */unsigned long long int) var_11))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [(unsigned short)0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((arr_3 [i_0] [i_0]), (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_3 [i_1] [i_2]) : (arr_3 [i_0] [i_0])))));
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((unsigned long long int) arr_2 [i_0] [i_1] [i_2])) - (((/* implicit */unsigned long long int) (+(-3267126876169657622LL)))))))));
                    arr_7 [i_0] [(signed char)6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-6)) && (((/* implicit */_Bool) 170472456U))));
                    var_15 = ((/* implicit */_Bool) var_7);
                }
            } 
        } 
    } 
}
