/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91429
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
    var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */signed char) var_7)), ((signed char)116)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), ((+(((((/* implicit */_Bool) (short)-7682)) ? (var_12) : (3317779574U)))))));
    var_14 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (((((~(((var_2) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0])))))) + (2147483647))) >> (((var_8) - (44542893U))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_2] [i_4] [i_2] [i_1])))))))) ? (max((max((arr_3 [i_2] [i_2]), (((/* implicit */unsigned int) var_9)))), (max((((/* implicit */unsigned int) var_1)), (arr_0 [(signed char)20]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_7 [i_4 - 1] [i_4 - 1] [i_4] [21U] [i_4 + 1] [i_4 - 1]), (arr_7 [i_4 - 1] [i_4] [i_4 + 2] [i_4 + 2] [i_4] [i_4 + 1])))))));
                                var_17 = ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_4 - 2] [22U] [i_1] [i_4] [i_4]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) arr_0 [i_1]);
                    var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [(unsigned short)1] [(_Bool)1] [i_2] [i_1] [i_1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((arr_1 [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-32))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (1286911356U))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_1] [i_1] [i_1] [i_0] [i_0]))))) | (((((/* implicit */int) arr_6 [i_0] [(unsigned short)19] [(unsigned short)19] [7U])) * (((/* implicit */int) var_0)))))))));
                    arr_13 [i_0] [i_2] [i_1] [i_0] |= ((/* implicit */unsigned int) arr_1 [i_0]);
                    var_20 = ((/* implicit */_Bool) min((max((arr_3 [i_1] [i_1 - 2]), (arr_3 [i_1] [i_1 + 1]))), (((unsigned int) arr_7 [i_2] [i_1 + 1] [i_2] [i_2] [i_0] [i_2]))));
                }
            } 
        } 
        arr_14 [i_0] [(signed char)22] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [10U] [(_Bool)1] [18U]);
    }
}
