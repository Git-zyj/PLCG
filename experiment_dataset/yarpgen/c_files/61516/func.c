/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61516
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) 106289950))), ((-(var_5))))))));
    var_20 = ((/* implicit */unsigned short) var_14);
    var_21 = ((/* implicit */unsigned char) var_1);
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (106289950) : (((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_1])) == (((/* implicit */int) ((short) ((unsigned char) (unsigned short)8))))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(-106289951)));
                }
            } 
        } 
    } 
}
