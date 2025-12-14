/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60248
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
    var_18 = ((/* implicit */signed char) ((long long int) ((((((/* implicit */int) (unsigned char)19)) & (((/* implicit */int) var_13)))) - (((((/* implicit */int) var_16)) | (((/* implicit */int) (unsigned char)182)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) arr_1 [i_0 + 1]);
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((1325167458) / (((/* implicit */int) (unsigned char)19))))) ? (min(((-(1239003620U))), (((/* implicit */unsigned int) (unsigned char)19)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28954))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) arr_4 [i_1]);
        var_22 -= ((/* implicit */short) min((((/* implicit */long long int) 2040003269)), (min((((/* implicit */long long int) ((-2132924078) < (-2040003270)))), (-4389699450987106140LL)))));
        arr_7 [i_1] [(short)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)115)) / (((((/* implicit */int) arr_2 [i_1])) + (-1950155885)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((min((var_12), (((/* implicit */unsigned short) (_Bool)0)))), (((/* implicit */unsigned short) arr_0 [i_1 + 1])))))) : ((((!(((/* implicit */_Bool) var_11)))) ? ((+(1603020903U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_1])))))))));
    }
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2]))) : (2691946409U)))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned char) (-(var_5)))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 4; i_3 < 13; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_23 |= var_15;
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        arr_20 [i_2] [i_2] [i_2] [(unsigned char)13] [(unsigned char)2] [3LL] = ((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)236))))))) > (((min((((/* implicit */unsigned long long int) (unsigned char)72)), (var_1))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))))));
                        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) -5750878000818955177LL)) ? (2126321302761738267ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) 3884816611U)))))));
                        var_25 = ((/* implicit */signed char) ((5062570546260264649ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_14 [i_3 - 2] [i_3 - 4]))))))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (-(-2612761772794686647LL))))));
    }
    var_27 ^= ((/* implicit */unsigned long long int) var_8);
}
