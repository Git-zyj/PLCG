/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70816
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
    var_20 *= ((/* implicit */unsigned int) var_8);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) ((unsigned char) var_18))), (((short) arr_0 [i_0] [i_0]))))) >> (((-1564904329965004716LL) + (1564904329965004729LL)))));
        var_21 = ((/* implicit */long long int) ((int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -3236540077794269005LL))))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)15565))))) : ((~(47288072U)))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((5668119369484408220LL), (((/* implicit */long long int) -1014356789)))))))) + (((((/* implicit */int) (!(((/* implicit */_Bool) (short)-5420))))) << (((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)-97)))) - (190)))))));
        var_22 = ((/* implicit */unsigned int) (short)32750);
    }
    for (signed char i_1 = 3; i_1 < 18; i_1 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)(-32767 - 1))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)32750))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1 + 1] [i_1])) != (((/* implicit */int) arr_2 [i_1])))))) : (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_5)))))));
        var_24 = ((((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_6 [i_1 - 2] [i_1])) : (((/* implicit */int) (short)5414)))) * (((/* implicit */int) var_2)));
    }
    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_13))));
    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_4))));
}
