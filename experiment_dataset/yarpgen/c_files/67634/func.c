/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67634
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((((((/* implicit */_Bool) arr_0 [i_0])) ? (1754417875225587228ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2]))))) * (((((/* implicit */_Bool) (short)-18999)) ? (var_12) : (min((1754417875225587236ULL), (var_12))))));
                arr_5 [6ULL] [0ULL] [6ULL] &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_0 + 1])) == (16692326198483964372ULL)))) : ((~(arr_2 [i_0 + 2])))));
            }
        } 
    } 
    var_14 -= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (short)19002)), (min((var_2), (var_6))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (-1462189612) : (((/* implicit */int) var_1))))) ? (max((8312261044365950263ULL), (((/* implicit */unsigned long long int) (unsigned char)199)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (1028257149))))))));
}
