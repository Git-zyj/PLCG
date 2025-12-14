/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76884
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((377757045), (377757034)))))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (var_11)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-21936)) : (((/* implicit */int) (unsigned short)31744)))) : (((/* implicit */int) var_12))))))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_2) : ((~((+(var_2)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_0 - 1])), ((~(((/* implicit */int) (short)21935)))))) : (((/* implicit */int) max((min(((short)-1), ((short)21907))), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)511))))))))));
                    arr_9 [i_0] [(unsigned char)18] |= var_12;
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_18), ((+((-(var_4)))))));
}
