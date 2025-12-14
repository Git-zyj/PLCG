/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89163
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
    var_10 = ((/* implicit */int) ((((/* implicit */int) ((min((var_7), (((/* implicit */unsigned long long int) (unsigned char)53)))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) var_1)))))))) != (((/* implicit */int) (unsigned short)65524))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)31)))) % (((/* implicit */int) (unsigned short)26989))))) ? (((/* implicit */int) (unsigned short)65522)) : (((/* implicit */int) ((unsigned char) ((1383515019) / (((/* implicit */int) (unsigned char)181))))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned short)13666), (((/* implicit */unsigned short) min(((unsigned char)215), ((unsigned char)214))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (unsigned char)42))))) ? (((((/* implicit */_Bool) -8229451507251615065LL)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) arr_1 [0LL])))) : ((~(((/* implicit */int) (unsigned char)84))))))));
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((arr_0 [i_0]), ((unsigned char)61))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (~(min((4723949286278948077LL), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-40)) / (-1))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)16));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned char) (~(13U)))))));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)95)) ? (10) : (((/* implicit */int) (_Bool)1))))) == (((((/* implicit */_Bool) -2088369589)) ? (arr_6 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((-2) + (2147483647))) << (((((/* implicit */int) (unsigned char)165)) - (165))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)2047))) <= (arr_6 [i_1])))))))));
    }
    for (unsigned char i_2 = 2; i_2 < 13; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((unsigned short) ((min((arr_7 [i_2] [i_2]), (((/* implicit */long long int) arr_0 [i_2])))) == (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 - 2]))))))));
        arr_9 [i_2] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */long long int) 2296659482U)) : (arr_6 [i_2 + 1]))));
    }
}
