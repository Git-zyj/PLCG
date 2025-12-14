/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86773
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
    var_10 = ((/* implicit */unsigned char) ((short) var_2));
    var_11 = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((var_3) - (2118052464U)))))), (var_3))));
    var_12 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [i_0] [i_0]))) ? (arr_2 [i_1 + 1] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [3U])))))) ? (arr_3 [i_0] [i_0] [i_1 - 1]) : (arr_3 [i_0] [i_0] [i_1]))))));
                var_14 = ((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0]);
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_0 [i_1 + 2]))) < (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) 2147483641)) ? (((/* implicit */int) (unsigned short)2418)) : (((/* implicit */int) (short)32767))))))));
                var_16 = ((/* implicit */unsigned char) ((((arr_2 [i_1 + 2] [i_1 + 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 1]))))) ? ((+(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_1 + 1] [i_1 + 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (min((arr_2 [i_2 + 2] [i_2 + 2]), (((/* implicit */unsigned long long int) var_0))))))))));
        var_18 = ((/* implicit */unsigned int) (+(((unsigned long long int) 3366666998U))));
        var_19 = ((/* implicit */unsigned int) ((short) ((arr_7 [i_2 + 3]) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)3))))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((3366667001U) & (4294967287U))) * (((/* implicit */unsigned int) (+(var_2))))))) ? (((/* implicit */int) ((short) ((928300297U) == (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) arr_4 [i_2] [i_2 + 3] [i_2 - 1]))))));
        var_21 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)15422)) ? (2599815095963426243ULL) : (((/* implicit */unsigned long long int) 12U)))), (((/* implicit */unsigned long long int) (-(((long long int) 26U)))))));
    }
}
