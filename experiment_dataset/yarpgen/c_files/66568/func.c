/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66568
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) arr_4 [6LL] [i_0]);
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1]))))))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_1 [i_1 - 1] [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) (-(1451677852)))) : ((-(arr_0 [i_1 - 1] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) arr_2 [i_1]))));
                var_15 = ((/* implicit */signed char) ((min((((int) arr_3 [i_0] [i_1])), (arr_4 [i_0] [i_1]))) + (((/* implicit */int) ((max((((/* implicit */unsigned long long int) -430156938)), (arr_0 [i_0] [i_0]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_17 ^= (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56335))) == (min((((/* implicit */long long int) (short)32765)), (5460281540062508230LL)))))));
        var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (min((((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) arr_3 [i_2] [10])) : (((/* implicit */int) arr_9 [(unsigned char)8])))), (((/* implicit */int) arr_9 [i_2])))) : (((/* implicit */int) min((arr_3 [i_2] [18]), (((arr_4 [i_2] [i_2]) != (((/* implicit */int) (signed char)-68)))))))));
        var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((arr_3 [i_2] [i_2]) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) (unsigned short)56375))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2]))) : (arr_7 [i_2])))));
    }
}
