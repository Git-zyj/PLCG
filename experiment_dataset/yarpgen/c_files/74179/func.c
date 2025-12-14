/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74179
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
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_10 = (signed char)-50;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-50)) ? (-891532918) : (((/* implicit */int) (signed char)-50)))))));
                    arr_8 [i_1] [i_2] &= ((/* implicit */int) min((((signed char) (+(((/* implicit */int) arr_6 [i_2]))))), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_2]))))) >= (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (signed char)-12)) : (arr_5 [i_1] [(signed char)9] [i_1]))))))));
                }
            } 
        } 
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-50)) > (((/* implicit */int) (signed char)-19)))))));
    }
    for (signed char i_3 = 1; i_3 < 19; i_3 += 4) /* same iter space */
    {
        var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_4 [i_3] [12])) : (max((((/* implicit */int) arr_7 [i_3 + 1] [i_3] [i_3 + 1])), (-1)))))) ? (min((((/* implicit */int) ((((/* implicit */int) (signed char)-19)) >= (((/* implicit */int) (signed char)12))))), (((((/* implicit */_Bool) -1)) ? (var_5) : (((/* implicit */int) arr_0 [i_3 + 1])))))) : (var_1)));
        arr_12 [i_3] = ((/* implicit */signed char) max((((/* implicit */int) (signed char)-69)), ((+(arr_1 [i_3 - 1])))));
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
        {
            arr_15 [i_3 - 1] [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) -17))) <= (((/* implicit */int) ((((/* implicit */int) arr_13 [i_3 + 1])) <= (66072770)))))) ? (((int) ((signed char) (signed char)22))) : (((/* implicit */int) ((max((arr_10 [i_3] [i_3]), (((/* implicit */int) arr_14 [i_3] [i_4])))) >= (((/* implicit */int) (signed char)0)))))));
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (0) : (14)))))))));
            var_15 = ((/* implicit */int) max((var_15), (max(((+(((/* implicit */int) arr_11 [i_3 - 1])))), (arr_10 [i_3 - 1] [i_3])))));
            var_16 = arr_7 [i_3 - 1] [i_4] [i_3 - 1];
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 19; i_6 += 4) 
            {
                for (signed char i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3]))))) <= (((/* implicit */int) ((-1) != (-1))))));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_1 [i_6 - 1]))));
                        var_19 = (signed char)14;
                        arr_24 [i_6] [i_6] [i_5] [i_6] = ((/* implicit */signed char) ((1522522604) >= (((/* implicit */int) (signed char)11))));
                    }
                } 
            } 
            var_20 &= ((/* implicit */int) ((signed char) arr_13 [i_5]));
            var_21 = ((/* implicit */int) ((((/* implicit */int) arr_11 [i_5])) <= (var_5)));
            arr_25 [i_3] [i_3] = ((signed char) ((var_1) / (((/* implicit */int) arr_6 [i_5]))));
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 21; i_8 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    {
                        var_22 = ((/* implicit */signed char) (-(arr_31 [i_8] [i_8] [i_11])));
                        var_23 = ((/* implicit */signed char) (~(((-9) * (((/* implicit */int) arr_32 [i_11] [i_10] [i_9]))))));
                        var_24 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (signed char)69)) != (14))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            for (signed char i_13 = 2; i_13 < 22; i_13 += 4) 
            {
                {
                    var_25 += ((/* implicit */signed char) ((((/* implicit */int) arr_33 [i_8 + 1])) > (((/* implicit */int) arr_33 [i_8 - 2]))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_5))));
                    arr_40 [17] [17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-12)) ? (arr_36 [i_8] [i_12] [i_12] [i_8]) : (-17))))));
                    var_27 += ((/* implicit */signed char) (!(((var_5) != (((/* implicit */int) (signed char)69))))));
                }
            } 
        } 
        arr_41 [i_8] [i_8 - 1] = ((((/* implicit */_Bool) arr_39 [i_8 + 1])) ? (((/* implicit */int) arr_39 [i_8 + 2])) : (((/* implicit */int) arr_33 [i_8 - 1])));
        var_28 &= ((/* implicit */signed char) ((arr_31 [i_8 - 2] [i_8 - 2] [i_8 + 2]) > (((/* implicit */int) (signed char)-76))));
        /* LoopNest 2 */
        for (signed char i_14 = 1; i_14 < 22; i_14 += 4) 
        {
            for (signed char i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                {
                    var_29 *= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-97)) > (var_5)));
                    var_30 = (signed char)-16;
                    var_31 = ((/* implicit */signed char) ((int) arr_27 [i_8]));
                    arr_48 [(signed char)18] [i_14 - 1] [i_15] = var_0;
                    arr_49 [i_8] [i_8] [20] = ((/* implicit */signed char) (-(((/* implicit */int) ((var_0) > (((/* implicit */int) (signed char)17)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 13; i_16 += 4) 
    {
        var_32 = arr_0 [i_16];
        var_33 = ((/* implicit */signed char) ((arr_18 [i_16] [i_16] [i_16]) != (((/* implicit */int) arr_33 [i_16]))));
        var_34 += ((/* implicit */int) ((signed char) (signed char)-73));
        /* LoopNest 2 */
        for (signed char i_17 = 2; i_17 < 11; i_17 += 4) 
        {
            for (signed char i_18 = 3; i_18 < 9; i_18 += 4) 
            {
                {
                    var_35 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)95))));
                    var_36 |= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-50)) <= (((/* implicit */int) arr_20 [i_18 - 1] [i_18 - 3] [i_17 - 1] [i_17 + 2]))));
                    /* LoopSeq 1 */
                    for (signed char i_19 = 0; i_19 < 13; i_19 += 4) 
                    {
                        var_37 += (~(((/* implicit */int) arr_43 [i_18 + 4] [i_17 - 2] [i_16])));
                        /* LoopSeq 2 */
                        for (signed char i_20 = 2; i_20 < 12; i_20 += 4) /* same iter space */
                        {
                            arr_63 [i_18] = ((/* implicit */int) ((((/* implicit */int) ((signed char) -1522522623))) <= (arr_51 [i_19])));
                            var_38 = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_17] [i_16] [i_18 - 1] [i_17] [i_16])) <= (((/* implicit */int) arr_22 [i_16] [i_16] [i_18 - 3] [i_19] [i_16]))));
                        }
                        for (signed char i_21 = 2; i_21 < 12; i_21 += 4) /* same iter space */
                        {
                            var_39 &= ((/* implicit */signed char) ((-1415305077) <= (((/* implicit */int) (signed char)-11))));
                            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) arr_9 [i_18]))));
                        }
                        var_41 = var_5;
                    }
                    var_42 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-68))));
                }
            } 
        } 
    }
    var_43 = ((/* implicit */signed char) var_9);
}
