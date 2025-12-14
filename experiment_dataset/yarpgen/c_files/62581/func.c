/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62581
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
    var_20 = max((((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (short)-8333)) ? (((/* implicit */int) (short)8319)) : (((/* implicit */int) var_1)))))), ((unsigned short)7783));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((min((((/* implicit */long long int) var_18)), (0LL))) > (-1132684840705178475LL))))))));
    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23623)))))) ? (((((/* implicit */_Bool) (short)32767)) ? (var_8) : (3638207853075711899LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)-1)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_1 - 1] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (unsigned short)23624)) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) arr_4 [i_2] [i_1 + 1])))) * (((/* implicit */int) arr_2 [i_1 - 3])))), ((-(((/* implicit */int) (unsigned short)23637))))));
                    var_23 = ((/* implicit */short) min((((/* implicit */long long int) (unsigned char)134)), (-6031041436304553593LL)));
                    arr_9 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(6005988566554460117LL)))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)-32767)))))) ? (((((/* implicit */_Bool) min((arr_5 [i_0] [(unsigned short)10] [i_2]), (((/* implicit */long long int) (short)-32755))))) ? (arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 2]))))) : (var_8));
                }
            } 
        } 
    } 
}
