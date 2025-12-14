/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84204
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) arr_2 [i_0]);
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_11 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) / (var_15)))) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) ((unsigned char) var_7)))));
                        var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-43))));
                        arr_12 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4018)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4018))) : (arr_8 [i_1]))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        arr_15 [i_4] [i_4] [i_1] [i_4] = arr_0 [i_0 + 1];
                        arr_16 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60))) >= (4294967292U)))) - ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)11))))));
                        var_18 = ((/* implicit */unsigned long long int) (signed char)119);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        var_19 += ((/* implicit */unsigned int) var_1);
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) 
                        {
                            arr_21 [i_1] [i_1 + 1] [i_1 + 1] [i_2] [(_Bool)1] &= ((arr_3 [i_0 + 1]) * (3089168862U));
                            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))));
                        }
                    }
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */signed char) (((+(var_15))) <= (((/* implicit */unsigned long long int) var_3))));
        arr_23 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (+(10254159528197275772ULL))));
        arr_24 [i_0 + 2] [(unsigned char)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 - 3] [i_0] [i_0 - 2] [i_0])) ? (var_2) : (var_6)));
    }
    var_21 = ((unsigned char) ((((/* implicit */_Bool) 4109401301046546135ULL)) || ((!(((/* implicit */_Bool) 4U))))));
    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8122648533470017005ULL))));
}
