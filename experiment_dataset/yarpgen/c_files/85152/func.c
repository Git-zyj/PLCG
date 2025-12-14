/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85152
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
    var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((7165001481888198360LL), (((/* implicit */long long int) (short)-2431))))) ? (min((-7165001481888198386LL), (((/* implicit */long long int) (short)11179)))) : (min((((/* implicit */long long int) (short)-31608)), (7165001481888198377LL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) min(((unsigned short)1322), (((/* implicit */unsigned short) var_11))))))))))));
                    arr_9 [i_0] [i_0 + 2] [i_1] [i_0] = ((/* implicit */unsigned char) var_1);
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1500))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] = min((((((/* implicit */_Bool) ((((/* implicit */int) (short)2431)) + (((/* implicit */int) arr_14 [i_4] [i_0] [4ULL] [i_0] [(unsigned char)3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-1)))) : (((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_3] [i_0]))))))), (((/* implicit */unsigned long long int) var_5)));
                                var_17 = ((/* implicit */signed char) max((((-7165001481888198409LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-25))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)527))))) ? (((((/* implicit */_Bool) (short)-21148)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))) : (-17LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -25LL)) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) (signed char)127)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_5 = 4; i_5 < 16; i_5 += 3) 
                    {
                        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)2430)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))) : (min((var_9), (((/* implicit */unsigned long long int) arr_11 [i_0]))))));
                        var_19 += ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2] [i_5]);
                        var_20 *= (short)-2943;
                    }
                    for (short i_6 = 2; i_6 < 14; i_6 += 3) 
                    {
                        var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_10 [i_2] [i_0 - 1] [i_0 + 1] [i_2]), (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) 13666760607277162947ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38))) : (2914942158U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-81))))))));
                        var_22 = ((/* implicit */short) 1745189419U);
                        var_23 -= ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)116))) : (9007199254732800LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13666760607277162947ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-9007199254732801LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (min((((/* implicit */unsigned int) (short)-20626)), (arr_21 [i_2]))))))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24867))) : (9007199254732777LL))))));
                    }
                }
            } 
        } 
    } 
}
