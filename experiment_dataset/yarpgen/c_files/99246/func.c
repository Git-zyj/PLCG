/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99246
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-9769)) ? (((var_10) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)129)))) : (((/* implicit */int) (unsigned short)41399))));
        arr_3 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_12 = ((/* implicit */signed char) ((unsigned char) arr_5 [i_1 + 1] [i_1 + 1]));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) || (((/* implicit */_Bool) arr_6 [i_1 + 1]))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (unsigned short)53789))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 3; i_3 < 14; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        arr_13 [i_4] [i_4] [i_3] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)239)) * (((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3] [i_3 - 2]))));
                        arr_14 [i_3] [i_2] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (unsigned char)209)))) * (((/* implicit */int) arr_7 [i_1 + 1]))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)384)) / (((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_3])) : (((((/* implicit */int) arr_6 [(signed char)3])) - (((/* implicit */int) var_5))))));
                    }
                } 
            } 
        }
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)31585)) << ((((~(((/* implicit */int) (unsigned char)216)))) + (217)))));
    }
    var_17 = ((/* implicit */unsigned char) (short)-1);
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_5))))) ? (((/* implicit */int) (short)-23369)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) || (var_5))))))) ? (((((/* implicit */int) var_6)) - ((~(((/* implicit */int) var_2)))))) : (min((((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)248)))), (((/* implicit */int) var_1))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_10))));
    var_20 = ((/* implicit */unsigned char) ((var_0) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) var_0))));
}
