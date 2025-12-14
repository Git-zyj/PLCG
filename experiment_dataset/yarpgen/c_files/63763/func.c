/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63763
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
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_13 *= ((/* implicit */short) ((max((min((((/* implicit */unsigned long long int) arr_1 [(_Bool)1])), (arr_6 [(short)0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1] [(short)9])) || (((/* implicit */_Bool) var_10))))))) | (max(((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1 - 1] [(_Bool)1] [i_2])) : (var_1))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-26078)))))))));
                        var_14 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26080)) ? (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_0] [i_3])) : (1977590888U))))));
                        arr_10 [i_0] [i_1 - 1] [10] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)0)), (max((arr_6 [i_0] [(_Bool)1]), (min((((/* implicit */unsigned long long int) var_4)), (arr_9 [i_3] [i_0] [i_0])))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned char) (+(max((2127951320811983971ULL), (((/* implicit */unsigned long long int) (unsigned short)34660))))));
        arr_11 [(_Bool)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) min((arr_1 [i_0 + 1]), ((_Bool)1))))))) ? (((((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) arr_3 [(unsigned short)3])) : (((/* implicit */int) var_6)))) + (((var_11) % (((/* implicit */int) arr_0 [i_0])))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [(unsigned char)1])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_0])) : (((/* implicit */int) (unsigned char)165))))))));
    }
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((1473201740U) ^ (((/* implicit */unsigned int) var_2))))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_10)))))) ? (((((/* implicit */_Bool) min((var_4), (var_8)))) ? (min((var_7), (((/* implicit */unsigned long long int) (unsigned char)255)))) : (((((/* implicit */_Bool) var_0)) ? (2127951320811983971ULL) : (var_12))))) : (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_10)) : (var_3))), (((((/* implicit */_Bool) 0ULL)) ? (14300333268169441284ULL) : (var_7)))))));
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) (((-(((((/* implicit */int) arr_2 [(short)4] [i_4])) + (((/* implicit */int) (unsigned short)59911)))))) - (((/* implicit */int) (_Bool)1))));
                var_18 = ((/* implicit */unsigned char) ((arr_16 [i_4] [i_4]) * (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_5 [i_5] [i_4])))) / (((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */int) (short)-26067)) : (((/* implicit */int) arr_3 [i_5])))))))));
            }
        } 
    } 
}
