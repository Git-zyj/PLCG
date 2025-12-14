/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80475
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_1 [(signed char)4])))), (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) min((max((4294967295U), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) arr_3 [(unsigned char)1] [i_1 - 1]))))))))));
                arr_6 [i_0] [(unsigned char)4] [i_1 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-22586))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 3; i_2 < 14; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                arr_11 [i_2 - 1] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])))))));
                arr_12 [i_3] = ((/* implicit */unsigned char) arr_9 [i_2] [i_2] [i_2]);
                arr_13 [i_3] [i_2 - 1] [i_2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? (max((((((/* implicit */unsigned long long int) -8209399800379357024LL)) / (arr_7 [i_2] [i_2]))), (((/* implicit */unsigned long long int) ((short) arr_9 [i_3] [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_3]))))))))));
                var_18 = ((/* implicit */unsigned short) arr_8 [i_2] [i_3]);
            }
        } 
    } 
}
