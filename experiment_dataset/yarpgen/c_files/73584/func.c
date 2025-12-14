/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73584
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
    var_17 -= ((/* implicit */_Bool) (-(((/* implicit */int) var_15))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [(signed char)8] [i_2] [i_2] [i_0 + 1] = (_Bool)1;
                    var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_0 [i_2])), (max((((/* implicit */int) arr_3 [i_0] [(signed char)3])), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))))));
                    arr_9 [i_0] [i_2] [(signed char)2] [i_1] = ((/* implicit */unsigned char) (short)-25260);
                    arr_10 [i_2] [i_1 + 1] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)29))))) ? (((arr_5 [i_2] [i_1] [i_2] [i_2]) - (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (1121458973U))))));
                    arr_11 [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned short) ((min(((_Bool)1), ((_Bool)0))) ? ((-(((/* implicit */int) arr_7 [i_2 + 1] [i_2] [i_2 + 1])))) : ((+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_3 [i_2] [i_1]))))))));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)26120))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (7296597791155737926ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (3849273161U))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (short)26219)))))))));
}
