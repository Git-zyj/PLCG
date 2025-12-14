/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91425
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
    var_10 = ((/* implicit */long long int) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max((var_1), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))))) ? (((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */int) (unsigned char)201))))) ? (3741814901014362902LL) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_2)))))))) : (max((((/* implicit */long long int) 2772667699U)), (((-7522153230266130356LL) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */signed char) (-(((((var_5) + (9223372036854775807LL))) << (((arr_1 [i_1] [i_0 + 2]) - (1517217627)))))));
                    arr_6 [i_2] [i_2] = ((/* implicit */signed char) 7522153230266130355LL);
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((((-2147483647 - 1)) & (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))))) ? ((~(1522299597U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1])))));
                }
            } 
        } 
    }
}
