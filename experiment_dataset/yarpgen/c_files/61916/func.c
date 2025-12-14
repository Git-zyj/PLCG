/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61916
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
    var_11 = var_2;
    var_12 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) arr_0 [21LL]))));
        var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (-(1375014014))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (short)-20986))))) ? (((/* implicit */unsigned long long int) 1129236396)) : (((((/* implicit */_Bool) 213179662)) ? (1139434060145458574ULL) : (((/* implicit */unsigned long long int) 134545945U)))))) : (17307310013564093033ULL)));
        var_15 = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1129236396)), (1748097201652815220ULL)));
    }
    for (unsigned char i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */int) 0U);
        var_16 ^= ((/* implicit */int) (!(((((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */short) (unsigned char)97))))) || (((/* implicit */_Bool) arr_1 [i_1 + 1]))))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_1 - 2])))), (((/* implicit */int) ((_Bool) 964697266U)))));
    }
}
