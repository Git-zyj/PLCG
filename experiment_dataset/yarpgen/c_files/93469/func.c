/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93469
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [(unsigned char)4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (unsigned char)30)))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)229))) : (((/* implicit */int) (unsigned char)211))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_0 [i_0] [i_0])))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_5))))) ? (min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_0 [i_0] [i_0]))))), ((-(((/* implicit */int) var_6)))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)114))))) == (((/* implicit */int) (unsigned char)21)))))));
        var_14 = var_7;
        var_15 = ((/* implicit */unsigned char) ((((var_9) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_1 [i_0])))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)206))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) var_3);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 &= ((/* implicit */unsigned char) (!(var_10)));
                                var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)123))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (arr_3 [(unsigned char)5] [(unsigned char)5] [(unsigned char)11])));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((unsigned char) var_11)))) & (((/* implicit */int) var_6))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((((/* implicit */int) arr_12 [(_Bool)1] [i_3] [i_1 + 3] [i_0] [(_Bool)1])) | (((/* implicit */int) (unsigned char)227)))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [(unsigned char)2]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */int) var_9))))) : ((-(((/* implicit */int) var_12)))))) - ((~(((/* implicit */int) var_11))))));
                }
            } 
        } 
    }
    var_22 &= ((unsigned char) (~(((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)228))))));
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_7)), (var_0)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned char)99))))))))))));
}
