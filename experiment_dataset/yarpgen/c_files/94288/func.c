/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94288
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)142)) <= (((/* implicit */int) var_5)))))))) <= (((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
    var_11 = ((/* implicit */unsigned char) max(((+(var_0))), (((/* implicit */long long int) var_4))));
    var_12 = ((((/* implicit */int) var_3)) << (((((((/* implicit */_Bool) var_3)) ? (var_4) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_1))))) - (2960548835U))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) ((long long int) var_1));
        var_14 = ((/* implicit */unsigned int) (unsigned char)243);
        var_15 = ((/* implicit */unsigned int) ((int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)255)))) << ((((+(2969570584U))) - (2969570578U))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_16 += ((/* implicit */unsigned char) ((((/* implicit */int) ((var_8) && (((/* implicit */_Bool) arr_4 [i_1]))))) << (((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_9)))) - (119)))));
        var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((var_0), (((/* implicit */long long int) (unsigned char)13)))) / (((/* implicit */long long int) -946493792))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) var_5))))) == (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) : (var_4)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) max((10047967030529668753ULL), (1860486702766933016ULL)));
                    var_19 = ((/* implicit */_Bool) var_7);
                    var_20 = (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_1]))) * (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_2] [i_2]))))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 298465983)))))));
                        arr_13 [i_3] [i_3] [i_3] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) var_9);
                    }
                }
            } 
        } 
    }
    var_22 = min((var_1), (((/* implicit */unsigned int) var_3)));
}
