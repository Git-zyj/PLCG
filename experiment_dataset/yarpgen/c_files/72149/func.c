/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72149
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
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_12)), (max((arr_3 [i_1 + 2] [i_2 - 1]), (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((((-33760261) + (2147483647))) >> (((15892010631643263936ULL) - (15892010631643263925ULL))))))) : (((((/* implicit */int) max((var_11), (var_11)))) >> ((((-(4175730753U))) - (119236514U)))))));
                    arr_10 [i_0 + 1] [i_0] [i_2] = ((/* implicit */unsigned char) arr_8 [8ULL] [i_1]);
                    arr_11 [12] [12] [i_2] = ((/* implicit */unsigned int) arr_7 [18U] [i_1 + 2] [i_0]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)226)))) | (((/* implicit */int) var_6))));
    var_19 = var_9;
    var_20 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (unsigned short)52075))));
}
