/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72780
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
    var_20 = ((((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (var_17) : (((/* implicit */unsigned long long int) var_10)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (10632855234842138206ULL))))))));
    var_21 = ((((/* implicit */int) (unsigned short)48050)) > (-230472683));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_22 |= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1]))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >= (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_0] [(short)5]))))));
    }
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                {
                    var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3884934526605745463ULL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_2])))))) ? (((((/* implicit */_Bool) var_16)) ? (var_16) : (arr_5 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_8 [(unsigned char)22] [i_1] [(unsigned char)22] [6U]))))))) ? (((((/* implicit */_Bool) 1654121800U)) ? (((/* implicit */int) (unsigned short)29589)) : (((/* implicit */int) (unsigned short)51830)))) : (((((/* implicit */int) (unsigned short)35947)) >> (((((/* implicit */int) (short)31521)) - (31499)))))));
                    arr_11 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((((/* implicit */_Bool) (short)-31531)) ? (((/* implicit */int) (unsigned short)29589)) : (((/* implicit */int) (unsigned short)5548)))) >= (((/* implicit */int) arr_9 [16U] [i_2] [i_3])))))));
                    var_25 *= arr_7 [i_3 - 1] [i_3] [i_3 + 2] [i_3 + 1];
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31523)) ? (1402561507) : (((/* implicit */int) (short)-31523))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10)))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
}
