/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93994
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
    var_18 ^= ((/* implicit */unsigned short) (~(max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1780)))))))));
    var_19 &= ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */int) min((arr_1 [10U]), (((/* implicit */unsigned short) (_Bool)1))))) + ((~(((/* implicit */int) ((short) arr_0 [2])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */_Bool) -8720146138633868010LL);
                    var_22 = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))) || (((_Bool) arr_7 [i_1] [i_1 - 3] [i_1] [i_1]))));
                    var_23 = ((/* implicit */_Bool) var_14);
                    var_24 ^= ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_4 [i_0 + 2])), (((arr_2 [i_0 - 2]) >> (((18177022162707807427ULL) - (18177022162707807419ULL)))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned short) (-(((arr_6 [i_0 - 2] [i_0 - 2]) * (((/* implicit */int) var_7))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || ((!(((((/* implicit */_Bool) 8720146138633868009LL)) || ((_Bool)1)))))));
        var_26 = ((/* implicit */unsigned char) 8720146138633868003LL);
        arr_11 [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) arr_10 [i_3])))));
    }
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) (unsigned char)149);
        arr_15 [i_4] = ((/* implicit */unsigned char) ((int) max((((/* implicit */unsigned long long int) arr_14 [i_4])), (5ULL))));
    }
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_18 [i_5] [i_5] = ((/* implicit */_Bool) (((-(((/* implicit */int) ((unsigned char) (_Bool)1))))) * ((+(((/* implicit */int) arr_9 [i_5]))))));
        var_29 = ((/* implicit */int) ((min((max((((/* implicit */unsigned long long int) arr_16 [i_5])), (18446744073709551608ULL))), (((/* implicit */unsigned long long int) ((long long int) arr_9 [i_5]))))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)33)) && (((/* implicit */_Bool) var_6))))))))));
        var_30 = ((/* implicit */signed char) ((((int) arr_12 [i_5])) + (((((/* implicit */int) (unsigned short)17039)) + (((/* implicit */int) arr_9 [i_5]))))));
        var_31 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) -925301879359572067LL)) || (((/* implicit */_Bool) 269721911001744198ULL))))), (min((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_5])) && (((/* implicit */_Bool) arr_12 [i_5]))))), (-1661326146)))));
    }
}
