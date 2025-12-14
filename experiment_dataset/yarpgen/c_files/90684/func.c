/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90684
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
    var_14 = var_1;
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max(((+((-(((/* implicit */int) var_9)))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (4176264599U) : (((/* implicit */unsigned int) 2012605888))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) var_8)) == (arr_0 [13U] [(unsigned short)15]))))) < (((1854262297U) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                arr_7 [i_0] = max((((2440705004U) / ((~(1092673347U))))), (min((((/* implicit */unsigned int) (~(623525855)))), (((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48806))))))));
            }
        } 
    } 
    var_16 = ((unsigned int) (~(((((/* implicit */_Bool) 2440705001U)) ? (1941620347U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 11; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                arr_20 [i_6] [12U] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) (-(2440705004U)))))));
                                var_17 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (unsigned short)48875))))));
                            }
                        } 
                    } 
                    var_18 ^= ((1055863102) >> (((var_1) - (4220711368U))));
                    var_19 -= ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)9805)), (((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (arr_12 [i_4] [i_2] [i_2])))) ? (-1184014643) : (((/* implicit */int) (unsigned short)12824))))));
                }
            } 
        } 
        arr_21 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((210687317U) > (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 623525855)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55305))) : (var_13))))))));
        arr_22 [12U] [12U] = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 3282115963U)) ? (694075944) : (((/* implicit */int) var_7))))))) / (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_13)))) + (var_1)))));
        arr_23 [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max(((unsigned short)18210), ((unsigned short)55310)))) ? (((/* implicit */int) (unsigned short)12846)) : (((((/* implicit */int) (unsigned short)52711)) % (((/* implicit */int) (unsigned short)32687)))))), (max((502419113), ((+(-1055863103)))))));
        arr_24 [i_2] [i_2] = min((max((((1024489349U) << (((arr_11 [i_2] [i_2]) - (2191807079U))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (unsigned short)52724))))))), (max((((unsigned int) arr_16 [i_2] [i_2] [i_2] [i_2])), ((~(var_12))))));
    }
    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
    {
        arr_28 [i_7] [3U] = ((/* implicit */unsigned int) var_3);
        var_20 = ((/* implicit */unsigned int) min((var_20), ((+((+(917368346U)))))));
        arr_29 [i_7] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)22105))));
    }
}
