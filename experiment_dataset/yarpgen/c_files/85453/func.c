/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85453
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) -1086148697090123324LL);
        var_20 = ((/* implicit */int) var_15);
        var_21 &= ((/* implicit */unsigned int) var_5);
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((((-5054259512615519675LL) != (((/* implicit */long long int) ((/* implicit */int) var_8))))) ? (((/* implicit */long long int) 1496502526U)) : (min((9007199254740991LL), (((/* implicit */long long int) (unsigned char)255)))))) % (max((9007199254740991LL), (((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255))))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_2 [i_1])) - (((((/* implicit */_Bool) min(((short)-1), (((/* implicit */short) (signed char)-102))))) ? (1186575580U) : (((/* implicit */unsigned int) arr_1 [i_1]))))));
        arr_6 [i_1] &= ((/* implicit */unsigned int) var_10);
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) : (((((/* implicit */_Bool) 4U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))) : (1411987627687935358ULL)))));
        var_23 += ((/* implicit */short) ((((/* implicit */_Bool) 801338555)) ? (2080374784U) : (1186575580U)));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_0 [i_2])))) && (((/* implicit */_Bool) arr_1 [i_2]))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)31)) * (((/* implicit */int) (_Bool)0))));
    }
    var_25 |= ((/* implicit */_Bool) 3415653946U);
    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (var_15))))));
}
