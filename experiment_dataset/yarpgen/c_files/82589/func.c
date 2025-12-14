/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82589
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (short)30754))))))) ? (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 2463398903U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)16)))) + (2147483647))) >> (((757699662U) - (757699640U)))))) : (var_8)));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_12 ^= ((/* implicit */long long int) (short)-30754);
        var_13 &= ((((/* implicit */_Bool) (short)18082)) ? (((unsigned int) arr_3 [i_0])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3676567940620898402LL)) ? (((/* implicit */int) (short)-30755)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-96)) && (((/* implicit */_Bool) (unsigned char)88)))))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-7485740751196570160LL)))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) (short)-30767)))) : (((/* implicit */int) ((_Bool) (-(7485740751196570159LL)))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((long long int) (unsigned char)202))))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) == (min((((/* implicit */int) arr_2 [i_1])), (295208809)))))) : (((arr_0 [i_1]) ? (((/* implicit */int) ((-1) < (((/* implicit */int) (unsigned char)141))))) : ((-(((/* implicit */int) (signed char)-44))))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 22; i_4 += 4) 
                {
                    {
                        var_15 += ((/* implicit */signed char) (+((-((-(((/* implicit */int) arr_5 [i_1]))))))));
                        arr_15 [15] [15] [19U] [i_4] [i_4 + 2] [5LL] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)43))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((arr_0 [i_1]) ? (((/* implicit */int) arr_2 [i_1])) : ((~((+(((/* implicit */int) (short)23085)))))))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((int) ((unsigned short) (signed char)44))))));
    }
    for (int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */int) arr_0 [i_5]);
        var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) <= (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)0)) : (1891140299))))))));
        var_20 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) arr_5 [(unsigned short)6])) : (((/* implicit */int) (unsigned short)8704))))));
    }
    var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) (short)-1))))))) ? (-7485740751196570160LL) : (((/* implicit */long long int) var_8))));
}
