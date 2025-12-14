/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83070
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_3] &= (-((+(((/* implicit */int) (signed char)-50)))));
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_6 [i_0] [i_1 - 3] [i_0])), (arr_2 [i_0] [3] [3]))), (((/* implicit */unsigned int) 412985890))))) ? (((((/* implicit */_Bool) 5U)) ? (5U) : (((/* implicit */unsigned int) -1659886498)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) arr_9 [i_3] [(unsigned char)2] [i_0] [i_0])) == (arr_4 [i_0] [i_1] [i_0] [i_3]))))))))))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) var_0))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_4 = 1; i_4 < 12; i_4 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) var_9);
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_4] [i_5] [(unsigned char)10] &= ((/* implicit */signed char) ((int) 4294967295U));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            arr_20 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3571466708U)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119)))));
                            var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_4] [i_5] [i_6]))))));
                        }
                        arr_21 [i_0] [2] [i_1] [i_4] [i_5] = ((/* implicit */int) (+(1610612736U)));
                    }
                    for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        arr_25 [i_0] [i_1] [i_1] [(unsigned char)2] = ((signed char) var_12);
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (signed char)51)) : (-771939810)));
                        arr_26 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) var_13)) % (2684354551U))) * (((/* implicit */unsigned int) var_6))));
                        var_22 ^= ((/* implicit */signed char) var_7);
                        var_23 &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)62)) >= (((/* implicit */int) arr_8 [0] [i_1 + 1] [i_4 + 2] [i_4]))));
                    }
                    arr_27 [i_4] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_4]))) : (3571466722U)))) ? (((((/* implicit */_Bool) arr_6 [10] [i_1] [i_4 + 1])) ? (134184960) : (((/* implicit */int) arr_12 [i_4 + 1] [i_1])))) : (((/* implicit */int) var_0)));
                }
                for (int i_8 = 2; i_8 < 12; i_8 += 3) 
                {
                    arr_30 [i_0] [i_1] [i_8] = (unsigned char)210;
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((arr_5 [i_9] [i_0] [i_8 + 2]) > (((/* implicit */unsigned int) ((int) max((((/* implicit */int) var_8)), (var_5)))))));
                                arr_35 [i_0] [(signed char)13] [i_8] [3] = ((/* implicit */signed char) ((unsigned int) arr_32 [i_8] [i_8 - 2] [i_9] [i_10]));
                                var_25 = arr_29 [i_9] [i_9] [4U] [0];
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (signed char i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 4; i_13 < 12; i_13 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */int) max((var_26), (((int) ((((3571466707U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66))))) ? (((/* implicit */unsigned int) var_11)) : (var_1))))));
                                var_27 = ((/* implicit */signed char) arr_15 [i_0] [(unsigned char)9] [(unsigned char)12] [i_12] [i_13 - 1] [i_11]);
                                arr_44 [i_13] = var_4;
                                var_28 = (+(arr_11 [i_1 + 1] [i_13] [i_13 + 2] [i_13 + 1]));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned int) var_6))))) ? (max((((/* implicit */int) (unsigned char)255)), (-258336307))) : ((~(-258336326)))))) ? (((/* implicit */unsigned int) 1885331049)) : (var_14)));
    var_30 = ((/* implicit */unsigned char) var_4);
    var_31 = ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) ((unsigned char) var_15))))));
}
