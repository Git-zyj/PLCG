/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64400
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_13 = var_12;
        var_14 = ((16536634451073962002ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)126)) + (((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) var_7)) : (var_10))) : ((-(-920652152533635308LL)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 8; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 2]))) : (arr_1 [i_1 - 2])));
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) var_2);
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            arr_10 [i_3] [i_2] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-15))));
            var_15 ^= ((/* implicit */unsigned short) 1785905460);
            arr_11 [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) (signed char)-39)))))), (min((((/* implicit */unsigned long long int) (unsigned char)62)), (8658654068736ULL)))));
            var_16 = ((((/* implicit */_Bool) (signed char)60)) ? (344071956) : (((/* implicit */int) (unsigned char)62)));
            var_17 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) >> (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)49971)) && (((/* implicit */_Bool) arr_7 [i_2] [i_2]))))))))));
        }
        arr_12 [5] [i_2] = ((/* implicit */short) (-(((/* implicit */int) (signed char)13))));
        var_18 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) && (((/* implicit */_Bool) (signed char)-50))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((69876434029670054ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))))))))));
    }
    var_19 ^= ((/* implicit */unsigned char) (~(((unsigned long long int) 2147483647))));
    var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) * (((/* implicit */int) (signed char)36)))) / (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)46))))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) 1480539575)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) (unsigned char)200))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((var_7) - (((/* implicit */int) (signed char)19))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)39))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (8297339940292827631ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (((((/* implicit */long long int) var_5)) + (var_10))))))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)127)) ? (7341570436317384935LL) : (920652152533635286LL)));
}
