/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94557
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
    var_15 = ((((/* implicit */int) (!(((/* implicit */_Bool) -1007952680))))) | (((/* implicit */int) ((((/* implicit */unsigned int) max((var_14), (var_13)))) >= (var_10)))));
    var_16 = max((min((((/* implicit */unsigned int) (unsigned char)19)), (1073741823U))), (((/* implicit */unsigned int) ((max((var_11), (((/* implicit */int) var_4)))) % (((/* implicit */int) ((unsigned char) var_4)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)247))));
        var_18 = ((min((var_9), (1879417073))) ^ (min((var_2), (arr_1 [i_0 - 1]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 19; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((var_1) * (arr_5 [i_4 - 1] [i_2])));
                            arr_13 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) 1764095489)) ? (-470729969) : (1007952680))));
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) 2147483647))) || ((!(((/* implicit */_Bool) var_1))))));
                            arr_14 [i_3] [i_1] [i_2] = ((/* implicit */int) var_8);
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned int) ((int) ((-1883486819) >= (((/* implicit */int) var_3)))));
        }
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 2; i_6 < 20; i_6 += 2) 
            {
                for (unsigned char i_7 = 3; i_7 < 18; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        {
                            var_22 &= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) var_4))), (((305170124U) * (((/* implicit */unsigned int) 2147483647))))))) ? (arr_19 [i_0] [i_0] [i_6] [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((-1334694326) / (((/* implicit */int) (unsigned char)64))))))))));
                            arr_28 [i_5] [i_8] = ((/* implicit */unsigned char) ((max((min((((/* implicit */int) (unsigned char)184)), (arr_27 [i_0] [i_0] [i_6] [i_7] [i_7]))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)249)) : (arr_15 [i_0] [i_5] [i_6]))))) >> (((((/* implicit */int) var_6)) - (48)))));
                        }
                    } 
                } 
            } 
            arr_29 [i_0] [i_5] [i_5] = (((~(((((/* implicit */unsigned int) arr_25 [i_5])) | (2099436853U))))) & (3930250845U));
            arr_30 [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)159))))) <= (-638952823)));
        }
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
        {
            arr_34 [i_9] [i_9] = ((/* implicit */unsigned char) ((((-1007952694) + (2147483647))) - (2147483647)));
            /* LoopSeq 3 */
            for (int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    arr_40 [i_11] [i_11] [i_11] [i_11] [i_11] [i_0] = 2147483647;
                    var_23 = ((/* implicit */int) var_10);
                }
                for (int i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    var_24 = ((int) arr_21 [i_10] [i_9] [i_10] [i_10]);
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        arr_47 [i_13] [i_9] [i_10] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_0] [i_0] [i_10] [i_10] [i_12] [i_13]))) <= (arr_43 [i_0] [i_9] [i_0] [i_9] [i_12] [i_13])));
                        var_25 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -1007952680)))) ? (-638952818) : (((/* implicit */int) (unsigned char)96))));
                    }
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) -1007952664)) && (((/* implicit */_Bool) (unsigned char)237))));
                }
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_10])) || (((/* implicit */_Bool) 2147483647)))))));
                /* LoopSeq 2 */
                for (int i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((((var_14) + (2147483647))) >> (((var_1) - (4036788366U)))));
                        var_29 = ((((/* implicit */int) arr_17 [i_0])) << (((((/* implicit */int) arr_42 [i_0] [i_0] [i_10] [i_14] [i_15] [i_15])) - (120))));
                        var_30 = ((/* implicit */int) (!((!(((/* implicit */_Bool) -337916251))))));
                        arr_53 [i_0] [i_9] [i_10] [i_14] [i_0] = ((/* implicit */int) var_0);
                    }
                    arr_54 [i_0] [i_9] [i_10] [i_14] |= arr_32 [i_9] [i_10];
                }
                for (unsigned int i_16 = 1; i_16 < 21; i_16 += 3) 
                {
                    var_31 = ((/* implicit */unsigned int) var_6);
                    /* LoopSeq 1 */
                    for (int i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        arr_60 [i_0] [i_9] [i_9] [i_10] [i_9] [i_17] = ((/* implicit */unsigned int) arr_48 [i_0 + 1] [i_0 - 2] [i_9] [i_10] [i_16 - 1] [i_17]);
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13)))))));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_24 [i_16] [i_16] [i_16] [i_16] [i_16])) * (var_10)));
                        var_34 &= ((/* implicit */int) (!((!(((/* implicit */_Bool) var_10))))));
                        var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                    }
                    var_36 = ((/* implicit */int) arr_35 [i_0] [i_9] [i_10] [i_16]);
                }
            }
            for (int i_18 = 0; i_18 < 22; i_18 += 1) /* same iter space */
            {
                arr_64 [i_18] [i_18] = ((/* implicit */int) var_6);
                var_37 -= ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_9] [i_18]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))));
            }
            for (int i_19 = 0; i_19 < 22; i_19 += 1) /* same iter space */
            {
                var_38 ^= ((/* implicit */int) var_6);
                var_39 &= ((((/* implicit */_Bool) 94785443)) ? (((/* implicit */int) arr_21 [6] [i_9] [i_19] [i_9])) : (((/* implicit */int) ((var_1) <= (((/* implicit */unsigned int) var_12))))));
                var_40 = ((int) 2840564010U);
                var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) arr_5 [i_0] [20U]))));
            }
        }
        arr_67 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 3225231068U))))), (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (-1920049231))))))));
        var_42 = ((/* implicit */unsigned int) min((min((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) 1514382020U)) ? (var_14) : (((/* implicit */int) arr_17 [i_0])))))), (var_9)));
    }
    for (int i_20 = 0; i_20 < 22; i_20 += 3) 
    {
        var_43 += ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) ((var_5) / (var_9)))))));
        arr_70 [i_20] [i_20] = ((((/* implicit */unsigned int) max((arr_69 [i_20]), (var_5)))) * (min((567978626U), (((/* implicit */unsigned int) (unsigned char)211)))));
        var_44 ^= ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)0)) ^ (arr_66 [i_20] [i_20] [i_20] [i_20]))), (arr_55 [i_20] [i_20]))))));
    }
    var_45 = ((/* implicit */unsigned int) var_2);
    var_46 = ((/* implicit */int) (unsigned char)96);
}
