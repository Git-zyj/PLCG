/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7890
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                arr_4 [i_0] [i_0] [i_0] = 3834409797U;
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((int) ((((/* implicit */_Bool) (signed char)57)) && (((/* implicit */_Bool) (unsigned char)117))))) & (((/* implicit */int) (unsigned char)117))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) var_8);
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)138))))))) && (((/* implicit */_Bool) min((min((var_10), (((/* implicit */unsigned long long int) (short)-29729)))), (((/* implicit */unsigned long long int) ((2331548747U) == (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))));
}
