/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56598
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
    var_14 -= (!(((/* implicit */_Bool) (+(var_6)))));
    var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) max((621952569), (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (max((((/* implicit */long long int) var_6)), (-1LL))))), (var_9)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 &= ((((max((((/* implicit */long long int) 621952567)), (14LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-10286)) ? (((/* implicit */int) (unsigned short)64486)) : (((/* implicit */int) (unsigned char)179))))))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && ((_Bool)1)))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_6 [i_1] [1ULL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? ((+((+(-1215711903547954423LL))))) : ((+(var_12)))));
            var_17 = ((/* implicit */long long int) ((unsigned long long int) (-(arr_5 [i_0] [i_0] [i_1]))));
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(5601898046272475354LL))))));
            arr_7 [i_0] [21U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_5)), (var_12))), (((/* implicit */long long int) arr_4 [i_0] [(signed char)15]))))) ? (((long long int) (+(-278232473)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_19 *= ((/* implicit */_Bool) (~((~(arr_5 [i_0] [4LL] [i_1])))));
        }
    }
    var_20 = ((/* implicit */unsigned long long int) max((((int) (!(((/* implicit */_Bool) var_2))))), ((+(((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) (signed char)-37)) + (57)))))))));
    var_21 = ((/* implicit */unsigned char) ((long long int) (~(max((var_12), (((/* implicit */long long int) 0U)))))));
}
