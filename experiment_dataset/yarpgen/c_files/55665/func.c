/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55665
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((((((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) var_13)))) | ((-(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (short)31327))));
        var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (max((((/* implicit */long long int) (short)-22513)), (-3026101451329860148LL))))), ((~((~(-770860544606180853LL)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) (unsigned short)21717);
        var_20 += ((/* implicit */unsigned short) var_17);
        arr_5 [i_1] [i_1] |= ((/* implicit */unsigned short) max(((-((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (max((((/* implicit */long long int) (~(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (unsigned short)65525)) ? (4209183577583279785LL) : (var_11)))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)52778), ((unsigned short)0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -4209183577583279762LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-22518))))) : (770860544606180853LL)))) ? (((((/* implicit */int) ((((/* implicit */int) (short)32767)) == (((/* implicit */int) (_Bool)1))))) % ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 2693435216512130827LL)) ? (((/* implicit */int) (unsigned short)52773)) : (((/* implicit */int) (unsigned short)0))))))));
    }
    var_22 += var_12;
    var_23 = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)10907))))))));
}
