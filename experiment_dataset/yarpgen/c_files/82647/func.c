/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82647
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
    var_18 = ((/* implicit */unsigned long long int) max((var_16), (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (var_16))), (var_12)))));
    var_19 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((signed char) (unsigned char)59))) : (((/* implicit */int) ((_Bool) 994608662))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19624)) ? (((/* implicit */int) (unsigned short)32205)) : (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? ((-(var_14))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (arr_2 [i_0] [(unsigned short)4] [(unsigned short)1]) : (((/* implicit */int) var_15))))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61211)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))) : (13635417060581291575ULL)))) ? (((/* implicit */int) ((signed char) 1455437034))) : (((/* implicit */int) (_Bool)1)))))));
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) max((((((/* implicit */int) arr_4 [i_0] [i_1])) ^ (((/* implicit */int) arr_4 [i_1] [i_0])))), (((((/* implicit */_Bool) ((unsigned char) (unsigned short)31243))) ? (((((/* implicit */_Bool) arr_0 [6LL])) ? (((/* implicit */int) (short)1048)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) (short)1104)) ? (-651311295) : (((/* implicit */int) var_8))))))));
            }
        } 
    } 
    var_21 ^= var_1;
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) -460032896)) : (((((/* implicit */_Bool) (unsigned char)135)) ? (3477215892722616264LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767)))))));
}
