/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91175
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) 9223372036854775808ULL);
                    var_16 &= ((/* implicit */int) ((unsigned long long int) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775809ULL)) || (((/* implicit */_Bool) (unsigned char)7))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) || ((_Bool)1)))))));
                    var_17 = var_9;
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (!((((-(((/* implicit */int) var_15)))) < ((-(var_14)))))));
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) (short)-8)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)15))))));
    /* LoopSeq 2 */
    for (unsigned char i_3 = 4; i_3 < 19; i_3 += 4) 
    {
        arr_10 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-8))) <= (((((var_1) + (9223372036854775807LL))) << (((arr_9 [i_3 - 1] [(_Bool)1]) - (748932975U))))))))) : (arr_9 [i_3] [i_3])));
        var_20 = ((/* implicit */_Bool) -362955601);
    }
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 14; i_4 += 3) 
    {
        arr_13 [i_4] = ((/* implicit */int) arr_9 [i_4] [i_4]);
        var_21 = ((/* implicit */unsigned char) min((var_21), ((unsigned char)128)));
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned short) var_3);
    }
    var_22 = ((/* implicit */int) var_9);
}
