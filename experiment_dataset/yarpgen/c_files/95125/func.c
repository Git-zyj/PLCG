/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95125
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_1] [i_1] = ((/* implicit */signed char) var_13);
                        arr_11 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (_Bool)0))) * (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_1 - 1])), (var_5))))));
                        arr_12 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_1] [i_3 - 1] [i_2 - 3] [i_1 - 1] [i_1 - 1] [i_1])) / ((+(((/* implicit */int) arr_8 [i_1] [i_3 + 1] [i_1] [i_1] [i_1 - 1] [i_1]))))));
                    }
                    for (signed char i_4 = 1; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        var_15 = ((((/* implicit */int) ((((/* implicit */_Bool) ((var_10) << (((((((/* implicit */int) (signed char)-123)) + (128))) - (5)))))) || (var_13)))) > (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)45843)))))))));
                        arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) var_10))), (max(((unsigned short)19692), ((unsigned short)19708)))))) >= (((/* implicit */int) max((((unsigned short) var_10)), (((/* implicit */unsigned short) arr_13 [i_1] [i_0] [i_1] [i_2] [i_2 - 2] [i_1])))))));
                    }
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((var_1) / (((/* implicit */int) var_5))))))) ? (((/* implicit */int) arr_4 [i_1] [i_2 - 2])) : (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_1 - 1]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) (((((+(var_8))) % (var_8))) << ((+(((/* implicit */int) (((_Bool)1) || ((_Bool)1))))))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_13)) : (min((var_4), (((/* implicit */int) var_5)))))) >> (((/* implicit */int) var_2)))))));
}
