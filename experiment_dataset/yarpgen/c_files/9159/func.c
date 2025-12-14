/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9159
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (arr_2 [i_0])));
        var_15 *= ((/* implicit */short) (+((~(((/* implicit */int) (short)-22974))))));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) (_Bool)1);
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((((/* implicit */int) (short)22952)) >> (((((/* implicit */int) arr_1 [21U] [i_1])) - (29181))))) & (((/* implicit */int) (short)-22942)))))));
                        arr_11 [i_1] = ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) (_Bool)1)), (arr_7 [i_0] [i_1 + 1] [i_2] [i_1 + 1]))) ^ (max((arr_7 [i_2 - 1] [i_2 - 1] [15LL] [13]), (((/* implicit */long long int) 143285360)))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1 + 1])))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8353)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (arr_4 [i_0])))) ? ((~(((/* implicit */int) (short)-16601)))) : (((/* implicit */int) ((2743487167U) != (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) : (((/* implicit */int) (unsigned short)65535))));
    }
    var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) & (3481929399434854810ULL)))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_6))))))), (((/* implicit */unsigned int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) % (var_0)))))));
    /* LoopSeq 1 */
    for (signed char i_4 = 2; i_4 < 17; i_4 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_14 [i_4 + 3])))))))));
        var_20 = ((/* implicit */unsigned long long int) (+((+(((arr_14 [i_4 - 2]) - (arr_4 [i_4 - 2])))))));
    }
    var_21 -= ((/* implicit */signed char) (+(((((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned long long int) var_0)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (unsigned char i_6 = 2; i_6 < 10; i_6 += 1) 
        {
            {
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(7)))) ? (((/* implicit */int) ((short) var_9))) : (-1762092766)))))))));
                var_23 -= ((/* implicit */signed char) min((((/* implicit */long long int) ((435924608U) / (65536U)))), ((+((-(var_5)))))));
            }
        } 
    } 
}
