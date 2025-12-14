/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92552
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */signed char) 17750236225166418876ULL);
                    arr_10 [i_0] [i_0] [i_2] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (short)-2108))))))) ? (((/* implicit */long long int) arr_3 [i_0] [11])) : (5872453622129398224LL)));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_11))) | (((/* implicit */int) ((short) arr_7 [i_0] [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_13 = ((/* implicit */int) (-(-5872453622129398224LL)));
        arr_13 [(short)5] = ((/* implicit */signed char) ((unsigned long long int) arr_11 [i_3]));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_5)))))));
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4] [i_4])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_4] [12ULL] [i_4])))));
        var_15 = (-((+(arr_8 [i_4] [i_4]))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (short)32764))));
        var_17 = ((/* implicit */int) var_1);
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 14; i_5 += 2) 
    {
        arr_21 [i_5 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (var_8) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-1)))))));
        arr_22 [i_5] [i_5] &= var_4;
    }
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 5872453622129398220LL))));
    var_19 -= ((/* implicit */unsigned long long int) ((long long int) var_1));
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (short)7777)) << (((-1) + (3)))));
}
