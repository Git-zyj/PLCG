/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71384
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((_Bool) var_14)) ? (((((/* implicit */_Bool) ((signed char) 0ULL))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (1467603368375983637ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (min((arr_1 [i_0]), (((/* implicit */int) var_4)))) : (((/* implicit */int) ((var_18) != (3312073226U)))))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-26215)) || (((/* implicit */_Bool) -1497270153)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_3 [16LL] [16LL] [i_1])) : (((/* implicit */int) (signed char)0))))) ? (min((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_1]))) : ((+(var_12)))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_3 [(unsigned char)2] [i_1] [i_1])))), (((((/* implicit */_Bool) max((var_6), (var_6)))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_13)))) : ((~(((/* implicit */int) var_11))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) ((signed char) (short)-9018))) : (((/* implicit */int) var_4))))) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) ((((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_20 &= ((/* implicit */unsigned char) arr_0 [(signed char)15]);
        var_21 = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_9 [i_2])))), ((-(((/* implicit */int) arr_9 [0]))))));
        var_22 = ((/* implicit */signed char) max((var_22), (((signed char) (+(3791946648U))))));
    }
}
