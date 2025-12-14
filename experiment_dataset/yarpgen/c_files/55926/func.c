/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55926
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
    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_17)) : (var_10)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_14)))) ? (var_14) : (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((var_15) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))))));
    var_20 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_21 = (+((-(((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) min((arr_0 [i_1]), (((/* implicit */unsigned char) ((_Bool) (_Bool)1)))));
                    var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_0]) >> (((arr_2 [i_0]) - (7733576063131089325ULL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (var_5))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-113)))))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        arr_11 [i_3] [i_3] &= ((/* implicit */unsigned long long int) ((((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) 65535U)))) ? (((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) var_13)))) : ((+(((/* implicit */int) arr_3 [i_3]))))));
        arr_12 [(unsigned short)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (651746884U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56)))))) ? (((arr_6 [i_3] [i_3] [i_3]) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_3])) : (var_4))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) var_1))))));
        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_3] [i_3] [i_3])), (var_7)))) > (min((((/* implicit */int) arr_8 [i_3] [i_3])), (var_11))))) && ((((!(((/* implicit */_Bool) (unsigned char)56)))) && (((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3]))))));
    }
    for (int i_4 = 1; i_4 < 20; i_4 += 1) 
    {
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_13), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_13 [1U])))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (var_14)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_4 - 1] [i_4 + 1]))))) : ((-(var_15)))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            var_26 = ((/* implicit */signed char) (~(min((((/* implicit */int) (short)-9486)), ((~(((/* implicit */int) var_12))))))));
            arr_19 [i_4] [i_4] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) ((signed char) arr_10 [i_4])))))));
        }
    }
    var_27 &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)80))))));
    var_28 -= ((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_18))))))));
}
