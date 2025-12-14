/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71867
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
    var_18 = ((/* implicit */_Bool) min((((((_Bool) (unsigned short)32519)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)-4))))) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)21945)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_1 [i_0]))))), ((((((~(((/* implicit */int) arr_0 [(_Bool)1])))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(((/* implicit */int) var_14)))))));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [(unsigned short)10] [i_0] [i_0])))))));
            var_22 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_2 [(_Bool)1] [i_0] [i_1]))));
            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) ((signed char) arr_3 [(_Bool)1])))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_11 [i_1] [i_3] [i_1] = var_4;
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) / (((((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [(signed char)12] [i_4])))))))));
                            var_25 = ((_Bool) (_Bool)1);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_26 *= ((/* implicit */unsigned short) (+(((/* implicit */int) var_12))));
                            var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1]))));
                            var_28 = ((arr_0 [i_1]) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [(_Bool)1] [i_3])));
                            var_29 = arr_3 [i_1];
                            arr_14 [i_0] [i_0] [i_1] [i_1] [i_3] [(_Bool)1] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_30 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))));
                            var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [(_Bool)1] [i_2] [i_2] [i_3] [i_3] [i_6]))))) ? (((/* implicit */int) ((signed char) arr_16 [i_6] [(_Bool)1] [i_2] [i_1] [i_0]))) : (((arr_1 [(unsigned short)10]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))));
                        }
                        var_32 = (!(var_14));
                    }
                } 
            } 
        }
        for (unsigned short i_7 = 1; i_7 < 11; i_7 += 2) 
        {
            arr_22 [i_7] [i_7] = (!(((/* implicit */_Bool) var_1)));
            var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (!(var_12)))))))));
        }
        arr_23 [i_0] [i_0] |= ((((/* implicit */_Bool) arr_17 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [(unsigned short)10])) && (((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1]))))));
    }
    var_34 = ((/* implicit */signed char) (~(((/* implicit */int) var_14))));
}
