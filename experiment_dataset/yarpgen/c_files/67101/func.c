/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67101
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
    var_20 = ((/* implicit */short) ((unsigned short) var_12));
    var_21 = ((/* implicit */short) max((((unsigned short) ((short) var_5))), (((/* implicit */unsigned short) ((short) (~(((/* implicit */int) var_19))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                            {
                                var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_3 [i_2] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_0] [i_3] [i_1]))))))));
                                var_23 = var_7;
                            }
                            var_24 += ((/* implicit */unsigned short) ((((((((/* implicit */int) var_15)) << (((((/* implicit */int) arr_5 [(short)1])) + (3465))))) <= (((/* implicit */int) var_2)))) ? (((((/* implicit */_Bool) ((short) (unsigned short)49214))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min((arr_11 [i_1] [(unsigned short)8] [(unsigned short)1]), (((/* implicit */unsigned short) var_11))))))) : (((/* implicit */int) max(((unsigned short)18), ((unsigned short)50624))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) ((max((((/* implicit */int) arr_5 [i_0 - 1])), (((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16)))))) / (((/* implicit */int) arr_10 [i_1] [i_1]))));
                arr_17 [i_1] [i_1] = ((short) (~(((/* implicit */int) arr_5 [i_0 + 2]))));
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (unsigned short)55486)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) (unsigned short)55508)))) : (((/* implicit */int) var_8)))) : (((/* implicit */int) max((((unsigned short) var_17)), (var_7))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_5 = 1; i_5 < 6; i_5 += 3) 
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_5 + 4] [i_5 + 4] [i_5 + 4])) || (((/* implicit */_Bool) arr_18 [i_1] [i_5 + 4] [i_5 + 4]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_16))));
                        arr_25 [i_0] [i_1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_11 [i_0] [(unsigned short)1] [i_5 + 4])) : (((/* implicit */int) var_10))));
                    }
                }
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    var_29 = var_3;
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_30 = var_2;
                                arr_34 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_14 [i_1] [i_0] [(unsigned short)7] [i_7] [i_8] [i_9]))))) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0 + 1])))) : (max((((/* implicit */int) var_19)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))))));
                                var_31 = ((/* implicit */short) ((unsigned short) ((unsigned short) ((unsigned short) var_3))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
