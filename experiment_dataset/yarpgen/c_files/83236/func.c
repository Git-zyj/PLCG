/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83236
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((((/* implicit */short) var_6)), ((short)-6544)))) : (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) var_13))))))) ? (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)31)) || (((/* implicit */_Bool) (short)7792))))))) : (((/* implicit */int) var_2))));
    var_16 = ((/* implicit */signed char) min((((/* implicit */short) var_4)), ((short)7813)));
    var_17 ^= var_14;
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_1] &= ((/* implicit */_Bool) var_10);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)27443)) : (((/* implicit */int) (signed char)99))));
                            var_19 = ((short) ((signed char) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (signed char)-1)))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)27443)) ? (((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) (signed char)-100)))) : ((~(((/* implicit */int) (short)-1))))));
                            arr_12 [i_2] [i_2] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0 - 1]))))) ? (((/* implicit */int) ((signed char) var_11))) : (((/* implicit */int) ((short) arr_9 [i_0] [i_0]))))));
                            /* LoopSeq 3 */
                            for (short i_4 = 1; i_4 < 17; i_4 += 1) 
                            {
                                var_21 = ((/* implicit */signed char) max((var_21), (var_0)));
                                arr_16 [i_0] [i_1] [i_2] [i_4 + 4] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_2] [i_2] [i_2]), (((/* implicit */short) var_0))))) ? (((/* implicit */int) min((((signed char) (_Bool)1)), (min((var_6), (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4 - 1])))))) : (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-8)) && (arr_2 [i_0] [i_1])))), (max(((signed char)-1), ((signed char)98))))))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)125)) ? (min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) arr_5 [i_1] [i_4])) : (((/* implicit */int) arr_5 [i_0] [i_1])))))))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                            {
                                arr_20 [i_2] [(signed char)15] [(signed char)15] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) | (((/* implicit */int) (!(arr_11 [i_0]))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (short)-27465)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)23048)) : (((/* implicit */int) arr_14 [i_5] [i_5] [i_3] [(_Bool)1] [i_1] [i_0] [(_Bool)1]))))));
                                var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-3430))));
                            }
                            for (signed char i_6 = 2; i_6 < 20; i_6 += 2) 
                            {
                                var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)7792)) && ((!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-113)))))))));
                                var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_21 [i_0] [i_0] [i_0 - 1] [i_6] [i_0 - 1]), ((signed char)-100)))) ? (((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!((_Bool)1)))))) : (((/* implicit */int) (signed char)15))));
                                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min((((((/* implicit */_Bool) min((var_5), (var_4)))) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_2] [i_3] [(signed char)0] [i_3] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-1)))))), (((/* implicit */int) (signed char)3)))))));
                                arr_23 [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_11 [i_6 - 1]))));
                            }
                        }
                    } 
                } 
                arr_24 [i_0] [i_0] = ((/* implicit */short) arr_10 [i_0] [i_1] [i_1]);
                var_28 = ((/* implicit */short) var_12);
                /* LoopNest 2 */
                for (short i_7 = 3; i_7 < 19; i_7 += 4) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_30 [i_0] [i_7] [(signed char)10] [(signed char)0] [(_Bool)1] = ((/* implicit */_Bool) var_2);
                            arr_31 [i_0 - 1] [(_Bool)1] [i_0] [i_0 - 1] &= ((/* implicit */signed char) ((((/* implicit */int) var_10)) != (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_4)))))));
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (+(((/* implicit */int) max((var_5), (((/* implicit */signed char) ((((/* implicit */int) (signed char)1)) != (((/* implicit */int) (signed char)-69)))))))))))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)27443)) >= (((/* implicit */int) var_1)))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_1] [i_7] [i_8])))) : (((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_8)))))))) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (signed char)-111))));
                            var_31 = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) (signed char)-71)))), (((/* implicit */int) var_7))));
                        }
                    } 
                } 
            }
        } 
    } 
}
