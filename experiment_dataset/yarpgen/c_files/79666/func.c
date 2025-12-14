/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79666
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
    var_14 *= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((((/* implicit */_Bool) var_1)) ? (-3086810729264291205LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_9))))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((7057619446307174116ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)72))) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((-3086810729264291205LL), (((/* implicit */long long int) (short)1811)))))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_13))))));
    var_16 = ((/* implicit */short) ((var_9) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))))) : ((((!(var_10))) ? (((int) 3086810729264291204LL)) : (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) 134217664);
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+((((_Bool)1) ? (-3086810729264291205LL) : (((/* implicit */long long int) -828449869)))))))));
        var_18 = ((((/* implicit */_Bool) (short)-1812)) || ((_Bool)0));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) (-(var_4))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-86)), ((short)-26377)))) : (max((arr_2 [i_2]), (((/* implicit */int) arr_6 [i_0])))))) | (((var_7) >> (((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 + 2])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) - (502151132U)))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)113)) ? (1677168110U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1167)))))) || (((arr_5 [i_2 - 1] [i_2 - 4] [i_2]) >= (arr_5 [i_2 - 3] [i_2 + 4] [i_2 + 3])))));
                }
            } 
        } 
    }
}
