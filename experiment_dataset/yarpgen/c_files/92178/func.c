/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92178
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_10 = (((!(((/* implicit */_Bool) (signed char)50)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)47))))) : (-8224274923131554787LL));
        var_11 = ((/* implicit */signed char) ((unsigned int) 8224274923131554786LL));
    }
    for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        var_12 = min((16373899305636392040ULL), (((/* implicit */unsigned long long int) 4043813298U)));
        arr_5 [i_1] = ((/* implicit */signed char) (_Bool)0);
        var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned char)183)), (min((8224274923131554786LL), (((/* implicit */long long int) (unsigned short)65526))))));
    }
    for (signed char i_2 = 3; i_2 < 11; i_2 += 3) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */int) ((signed char) ((unsigned char) min((((/* implicit */unsigned int) (_Bool)0)), (arr_0 [i_2 - 2])))));
        var_14 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (((unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)32638))))) : (arr_3 [i_2 - 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2047)))))))));
        var_15 = (((_Bool)0) ? (max((arr_7 [i_2]), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_4 [i_2])));
        var_16 = ((/* implicit */unsigned int) ((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_17 = ((/* implicit */signed char) ((unsigned char) ((4043813298U) + ((~(var_9))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-4545098062114009468LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)158)))))))) || (((/* implicit */_Bool) min((max((((/* implicit */long long int) (signed char)112)), (5277315783534774311LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) (unsigned short)32633))))))))));
}
