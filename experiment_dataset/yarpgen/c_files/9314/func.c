/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9314
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
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) (-((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))))));
        var_12 = ((/* implicit */long long int) var_0);
        arr_2 [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)39))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)113))))))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 1])) ? (((((/* implicit */_Bool) -8266889565010170784LL)) ? (var_7) : (var_7))) : (((/* implicit */long long int) var_8)))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) var_6)))))));
    }
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((1425042769) | (((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) (signed char)20)))) != (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (+(var_4)))) ? (7506367564272902580LL) : (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */signed char) (_Bool)0))))))))));
}
