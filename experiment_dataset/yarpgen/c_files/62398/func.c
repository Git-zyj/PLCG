/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62398
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_6))));
    var_15 = max((((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) (short)-8226)) : (((/* implicit */int) (short)12824)))), (((/* implicit */int) (short)8200)));
    var_16 = ((/* implicit */unsigned short) max((min((((16897806683625748282ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8200))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_12)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned short)52352);
                    var_17 -= ((/* implicit */_Bool) (unsigned short)59344);
                }
            } 
        } 
    } 
}
