/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95614
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
    var_19 = ((/* implicit */unsigned short) ((67108863ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30331)))));
    var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_14))));
    var_21 = ((/* implicit */_Bool) var_5);
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)5511)) * (((/* implicit */int) (unsigned short)35205))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] &= ((/* implicit */int) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((min((3377803723U), (((/* implicit */unsigned int) (signed char)-122)))), (((/* implicit */unsigned int) (unsigned short)35205))))), (((max((((/* implicit */unsigned long long int) (signed char)121)), (16704159801323150006ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35206)))))));
        var_23 *= ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) ((3151658740124381228LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)122)))))), (min((((/* implicit */unsigned int) arr_1 [i_0] [(unsigned char)12])), (arr_0 [i_0] [i_0]))))) ^ (((/* implicit */unsigned int) (~(((arr_2 [i_0]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-100)))))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) var_13);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_10 [i_1] = ((/* implicit */_Bool) ((unsigned char) 774967582U));
        arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3377803723U)) ? (((/* implicit */int) (unsigned short)30337)) : (((/* implicit */int) (unsigned short)65535))));
        arr_12 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_7 [i_1])))) ? (((((/* implicit */int) var_13)) / (((/* implicit */int) arr_1 [i_1] [i_1])))) : (((/* implicit */int) arr_1 [10U] [i_1]))));
        arr_13 [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))) * (8599516723588769443ULL)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_18 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9879562169598302662ULL)) ? ((-(((/* implicit */int) arr_15 [i_2] [i_2])))) : (((((/* implicit */_Bool) arr_15 [i_2] [i_2])) ? (((/* implicit */int) arr_15 [i_2] [i_2])) : (((/* implicit */int) arr_14 [i_2]))))));
        var_24 = ((/* implicit */long long int) arr_0 [i_2] [i_2]);
    }
}
