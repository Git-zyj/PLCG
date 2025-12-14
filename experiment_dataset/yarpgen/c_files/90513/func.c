/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90513
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
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((6787053847065180466ULL) - (6787053847065180459ULL))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] = max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))))), (arr_1 [i_0] [i_0]));
        arr_5 [i_0] = (-(((/* implicit */int) (signed char)8)));
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 + 3] [i_1 - 1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 2]))))) : (((arr_1 [i_1 - 2] [i_1 - 1]) + (arr_1 [i_1 - 1] [i_1 + 1])))));
            var_19 = (~(arr_1 [i_0] [i_1]));
            var_20 = ((/* implicit */short) arr_0 [i_0]);
            arr_9 [i_0] [10U] [i_1 + 3] = ((/* implicit */_Bool) min(((short)7061), (((/* implicit */short) (signed char)-55))));
            arr_10 [(_Bool)0] [(_Bool)0] [i_1 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_8))) && (((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) arr_3 [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_13 [i_2] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) (unsigned char)114);
            var_21 = ((/* implicit */unsigned char) arr_11 [i_0]);
        }
    }
}
