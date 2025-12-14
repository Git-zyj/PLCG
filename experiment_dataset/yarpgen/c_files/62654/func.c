/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62654
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_16 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (var_14)))) ? (max((arr_9 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]), (var_1))) : (((var_9) ? (var_14) : (var_11))))), (min((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) < (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 1]))))), (max((var_15), (((/* implicit */int) var_12)))))));
                                var_17 += ((int) ((arr_10 [i_2] [i_2] [i_0]) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_8)))) : ((-(((/* implicit */int) arr_11 [i_0] [i_1] [i_3] [i_3]))))));
                                var_18 = ((/* implicit */_Bool) min((var_18), (arr_10 [i_4] [i_3] [i_1])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 23; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_6] [i_6]))))) ? (((((/* implicit */_Bool) arr_16 [i_5] [i_0 - 1])) ? (((var_2) ? (var_6) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -202867082))))))) : (max((var_6), (arr_14 [i_1] [i_0] [i_0] [i_5] [i_0])))));
                            var_20 = ((/* implicit */_Bool) ((var_9) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_1] [i_5] [i_0] [i_1] [i_0]))))) ? (min((arr_16 [i_5] [i_6]), (((/* implicit */int) var_8)))) : (((/* implicit */int) ((_Bool) var_14))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_13))))))))));
                        }
                    } 
                } 
                var_21 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */int) var_13)) : (max((((/* implicit */int) var_7)), ((((_Bool)0) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_22 = (~(((/* implicit */int) ((((/* implicit */int) ((_Bool) (_Bool)1))) != (((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_12)))))))));
                                var_23 |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)0))))) ? (((arr_22 [i_9] [i_11]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))) : (max((var_14), (((/* implicit */int) (signed char)120)))))), ((+(((/* implicit */int) (_Bool)1))))));
                                var_24 *= ((/* implicit */_Bool) (((_Bool)1) ? ((((!(((/* implicit */_Bool) (signed char)124)))) ? (((arr_17 [i_8]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))) : (((int) -1568831717)))) : ((~(max((var_15), (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) var_11);
                        var_26 = var_4;
                        var_27 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_21 [(signed char)1] [5])))) > ((~(max((arr_9 [i_7] [i_7] [i_7] [i_12] [i_12] [i_7]), (((/* implicit */int) arr_12 [i_7] [i_8] [i_8] [i_9] [i_12]))))))));
                        arr_34 [i_8] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_29 [i_9] [i_12 + 1] [i_9] [i_12]))) ? (((((/* implicit */_Bool) max((var_15), (((/* implicit */int) (signed char)120))))) ? ((((_Bool)1) ? (((/* implicit */int) var_4)) : (1400993273))) : (max((arr_2 [i_7]), (var_11))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (15872)))));
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) var_7)) * (((/* implicit */int) (_Bool)1))))));
                        var_29 = var_2;
                        var_30 &= ((/* implicit */_Bool) (~(var_6)));
                    }
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_7] [i_8] [i_9]))))) ? (((((/* implicit */_Bool) arr_7 [i_7] [i_8] [i_9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_7] [i_7] [i_9])))) : (((/* implicit */int) max((arr_7 [i_7] [i_8] [i_9]), (((/* implicit */signed char) var_10)))))));
                }
            } 
        } 
    } 
}
