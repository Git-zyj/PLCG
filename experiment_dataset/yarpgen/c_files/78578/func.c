/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78578
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
    var_15 = ((/* implicit */long long int) 467651891);
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34761))) : (6573144127019142276LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))))) ? (((/* implicit */long long int) (((-(((/* implicit */int) var_11)))) - (((((/* implicit */int) var_14)) - (((/* implicit */int) var_8))))))) : (max((((long long int) 1837705742060462103LL)), (((/* implicit */long long int) 2942562185U))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (-(max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) max(((unsigned short)13370), (((/* implicit */unsigned short) (short)32415)))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (arr_2 [i_0] [i_1]))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((4013888307U) ^ (3949046961U))) << (((min((arr_2 [i_0] [i_1]), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])))) - (44LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_3 [i_0] [i_1] [i_0])))) : (arr_2 [i_1] [i_1])));
                var_19 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((467651875) / ((-2147483647 - 1))))) * (((((/* implicit */_Bool) 2430465351U)) ? (((/* implicit */long long int) 2147483647)) : (-8470559618450426707LL))))) << (((((770993147062704111LL) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) (short)-12456))))) : ((((_Bool)0) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (1554591811)))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */int) var_5);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((8470559618450426696LL), (-8470559618450426697LL))) ^ (8526299536605193233LL)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((unsigned short) var_3)))))));
}
