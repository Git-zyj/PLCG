/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67259
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] = (~((~(((/* implicit */int) var_6)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_11 -= ((/* implicit */unsigned long long int) 1978019911);
            arr_8 [(short)2] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) ((2083109442U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-17763)))))), (((((/* implicit */int) arr_0 [i_0] [i_1])) / (((/* implicit */int) arr_0 [i_0] [i_1]))))));
        }
        arr_9 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (818376471)))) : (((long long int) var_2)))) > (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_0])) | (((/* implicit */int) arr_3 [i_0])))))));
    }
    for (short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */short) (+(var_4)));
        arr_13 [1ULL] = ((/* implicit */int) arr_2 [i_2]);
    }
    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        arr_17 [i_3] [i_3] = ((/* implicit */long long int) min((((((/* implicit */_Bool) -1303716259)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_3]))) : (((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_3]))))))), (((/* implicit */unsigned long long int) max((853175081775969924LL), (((/* implicit */long long int) (unsigned char)148)))))));
        arr_18 [(short)19] = ((/* implicit */short) arr_16 [i_3]);
    }
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) -1303716249);
        arr_22 [i_4] = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) -853175081775969950LL)))) ? (-253648948) : (((/* implicit */int) var_9)))), (((((/* implicit */int) arr_19 [i_4] [i_4])) | (((((/* implicit */_Bool) arr_19 [i_4] [i_4])) ? (var_10) : (((/* implicit */int) arr_20 [i_4]))))))));
        arr_23 [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) min((var_5), (((/* implicit */long long int) (unsigned short)2752)))));
    }
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned char)126)))))) ? ((~(1561882664855254305LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52)))));
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)167)) ? (-2147483641) : (((/* implicit */int) (unsigned char)186)))))))));
}
