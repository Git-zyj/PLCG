/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89433
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) arr_6 [i_2] [i_1] [i_2] [i_2]);
                    var_19 = max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)43)));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2047))) : (4193015082U)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((var_4) ? (min((var_3), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63494))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    var_21 = ((/* implicit */unsigned short) (signed char)115);
}
