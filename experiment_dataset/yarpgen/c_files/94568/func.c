/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94568
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((arr_0 [i_0]), (((/* implicit */int) arr_2 [i_0] [i_0])))), (((/* implicit */int) ((_Bool) arr_0 [(unsigned char)3])))))) ? (min((((/* implicit */unsigned int) arr_0 [i_0])), (((arr_2 [i_1] [(unsigned char)4]) ? (((/* implicit */unsigned int) arr_0 [7U])) : (arr_1 [i_0]))))) : (arr_1 [i_1])));
            /* LoopSeq 1 */
            for (int i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                var_13 = ((/* implicit */_Bool) min((max((((/* implicit */int) (unsigned char)23)), (arr_7 [i_2 - 1]))), (arr_7 [i_2 + 2])));
                arr_8 [i_2] [i_2] [i_2 + 2] [i_0] = ((/* implicit */unsigned int) (~(min((((/* implicit */int) arr_2 [i_0] [i_0])), ((-(((/* implicit */int) arr_2 [i_1] [i_2]))))))));
            }
            arr_9 [6] [i_1] [i_1] = ((/* implicit */_Bool) arr_7 [i_0]);
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)253))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [2]))) : (min((((/* implicit */unsigned int) arr_7 [i_0])), (arr_5 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0])) ? (max((arr_4 [i_0] [i_1] [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) arr_7 [(_Bool)1])))))))));
        }
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_4 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned char)41))));
        arr_10 [i_0] = min((min((((arr_0 [i_0]) / (arr_0 [i_0]))), ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0] [5])) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (unsigned char)233)));
        arr_11 [i_0] = arr_6 [i_0] [i_0] [i_0] [i_0];
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (+((+(min((((/* implicit */unsigned int) arr_13 [i_3])), (3918736212U))))))))));
        arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [2])) ? (max(((+(arr_4 [i_3] [i_3] [i_3] [i_3]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)184))))))) : (((/* implicit */unsigned int) arr_0 [i_3]))));
        var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_3]))));
    }
    for (int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        var_18 = ((/* implicit */signed char) arr_16 [(unsigned char)22] [(unsigned char)22]);
        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (-1883967073) : (-1798072787)));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_21 [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) arr_19 [i_4] [i_4] [i_5] [i_4]);
                    var_20 = ((/* implicit */_Bool) (-(arr_20 [i_6] [i_5] [i_5] [i_4])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        arr_25 [i_5] [3] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [(signed char)11] [i_6])) + (-1296825058)));
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
                        {
                            var_21 = arr_22 [i_7] [i_5];
                            arr_29 [i_4] [(unsigned char)24] [i_4] [i_5] [(signed char)7] [i_5] [i_8] = ((/* implicit */_Bool) arr_15 [(unsigned char)5] [(unsigned char)5]);
                            var_22 = (_Bool)0;
                        }
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_4] [i_4]))))) ? (((/* implicit */int) arr_16 [(unsigned char)5] [i_4])) : (((((/* implicit */_Bool) 376231083U)) ? (arr_26 [i_9] [i_6] [i_6] [(_Bool)1]) : (((/* implicit */int) arr_28 [i_4] [i_4] [i_6])))))))));
                            var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_9] [i_7]))));
                            var_25 = ((arr_17 [i_4] [i_4]) || (((/* implicit */_Bool) ((unsigned char) arr_17 [i_7] [i_9]))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_24 [i_4] [i_7] [i_6] [i_4]))));
                            var_27 &= ((/* implicit */signed char) arr_17 [i_4] [(_Bool)1]);
                        }
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((arr_24 [i_4] [(signed char)14] [i_5] [i_4]) / (((/* implicit */int) arr_31 [i_4] [i_5] [i_4] [i_7] [(_Bool)0])))))));
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */_Bool) min((min((((((/* implicit */int) arr_17 [i_4] [(_Bool)1])) / (arr_20 [i_4] [(_Bool)1] [i_4] [i_4]))), ((~(arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))), (arr_15 [i_4] [i_4])));
    }
    /* LoopSeq 1 */
    for (signed char i_11 = 1; i_11 < 20; i_11 += 2) 
    {
        var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(arr_26 [i_11] [i_11] [i_11] [i_11])))) ? ((-(((/* implicit */int) arr_37 [i_11 + 2])))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_31 [i_11] [i_11 - 1] [(unsigned char)24] [i_11 - 1] [(unsigned char)24])))))) == (((((_Bool) (unsigned char)56)) ? ((~(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (signed char)64))))))));
        /* LoopSeq 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_42 [i_12] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_19 [i_12] [i_12] [(_Bool)1] [i_12])), (arr_22 [12] [12])));
            var_31 -= (!(((/* implicit */_Bool) min(((-(((/* implicit */int) arr_28 [i_11] [i_11] [i_11])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_11 - 1] [10U] [i_11] [(unsigned char)22] [i_11])))))))));
        }
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_32 = ((/* implicit */unsigned char) (!(arr_39 [i_11 + 1] [i_11 - 1])));
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_40 [(_Bool)1] [i_13])) ? (((/* implicit */int) arr_38 [i_15] [i_13])) : (((/* implicit */int) arr_18 [i_11] [i_13])))));
                        /* LoopSeq 3 */
                        for (signed char i_16 = 0; i_16 < 22; i_16 += 4) 
                        {
                            var_34 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_49 [i_11] [i_11] [i_14] [i_16] [i_16])))) ? ((-(1798072786))) : (((/* implicit */int) arr_44 [(_Bool)1]))));
                            arr_56 [(signed char)8] [(signed char)8] [(signed char)8] [i_15] [(signed char)8] [i_13] [(_Bool)1] = ((/* implicit */unsigned char) arr_33 [(_Bool)0] [i_13] [(_Bool)0] [i_13] [i_13] [i_13]);
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_13] [(_Bool)0])) && (((/* implicit */_Bool) (unsigned char)26)))))));
                            arr_59 [i_11] [i_11] [i_11] [i_13] [i_11] [i_11 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 278155069U)) ? (((/* implicit */int) arr_19 [(_Bool)1] [(_Bool)1] [i_13] [i_17])) : ((-(((/* implicit */int) arr_31 [i_17] [i_15] [i_13] [i_11 + 1] [i_11 + 1]))))));
                            var_36 -= ((/* implicit */int) arr_36 [i_11]);
                            var_37 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_11])) ? (((/* implicit */int) arr_47 [i_14] [i_17])) : (arr_26 [(signed char)10] [i_14] [(signed char)10] [i_11])))) | (((arr_45 [20U] [i_14] [20U]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_11]))) : (arr_46 [i_11] [i_13] [(_Bool)1] [(_Bool)1])))));
                        }
                        for (int i_18 = 1; i_18 < 21; i_18 += 4) 
                        {
                            var_38 = ((/* implicit */_Bool) arr_15 [i_18 + 1] [(_Bool)1]);
                            var_39 ^= ((/* implicit */int) arr_51 [i_15] [13] [i_11] [(_Bool)1] [i_18]);
                            arr_64 [i_13] [i_13] [8U] [i_15] [i_18 + 1] [i_14] = ((/* implicit */unsigned char) arr_44 [6]);
                        }
                    }
                } 
            } 
            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_41 [i_11] [i_13] [i_13])))))));
            arr_65 [i_13] [i_13] [i_13] = ((_Bool) arr_49 [i_11 - 1] [i_11 + 1] [(signed char)6] [i_13] [(signed char)1]);
        }
    }
    var_41 = ((/* implicit */unsigned int) min((min(((-(-1798072787))), (((-1798072786) - (((/* implicit */int) var_4)))))), (min((((var_9) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_7))))));
}
