/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59975
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) min(((short)32242), (var_5)))) ? ((+(((/* implicit */int) (short)28108)))) : (((((/* implicit */_Bool) 4294967291U)) ? (1660638797) : (8388607)))))));
        var_21 = min(((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0] [i_0]))))), (min((arr_3 [i_0]), (arr_3 [i_0]))));
        var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) ((short) max((var_16), (((/* implicit */int) arr_2 [i_0])))))), (((((/* implicit */_Bool) 4294967287U)) ? ((~(0U))) : (((((/* implicit */unsigned int) var_16)) - (arr_0 [i_0] [i_0])))))));
    }
    for (short i_1 = 4; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_23 *= ((/* implicit */unsigned int) var_9);
                        arr_13 [i_1] = ((/* implicit */int) ((((max((arr_6 [i_4]), (((/* implicit */unsigned int) var_7)))) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_14)))))) ? (((((/* implicit */_Bool) ((int) var_13))) ? (max((((/* implicit */unsigned int) var_11)), (arr_0 [i_4] [i_4]))) : (min((arr_0 [i_1] [i_1]), (4294967276U))))) : (min((((/* implicit */unsigned int) min((var_10), (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_13)) ? (arr_3 [i_1 - 4]) : (((/* implicit */unsigned int) var_11))))))));
                        var_24 = ((/* implicit */unsigned int) ((short) (-2147483647 - 1)));
                        var_25 = ((unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_4])), (var_19))))));
                        var_26 -= var_2;
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) max((((((((/* implicit */int) arr_1 [i_1])) > (var_10))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((short) var_2))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_6])))))));
                    var_28 = ((/* implicit */unsigned int) var_17);
                    var_29 = arr_1 [i_5];
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 17; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */int) max((var_30), (arr_7 [i_1])));
                                var_31 = max((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_8]))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_13)) : (4294967295U))))), (((/* implicit */unsigned int) arr_14 [i_1] [i_1] [i_1 + 1])));
                                arr_22 [i_5] [i_5] [i_5] [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1 - 3])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) 147267549)) : (min((arr_4 [i_8] [i_8]), (1792771039U))))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_16 [i_1] [i_1] [i_1])), (var_1))))));
                                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_3 [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (-18346668) : (((/* implicit */int) var_9))))) : (((var_0) % (((/* implicit */unsigned int) var_19))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [i_7] [i_5] [i_5] [i_1])), (((((/* implicit */_Bool) var_8)) ? (var_12) : (arr_15 [i_1] [i_8] [i_1]))))))));
                                var_33 &= ((((/* implicit */_Bool) 1817455990)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)120))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned int i_9 = 1; i_9 < 17; i_9 += 4) 
    {
        arr_25 [i_9] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max(((-2147483647 - 1)), (arr_23 [i_9])))) ? ((~(arr_24 [(short)8]))) : (((/* implicit */int) (short)-19391)))), (((/* implicit */int) (short)5987))));
        var_34 = ((/* implicit */unsigned int) (short)(-32767 - 1));
    }
    var_35 = ((/* implicit */short) min((1931275836), (((/* implicit */int) (short)-17458))));
    var_36 = var_5;
}
