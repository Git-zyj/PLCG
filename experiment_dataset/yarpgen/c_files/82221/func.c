/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82221
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
    for (int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0 + 2] = ((int) (-(((/* implicit */int) ((var_5) < (var_13))))));
        var_20 &= arr_3 [i_0];
        var_21 |= ((/* implicit */unsigned int) ((int) (-(((/* implicit */int) ((1941594115U) <= (((/* implicit */unsigned int) 1776386025))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (unsigned int i_4 = 2; i_4 < 13; i_4 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            var_22 ^= ((/* implicit */int) ((((/* implicit */unsigned int) -1652965773)) - ((-(arr_13 [i_3] [13] [11U] [i_3] [i_3])))));
                            arr_16 [i_1] [i_1] [i_3] [i_1] = arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_5];
                        }
                        for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            var_23 ^= arr_7 [i_3] [i_4 - 2];
                            arr_19 [i_6] [i_4 + 1] [i_1] [i_1] [i_1] = (-(arr_12 [i_1] [i_2] [i_4 - 2] [i_2] [i_3] [i_2 + 1]));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (4294967270U)));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (var_7) : (var_1)));
                        }
                        arr_20 [i_1] [i_2 - 2] [i_3] [i_4 - 1] = ((/* implicit */int) 4294967292U);
                        var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_2 - 1])) ? (arr_7 [i_1 + 1] [i_2 + 1]) : (arr_7 [i_1 + 1] [i_2 - 1])));
                        var_27 *= (+(524287U));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                {
                    var_28 &= ((/* implicit */int) (~(arr_9 [i_1 + 1])));
                    var_29 = (-2147483647 - 1);
                    arr_26 [i_1] [i_1] |= ((/* implicit */int) (+(63U)));
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1 - 1] [i_7] [i_8] [i_1 - 1] [i_7])) ? (3878529940U) : (((/* implicit */unsigned int) 765290662))))) ? (arr_11 [i_1] [i_1] [i_1] [i_1 - 1]) : (var_16)))));
                    var_31 = ((/* implicit */unsigned int) -1416335927);
                }
            } 
        } 
    }
    for (int i_9 = 0; i_9 < 13; i_9 += 2) 
    {
        arr_30 [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((0U) <= (1536152078U))))));
        /* LoopSeq 1 */
        for (unsigned int i_10 = 1; i_10 < 12; i_10 += 2) 
        {
            var_32 = (-((-(min((2353373181U), (((/* implicit */unsigned int) 1192930525)))))));
            var_33 |= var_7;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                for (int i_12 = 2; i_12 < 11; i_12 += 4) 
                {
                    {
                        arr_41 [11] [9] [i_11] [i_12] = ((/* implicit */unsigned int) (-2147483647 - 1));
                        var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_10] [i_10] [i_10] [i_10] [i_10 + 1] [i_10 + 1] [i_12 + 2])) || (((/* implicit */_Bool) ((var_6) & (2147483640))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_9] [i_9] [i_9] [i_12] [i_10] [i_10 + 1])))))));
                        arr_42 [6U] [i_10] [i_10] [9] = (-(((arr_14 [i_10 + 1] [i_12 - 1] [i_12 + 1]) ^ (((/* implicit */unsigned int) arr_29 [i_10 + 1])))));
                    }
                } 
            } 
        }
        arr_43 [i_9] = ((((/* implicit */_Bool) -2071521399)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_9)) >= (min((1484108464U), (((/* implicit */unsigned int) 2048)))))))) : (min((var_11), (((/* implicit */unsigned int) var_9)))));
        var_35 *= ((((/* implicit */_Bool) -162986504)) ? ((-(((((/* implicit */unsigned int) arr_29 [i_9])) + (var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 16777215)))))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 13; i_13 += 4) 
        {
            for (unsigned int i_14 = 0; i_14 < 13; i_14 += 1) 
            {
                {
                    var_36 = ((/* implicit */unsigned int) var_18);
                    arr_49 [i_14] [i_14] [i_14] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10883693U)) && (((/* implicit */_Bool) (-(arr_23 [i_9] [i_9] [i_9]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 13; i_16 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */int) min((max((2981912968U), (max((var_2), (((/* implicit */unsigned int) arr_29 [i_9])))))), (min((467350495U), (((unsigned int) var_14))))));
                                arr_55 [i_14] [9] [i_15] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) 639010403)) ? (((/* implicit */unsigned int) ((((1073741823) >> (((-1313453342) + (1313453349))))) + ((-(-1313453342)))))) : (((((/* implicit */_Bool) ((var_14) / (arr_39 [i_9] [i_15] [i_9] [i_15] [i_9] [i_16])))) ? (((((/* implicit */unsigned int) 2147483623)) * (var_4))) : (((3263179225U) * (((/* implicit */unsigned int) var_1))))))));
                            }
                        } 
                    } 
                    var_38 *= ((/* implicit */unsigned int) arr_38 [i_9]);
                }
            } 
        } 
    }
    var_39 = var_17;
    var_40 = ((/* implicit */int) 134217727U);
    var_41 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
}
