/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87842
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
    var_16 = ((/* implicit */signed char) ((unsigned int) (unsigned short)65535));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (2482948000U))))));
    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)26465)), (17339303524761318319ULL)))) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-26465)) : (((/* implicit */int) (unsigned short)3840))))))) ? (((/* implicit */long long int) max((min((var_8), (var_5))), (((/* implicit */unsigned int) max(((unsigned short)52664), ((unsigned short)16064))))))) : (((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-26437)), ((unsigned short)65513))))) : (((long long int) (unsigned short)65513))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 1] [i_1] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((unsigned short) (unsigned short)16037))), (max((var_1), (((/* implicit */long long int) (unsigned short)51958)))))), (max((((long long int) 9223372036854775807LL)), (min((-5239798830980431954LL), (((/* implicit */long long int) arr_3 [i_0] [i_1]))))))));
                var_19 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) (short)-26476)) ? (((/* implicit */int) (unsigned short)13578)) : (((/* implicit */int) (unsigned short)26)))), (((/* implicit */int) (unsigned short)49498))));
                var_20 = ((/* implicit */int) ((long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)186)), (var_10)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13578))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((long long int) max((2218280149U), (2218280149U)))))));
}
