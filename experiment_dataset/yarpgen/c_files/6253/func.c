/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6253
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 10208505543856330299ULL)))) : (max((((/* implicit */unsigned long long int) var_8)), (var_3)))))))));
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (var_2)))))) ? (((((/* implicit */_Bool) var_8)) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) max((var_2), (((/* implicit */int) var_5))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (var_1))) <= (((((/* implicit */_Bool) (unsigned short)35208)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            var_12 = ((/* implicit */long long int) ((1024275355687860824ULL) >> (((/* implicit */int) max(((signed char)(-127 - 1)), (arr_0 [i_0] [i_0]))))));
            var_13 *= ((/* implicit */unsigned short) (+((((+(((/* implicit */int) var_9)))) ^ (((/* implicit */int) max(((unsigned short)8214), ((unsigned short)8206))))))));
            var_14 = (unsigned short)57318;
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? ((+(((((/* implicit */_Bool) (unsigned short)8214)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), ((unsigned short)57295)))))));
        }
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) -418801248697276859LL))));
        arr_5 [i_0] = ((/* implicit */_Bool) (signed char)47);
        arr_6 [i_0] = ((unsigned short) max((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) var_6))))));
    }
    var_17 = ((/* implicit */_Bool) var_0);
}
