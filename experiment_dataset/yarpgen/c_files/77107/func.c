/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77107
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_10 [i_2] [i_1 + 1] [i_1 + 1] [i_1] [(short)8] &= ((/* implicit */long long int) var_4);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            var_13 = ((/* implicit */unsigned int) (~(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_2)) - (45)))))));
                            arr_13 [i_4] [i_3] [i_1] [i_1 + 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 9055217101695583801LL)) ^ (17783716678224084255ULL)));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] [i_1] = ((/* implicit */unsigned char) ((arr_6 [0ULL] [i_1 + 1]) ^ (arr_6 [i_1] [i_1 + 1])));
                        }
                        var_14 *= ((/* implicit */_Bool) (-(((/* implicit */int) max((var_7), (arr_11 [i_1 + 2] [i_0]))))));
                    }
                    var_15 = ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_2 [7U] [i_0]))))));
    }
    for (unsigned long long int i_5 = 3; i_5 < 22; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */short) ((((unsigned long long int) ((short) var_4))) + (((/* implicit */unsigned long long int) var_9))));
        var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) (((-(((/* implicit */int) var_4)))) != ((+(((/* implicit */int) (_Bool)1)))))))));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        arr_22 [i_6] = ((/* implicit */unsigned char) (~((-(arr_21 [i_6])))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)26345)) ? (var_11) : (((/* implicit */unsigned long long int) (~(-9055217101695583801LL))))));
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_8)) + (-1271290111)))));
    }
    for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        arr_27 [i_7] &= ((/* implicit */unsigned char) min((arr_15 [i_7]), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_19 = ((/* implicit */signed char) -1271290111);
        var_20 = max(((short)-20101), ((short)-25393));
        var_21 = ((/* implicit */signed char) (((((((~(((/* implicit */int) var_2)))) + (2147483647))) << (((arr_24 [(unsigned short)10] [i_7]) - (7860604544319642371LL))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(-9055217101695583801LL)))) == (((((/* implicit */_Bool) 9055217101695583801LL)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_21 [i_7]))))))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_11))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_2)))))))) ^ (((/* implicit */int) ((_Bool) ((short) (short)20116))))));
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (-3245990123266494421LL)))) ? (((/* implicit */int) (short)-4286)) : (((/* implicit */int) max(((unsigned short)38234), (((/* implicit */unsigned short) var_6)))))))) ? ((+(((/* implicit */int) max(((short)11), (((/* implicit */short) var_1))))))) : (((/* implicit */int) ((((/* implicit */int) var_12)) != (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)7705)) : (((/* implicit */int) var_1)))))))));
}
