/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85782
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
    var_19 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_7 [(unsigned short)1] [i_0] [i_1] = ((/* implicit */unsigned short) var_9);
                arr_8 [7LL] [i_1] [i_1] = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((((/* implicit */int) (signed char)127)) - (((/* implicit */int) arr_6 [i_0] [i_0])))))) == (((/* implicit */int) var_15))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (var_11) : (((/* implicit */int) var_7))))))) + (1179031354U)));
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_0])), ((unsigned short)53036))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_0 [i_1])))) ? (((18U) >> (((((/* implicit */int) var_18)) - (66))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (var_3) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)69))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)255)))) : ((~(((/* implicit */int) var_10))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7)))) * ((~(4294967282U))))) : (((/* implicit */unsigned int) (+(var_3))))));
    var_22 = ((/* implicit */unsigned long long int) var_17);
}
