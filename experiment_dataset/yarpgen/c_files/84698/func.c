/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84698
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_12 |= ((/* implicit */short) ((((/* implicit */int) (unsigned short)1536)) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) (unsigned short)45214)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (unsigned short)62234)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (short)5)))));
        arr_5 [i_0] = ((/* implicit */short) ((806861400) - (((/* implicit */int) (short)(-32767 - 1)))));
        arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)123)), (((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (34359738352ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (2749342577U)));
    }
    for (signed char i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        var_13 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned char)0)))));
        var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) arr_8 [i_1 + 1] [i_1])) / (var_2)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)28044)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (unsigned char)255))))) : (arr_7 [i_1] [(unsigned short)6]))) >> (((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 - 2])) ? (((/* implicit */int) ((signed char) (unsigned char)21))) : (var_9)))));
    }
    for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)247)) || (((/* implicit */_Bool) ((((/* implicit */int) (short)-18530)) - (((/* implicit */int) (short)-6919))))))))));
        arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) > (((/* implicit */int) var_6)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (signed char)-28))))) == (max((((/* implicit */long long int) var_11)), (arr_3 [i_2]))))))) : (((-1605946839267172477LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-39)))))));
    }
    var_16 = ((/* implicit */unsigned int) ((unsigned short) 4294967295U));
    var_17 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 1U)) + (5419155765133875354ULL))) - (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            {
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */long long int) 4U)) ^ (-2292263795286223813LL))))));
                var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 10698705411996014999ULL)) ? (17547733716605243938ULL) : (((/* implicit */unsigned long long int) 0)))))), (((14444238567007475769ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123)))))));
                var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7)) ? (1826772338) : (((/* implicit */int) (short)5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((unsigned int) 13027588308575676262ULL))));
                var_21 |= ((/* implicit */unsigned char) var_6);
                var_22 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_15 [i_3])) < (((((/* implicit */unsigned long long int) arr_15 [i_3])) * (18446744039349813284ULL)))));
            }
        } 
    } 
    var_23 &= ((/* implicit */unsigned char) ((unsigned short) var_0));
}
