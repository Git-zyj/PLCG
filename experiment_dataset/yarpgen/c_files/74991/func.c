/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74991
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
    var_13 = ((/* implicit */int) var_4);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) (~((~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (arr_2 [i_0] [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) arr_10 [i_1] [i_2] [i_3]);
                            arr_17 [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_1] [i_2] [i_3])) - (((/* implicit */int) (_Bool)1))))) > (max((((/* implicit */unsigned int) arr_12 [i_2] [i_2] [i_3] [i_3] [i_3] [i_3])), (var_12)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                arr_21 [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_1] [i_1] [i_6]))))) ? (((31629719175903444ULL) / (((/* implicit */unsigned long long int) 2920515984U)))) : (((/* implicit */unsigned long long int) 67108864))))));
                var_16 = ((/* implicit */signed char) min((min((31629719175903444ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2))))))))));
                var_17 = (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_11)))))))));
                arr_22 [i_2] [i_2] [i_6] = ((/* implicit */short) max((((((/* implicit */int) arr_14 [5U] [i_2] [i_6])) ^ (((/* implicit */int) arr_14 [20ULL] [(_Bool)1] [i_2])))), (((/* implicit */int) min((arr_14 [4] [i_2] [i_6]), (arr_14 [i_1] [i_2] [i_6]))))));
            }
        }
        var_18 = ((((/* implicit */int) (short)-31179)) / (((/* implicit */int) ((((/* implicit */_Bool) 31629719175903444ULL)) || (((/* implicit */_Bool) -7040423036945436853LL))))));
        var_19 = arr_11 [i_1] [(unsigned char)2] [i_1];
        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((var_3) & (((/* implicit */unsigned long long int) var_1))))))) || (((536870911U) >= (((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_5 [i_1])))))));
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((arr_5 [19U]) != (var_0)))), ((unsigned short)35605)))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)11033)) >> (((var_3) - (1480210072607935401ULL))))))) : (((/* implicit */int) ((short) (-(var_7)))))));
    }
    var_22 = ((/* implicit */unsigned int) -7040423036945436853LL);
    var_23 = ((/* implicit */short) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 499557632)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))), ((+((~(((/* implicit */int) var_8))))))));
}
