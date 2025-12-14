/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80978
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
    var_16 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned char) ((((var_3) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)25)))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned char) (_Bool)0)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((unsigned char)24), (((/* implicit */unsigned char) (_Bool)1))))))), (((/* implicit */int) max((var_11), (((/* implicit */unsigned char) var_8)))))));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((unsigned char) var_0)))));
                        arr_12 [i_0] [i_2] [(unsigned char)14] [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [(unsigned char)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_2 [(unsigned char)14])) : (((/* implicit */int) arr_13 [(_Bool)1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_1 [i_0] [i_4])) : ((~(((/* implicit */int) var_8))))));
                        arr_16 [(_Bool)1] [i_0] [(_Bool)1] [i_2] [i_0] = ((/* implicit */_Bool) ((var_13) ? (min((((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_14))))), (((((/* implicit */int) var_9)) & (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */int) min((arr_5 [i_1 + 1] [i_1 + 1] [i_4 - 1] [i_4 - 1]), (var_7))))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [(unsigned char)2] [(_Bool)1] [i_1] [i_1] [i_0] [(_Bool)1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
                            arr_20 [i_0] [i_1] [i_0] [i_4 - 1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)93)) / (((/* implicit */int) var_10))));
                            arr_21 [i_5] [i_0] [i_0] [i_1 + 1] = var_15;
                        }
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            var_19 = ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) var_0)))) < (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_24 [i_4 - 1] [(_Bool)1] [i_2] [i_4 - 1] [i_1 + 1]))))));
                            var_20 = ((/* implicit */_Bool) arr_23 [(_Bool)1]);
                            var_21 = ((/* implicit */_Bool) ((var_1) ? (((((/* implicit */_Bool) arr_11 [i_4] [i_4 - 1] [i_4] [i_4 - 1] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)44)))) : (((/* implicit */int) var_4))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) var_12)))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_4] [i_4])))))))) : (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_2))))) & ((~(((/* implicit */int) var_9))))))));
                            var_23 *= ((/* implicit */unsigned char) var_0);
                        }
                    }
                    var_24 = ((/* implicit */unsigned char) ((max((arr_9 [i_0] [i_1] [i_1 + 1] [i_2]), (var_5))) ? (((((/* implicit */int) var_7)) << (((((/* implicit */int) var_2)) - (172))))) : ((~(((/* implicit */int) var_1))))));
                }
            } 
        } 
    } 
}
