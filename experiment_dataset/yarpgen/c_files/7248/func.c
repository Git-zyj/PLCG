/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7248
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned char) (+((((_Bool)1) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (_Bool)1))))));
            var_13 = arr_6 [i_1 - 1] [i_1];
        }
        arr_8 [i_0] = ((/* implicit */unsigned char) arr_4 [i_0]);
    }
    for (int i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 2; i_3 < 18; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    {
                        arr_19 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) - ((-2147483647 - 1))))) ? (((/* implicit */int) arr_15 [i_2 + 1] [i_3 - 2] [i_3 - 2])) : (((arr_15 [i_2 - 1] [i_3 - 2] [i_3 - 1]) ? (((/* implicit */int) arr_15 [i_2 + 1] [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_15 [i_2 - 2] [i_3 - 1] [i_3 + 1]))))));
                        arr_20 [i_5] [i_4] [i_3] [i_2] = (_Bool)1;
                    }
                } 
            } 
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_13 [i_2] [i_2 + 1] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_13 [i_2 - 1] [i_3] [i_3 + 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))))))) : (arr_13 [i_2 + 1] [i_2] [i_2 + 1])));
            arr_21 [i_2 - 1] [i_2 - 1] |= ((/* implicit */signed char) (~(((/* implicit */int) arr_15 [i_2] [i_3 + 1] [i_2]))));
        }
        arr_22 [i_2] = ((/* implicit */unsigned short) arr_12 [i_2] [i_2]);
    }
    var_15 = (~((-(((var_1) >> (0))))));
    var_16 = ((/* implicit */unsigned char) (+((~((((_Bool)1) ? (((/* implicit */int) (unsigned short)43422)) : (((/* implicit */int) (unsigned char)255))))))));
}
