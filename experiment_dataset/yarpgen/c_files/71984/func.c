/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71984
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((int) (signed char)-115)))));
    var_17 = ((/* implicit */_Bool) 4294967274U);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1 + 1] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1 - 1])) << (((((var_7) & (((/* implicit */int) max((var_9), (((/* implicit */signed char) var_12))))))) - (56)))));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1 - 1])) ? (((/* implicit */int) ((unsigned short) arr_10 [i_0 + 2] [i_1 + 1]))) : ((~(((/* implicit */int) arr_10 [i_0 + 2] [i_1 - 1]))))));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_1 [i_0 - 1])), (var_0)))) ? ((+(((/* implicit */int) var_11)))) : ((~(arr_2 [i_1] [i_1 - 1] [i_2 + 1])))));
                                arr_17 [i_1] [i_1] [(_Bool)1] [i_3] [i_4] |= ((/* implicit */unsigned short) (~(((int) min((arr_8 [i_4] [4ULL] [4ULL] [i_1]), (var_11))))));
                                arr_18 [i_2] [i_1] [i_2] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_3])))) : (max((((/* implicit */unsigned int) arr_15 [i_1] [i_1])), (arr_6 [i_2])))))) && (((/* implicit */_Bool) arr_9 [i_0] [i_1 + 1] [i_2] [i_3] [i_4])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((((((/* implicit */_Bool) ((unsigned short) 6175397050923816814ULL))) || (((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)));
}
