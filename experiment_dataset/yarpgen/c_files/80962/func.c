/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80962
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (short)126);
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)22731)) / (1040187392)));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) (short)-22731);
        var_15 = ((/* implicit */unsigned char) (+((+((+(((/* implicit */int) var_4))))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_7), (((/* implicit */signed char) (_Bool)1))))) % ((-(-734855222)))));
        var_17 = ((/* implicit */int) max((var_17), ((+(((((/* implicit */int) var_3)) - (((/* implicit */int) var_4))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        var_18 = ((/* implicit */int) (((+(((-276516470059265149LL) / (((/* implicit */long long int) var_10)))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (var_12))))))));
        var_19 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-22731), ((short)-22731)))) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_11))) : (((/* implicit */long long int) ((var_10) ^ (((/* implicit */int) (short)-18012))))))))));
        var_20 -= ((/* implicit */short) (+(((/* implicit */int) (short)-22719))));
        arr_8 [i_2] [i_2] = (~(((((((/* implicit */int) (short)-20641)) + (2147483647))) << (((((/* implicit */int) (short)20641)) - (20641))))));
    }
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((1121501860331520ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20656)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152))) / ((-(951654839U))))));
    var_22 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) (short)-126))))), ((-(((int) -5897483886497378868LL))))));
    var_23 = ((/* implicit */int) (short)22729);
    var_24 = ((/* implicit */short) max((((/* implicit */long long int) ((((_Bool) (short)22731)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)177)) < (((/* implicit */int) (short)19069))))) : ((-(((/* implicit */int) (unsigned char)64))))))), (((((((/* implicit */_Bool) 3343312457U)) ? (7635443741985641996LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) | (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))));
}
