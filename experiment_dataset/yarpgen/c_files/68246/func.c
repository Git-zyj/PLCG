/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68246
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
    var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)111))));
    var_21 &= ((/* implicit */short) max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)111)) ? (var_2) : (var_2))), (((/* implicit */int) min(((unsigned char)243), ((unsigned char)100))))))), (var_6)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_22 -= (signed char)63;
                arr_6 [18LL] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) var_3)) : (var_16)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)111)) ? (var_12) : (((/* implicit */int) (unsigned char)130))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_1])), (17890127014682663173ULL))))), (((/* implicit */unsigned long long int) var_17))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) (short)18501);
    /* LoopSeq 1 */
    for (int i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_8 [i_2 + 1]), (183286902U)))) ? (((((/* implicit */_Bool) arr_8 [i_2 + 1])) ? (arr_8 [i_2 + 1]) : (arr_8 [i_2 - 1]))) : (((arr_8 [i_2 + 1]) >> (((arr_8 [i_2 - 1]) - (2602185365U)))))));
        var_25 *= ((/* implicit */signed char) ((short) arr_7 [16LL]));
    }
}
