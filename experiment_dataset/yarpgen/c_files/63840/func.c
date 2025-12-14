/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63840
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-30590)), (arr_8 [i_0 - 1] [i_0 - 1] [i_1 - 2])))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 2])))))));
                    var_15 = ((/* implicit */signed char) (+(min((arr_5 [i_1 - 2] [i_1]), (arr_5 [i_1 + 1] [i_1])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-2)), (arr_13 [(signed char)2] [(signed char)2])))) ? (((/* implicit */int) arr_3 [i_3] [(unsigned short)15])) : (((/* implicit */int) arr_3 [(unsigned short)10] [i_4]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_12 [1ULL] [5ULL] [i_5]))) ? (max((((/* implicit */unsigned int) arr_1 [i_3] [i_3])), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)2207))))))))))));
                    arr_17 [i_5] [i_4] [i_3] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [5U] [i_4])) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-4))))) : (((7246162658734210776LL) % (((/* implicit */long long int) ((/* implicit */int) (short)-2207)))))))) : (var_7));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        for (unsigned char i_7 = 2; i_7 < 20; i_7 += 2) 
        {
            for (long long int i_8 = 1; i_8 < 21; i_8 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_6 - 1] [i_7] [i_8 - 1])) ? (((/* implicit */int) arr_18 [i_8 + 1])) : (((/* implicit */int) max((((/* implicit */short) (signed char)-16)), ((short)2207))))));
                    arr_24 [i_6] [(_Bool)0] [i_8] [11LL] = ((/* implicit */unsigned short) max((1U), (((/* implicit */unsigned int) ((_Bool) var_11)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) (unsigned short)15627);
}
