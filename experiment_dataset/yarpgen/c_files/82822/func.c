/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82822
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) (~(((/* implicit */int) (!(arr_4 [i_1 - 1]))))));
                arr_6 [i_0] [3LL] [(unsigned short)18] = ((/* implicit */short) max((min((((/* implicit */unsigned int) (signed char)42)), (3934061751U))), (((/* implicit */unsigned int) arr_2 [i_1] [i_0]))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((arr_4 [i_1]) ? (var_1) : (var_0))), (var_1)))), ((+(min((var_7), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_14 = ((/* implicit */unsigned short) min((max((arr_8 [i_1 - 1]), (arr_8 [i_1]))), ((~(3934061760U)))));
                    arr_10 [i_1 - 1] [i_1 - 1] [i_2] [i_0] = ((/* implicit */unsigned short) (unsigned char)57);
                    arr_11 [i_0] [i_1] [10U] [10U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(var_2))), (((/* implicit */int) var_10))))) ? (max((max((var_0), (((/* implicit */int) arr_5 [i_2] [i_2])))), (((var_2) * (((/* implicit */int) var_8)))))) : (((/* implicit */int) arr_4 [i_2]))));
                    arr_12 [(short)20] [i_0] [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */int) var_6)), (((var_2) / (var_2))))), (((/* implicit */int) min((((/* implicit */short) arr_1 [i_1 - 1] [i_1 - 1])), (var_10))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) arr_4 [i_1 - 1])), (var_5)))));
                    arr_15 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)64)))) == (((((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) + (((/* implicit */int) arr_0 [i_1 - 1]))))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_12);
    var_17 = ((/* implicit */int) (unsigned char)192);
}
