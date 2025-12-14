/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81962
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */_Bool) ((unsigned char) var_1));
        arr_3 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) >= (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (_Bool)1))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) var_6);
        var_20 |= ((/* implicit */_Bool) ((arr_4 [0]) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_5 [i_1] [(_Bool)1]))));
        var_21 = (_Bool)1;
    }
    for (int i_2 = 3; i_2 < 12; i_2 += 2) 
    {
        var_22 |= ((/* implicit */unsigned char) min((arr_2 [(_Bool)1] [i_2]), (arr_8 [i_2] [i_2])));
        /* LoopSeq 4 */
        for (int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_20 [i_2] [i_5] [i_3] [i_5] [i_3] = ((/* implicit */_Bool) min((((unsigned char) (_Bool)0)), (min((var_14), (((/* implicit */unsigned char) var_17))))));
                            var_23 *= ((/* implicit */_Bool) ((((((/* implicit */int) arr_18 [i_2] [i_2] [i_5])) * (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_11 [i_3] [i_6])) : (-733254275))))) * (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)73))))) ? (((/* implicit */int) arr_4 [i_5])) : (((/* implicit */int) (_Bool)1))))));
                            arr_21 [i_3] [(_Bool)1] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) ((min((var_5), (var_15))) ? (((/* implicit */int) min((arr_14 [i_2] [(_Bool)0] [i_2] [i_5] [i_6]), (((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)3))))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) var_6))))) ? (0) : (((/* implicit */int) arr_4 [i_3]))))));
                            arr_22 [i_6] [i_3] [i_4] [i_3] [i_2] = (i_3 % 2 == zero) ? (((/* implicit */_Bool) ((((((var_16) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)62)))) >> (min((((/* implicit */int) (_Bool)0)), (0))))) >> (((arr_19 [i_3] [i_3] [i_5] [i_6]) - (535674707)))))) : (((/* implicit */_Bool) ((((((var_16) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)62)))) >> (min((((/* implicit */int) (_Bool)0)), (0))))) >> (((((arr_19 [i_3] [i_3] [i_5] [i_6]) - (535674707))) + (260431207))))));
                        }
                    } 
                } 
                arr_23 [i_4] [i_4] [i_4] &= ((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)133)) * (((/* implicit */int) arr_10 [i_2 - 2] [i_2 - 3] [i_4])))), ((+((~(((/* implicit */int) arr_2 [i_2] [i_4]))))))));
                var_24 = ((((/* implicit */int) arr_2 [i_2] [i_2 - 2])) <= (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_16)))))))));
                var_25 *= (_Bool)1;
            }
            var_26 = (((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_2] [12]))))))) <= (((((/* implicit */_Bool) ((arr_15 [(_Bool)1] [i_2] [i_3] [i_3]) ? (-8) : (((/* implicit */int) arr_2 [i_2] [i_3]))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) arr_15 [(_Bool)1] [i_2] [i_3] [i_3])))))));
        }
        for (int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
        {
            arr_26 [i_2] [(_Bool)1] [i_2] &= (_Bool)0;
            var_27 = ((/* implicit */_Bool) ((((/* implicit */int) min((((((/* implicit */int) arr_2 [i_7] [i_7])) < (((/* implicit */int) arr_7 [i_2] [i_7])))), (var_16)))) ^ ((~(arr_13 [(_Bool)1] [i_7] [10])))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_30 [i_8] = ((/* implicit */unsigned char) (~((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))) & (((/* implicit */int) var_12))))));
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */int) arr_16 [(_Bool)0] [i_8] [i_8] [i_8] [i_2] [i_2])) ^ (((((/* implicit */int) arr_18 [(_Bool)1] [i_2 - 1] [0])) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (_Bool)1))))))))))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            var_29 = ((arr_14 [i_2 - 1] [i_9] [i_2] [i_2] [i_9]) ? (((/* implicit */int) arr_14 [i_2 + 1] [i_2 + 1] [4] [i_2] [(_Bool)1])) : (((/* implicit */int) arr_14 [i_2 - 2] [i_9] [i_2] [i_2] [i_2])));
            /* LoopNest 3 */
            for (unsigned char i_10 = 2; i_10 < 11; i_10 += 2) 
            {
                for (unsigned char i_11 = 1; i_11 < 12; i_11 += 2) 
                {
                    for (int i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        {
                            var_30 -= ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)192))))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))));
                            var_32 |= var_12;
                            arr_43 [i_11] [i_9] [i_10] = (+(((/* implicit */int) arr_0 [i_2 - 2])));
                        }
                    } 
                } 
            } 
        }
    }
    var_33 ^= min((var_6), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) (_Bool)1)))))))));
}
