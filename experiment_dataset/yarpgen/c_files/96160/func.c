/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96160
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) (signed char)110)))), (min((arr_0 [i_0]), (arr_0 [i_0])))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) var_12)))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)110)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1])))))) ? (((/* implicit */int) (!(arr_3 [i_1 + 1])))) : (((arr_3 [i_1 + 1]) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) arr_3 [i_1 + 1]))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)116)) << (((((/* implicit */int) ((short) (signed char)-114))) + (128)))))) ? (((/* implicit */unsigned int) (+((~(((/* implicit */int) var_4))))))) : ((((~(var_14))) & (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)114)), (var_5)))))))));
        var_20 = ((/* implicit */unsigned short) ((arr_3 [i_1 + 1]) ? (((/* implicit */int) ((short) arr_3 [i_1 + 1]))) : ((~(((/* implicit */int) arr_2 [i_1 + 1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = ((/* implicit */signed char) (~(((arr_3 [i_2 + 1]) ? (((/* implicit */int) arr_3 [i_2 + 1])) : (((/* implicit */int) arr_3 [i_2 + 1]))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max((((((/* implicit */int) (signed char)-111)) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (arr_8 [i_2] [i_2]))))), ((~(((/* implicit */int) arr_10 [i_2 + 1])))))))));
                    var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)100)) || (((/* implicit */_Bool) (signed char)110)))))));
                    var_23 ^= ((/* implicit */unsigned short) arr_9 [i_2] [i_3] [i_4]);
                    var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) min(((signed char)99), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-100)) != (((/* implicit */int) arr_12 [i_2 + 1] [(unsigned char)11] [(signed char)6] [i_2]))))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) + (((/* implicit */int) (signed char)99))));
        arr_15 [(unsigned char)7] [16ULL] = ((/* implicit */unsigned short) (((-((+(((/* implicit */int) arr_2 [i_2])))))) & (((/* implicit */int) (signed char)-80))));
    }
    var_26 = ((/* implicit */unsigned char) var_14);
}
