/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77748
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [(signed char)7] [i_2] = ((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) arr_1 [i_0]))), (((long long int) var_0))));
                    var_11 = arr_5 [i_0] [i_1] [(short)11];
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)42716))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))))) : (((/* implicit */int) min((((/* implicit */signed char) var_1)), (((signed char) arr_4 [i_0] [i_0] [i_0])))))));
        var_13 = ((/* implicit */int) ((_Bool) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_0) : (8152942104793888451LL)))));
        var_14 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)35)) >> (((((/* implicit */int) (signed char)42)) - (39))))))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_14 [i_0] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_3 [i_0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_19 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (~(var_10))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [9]))))) ? (((/* implicit */int) ((_Bool) var_8))) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned short)24167))));
                                var_15 = (_Bool)1;
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) (~((((_Bool)1) ? ((+(5635360439608605211LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)-36))))))));
                }
            } 
        } 
    }
    for (unsigned short i_7 = 1; i_7 < 7; i_7 += 4) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)41382)), (max((((/* implicit */int) min((var_2), (((/* implicit */signed char) var_6))))), (var_10))))))));
        arr_23 [i_7] [i_7] = ((/* implicit */signed char) 0U);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))));
        var_19 ^= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_4 [i_7 + 3] [i_7] [i_7 + 2])) ? (55335808U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (+(5635360439608605215LL)))))) >= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (var_3))))) : (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
}
