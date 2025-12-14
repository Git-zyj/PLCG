/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63607
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
    var_13 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 602401341U))))) & ((-(((/* implicit */int) (unsigned short)56))))));
        arr_3 [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned int) var_3)), (12U))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            var_15 |= ((/* implicit */signed char) arr_1 [7] [i_1]);
            var_16 += (~(((/* implicit */int) (signed char)80)));
            var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)86))));
        }
        for (int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_18 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-82)) ? (((long long int) 2857806470519544585ULL)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24305))) <= (15588937603190007030ULL))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_2])) + (((/* implicit */int) (_Bool)1)))))));
            var_19 = ((/* implicit */long long int) max((((((/* implicit */int) (unsigned short)13324)) * (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_2]))) | ((-(((/* implicit */int) (_Bool)0))))))));
            var_20 = min((((/* implicit */long long int) ((arr_7 [i_0] [i_2]) <= (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (arr_7 [(signed char)11] [i_2]));
            var_21 = ((/* implicit */unsigned short) ((unsigned long long int) (~(max((((/* implicit */int) (_Bool)1)), (var_1))))));
        }
        var_22 = ((/* implicit */unsigned int) max((((/* implicit */int) ((max((arr_0 [i_0] [i_0]), (5U))) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41245)))))), ((((((~(((/* implicit */int) var_2)))) + (2147483647))) << (((((/* implicit */_Bool) 2243556903U)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [10ULL])) : (((/* implicit */int) (signed char)-83))))))));
    }
    var_23 = ((/* implicit */int) (~(2857806470519544574ULL)));
    var_24 = ((/* implicit */unsigned int) max((min((15588937603190007012ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))))))), (((/* implicit */unsigned long long int) var_3))));
}
