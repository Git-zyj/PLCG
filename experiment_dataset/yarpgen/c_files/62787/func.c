/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62787
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2770780843U))));
        arr_5 [i_0] = 2147483647;
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) (+(-1769596471)));
                        arr_14 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_1 + 1] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_2 - 1]))) : (var_9)));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        var_21 = ((/* implicit */signed char) 1524186452U);
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_19 [i_4] [i_5] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_4] [i_5] [i_5]))));
            arr_20 [i_4] = ((/* implicit */long long int) arr_18 [i_4] [i_5] [(unsigned short)8]);
            arr_21 [i_4] = ((/* implicit */int) ((unsigned char) 2770780839U));
        }
        for (short i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            var_22 -= ((/* implicit */short) 2770780853U);
            arr_24 [17ULL] = ((/* implicit */signed char) ((unsigned long long int) 1582990464U));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_22 [i_4])), ((unsigned char)192)))) : (((((/* implicit */int) var_12)) - (((/* implicit */int) var_0))))))) ? (((/* implicit */int) ((_Bool) arr_8 [i_4] [i_4] [i_4]))) : (((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-25)))))))));
            var_24 = ((/* implicit */_Bool) arr_23 [i_6]);
        }
        for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            var_25 = ((/* implicit */short) (~(((/* implicit */int) (!(((2770780843U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16376))))))))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_15 [i_7])))) - (((/* implicit */int) arr_6 [(signed char)17] [(signed char)17]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2770780843U)) ? (((2770780843U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned char)4] [i_7]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_17 [i_4] [i_7] [(short)16])))))))));
            var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)46)), (var_2)))) ? (((/* implicit */int) ((signed char) var_2))) : ((-(((/* implicit */int) var_4))))))), (max((((((/* implicit */_Bool) 1524186452U)) ? (((/* implicit */unsigned int) arr_27 [i_4] [i_4] [i_7])) : (1524186444U))), (2770780843U)))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    {
                        var_28 = ((/* implicit */_Bool) var_15);
                        arr_35 [i_4] [i_8] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) 2770780852U)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 2; i_11 < 18; i_11 += 1) 
                        {
                            var_29 &= ((/* implicit */short) var_11);
                            arr_39 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_4] [i_4] [i_8] [i_4] [i_4] [i_4])) >> (((max((arr_32 [i_8] [i_9] [i_10] [i_11]), (((/* implicit */unsigned long long int) (-(2770780851U)))))) - (10881111425039149095ULL)))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((long long int) (unsigned short)18999))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)183))) & (arr_13 [i_4] [i_8] [i_8] [i_9] [i_10] [i_4]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_36 [i_4] [i_4] [(signed char)6] [i_4] [i_4] [(short)7] [i_4])))))));
                            var_31 = ((/* implicit */unsigned int) var_1);
                            arr_43 [i_12] [i_9] [i_8] [i_8] [i_8] [i_4] = ((/* implicit */short) 2770780843U);
                        }
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_8 [(unsigned char)6] [(unsigned char)6] [i_8])))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (!(((((/* implicit */_Bool) 2770780851U)) || (((/* implicit */_Bool) arr_2 [i_8])))))))));
            /* LoopNest 2 */
            for (short i_13 = 1; i_13 < 18; i_13 += 1) 
            {
                for (unsigned int i_14 = 0; i_14 < 19; i_14 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) -9103130653791403925LL)) ? (arr_11 [i_4] [i_8] [i_13]) : (((/* implicit */long long int) var_9))))))));
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((1524186442U) / (1524186432U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(2770780851U)))) ? ((-(var_9))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_31 [i_8])))))))) : (max((((((/* implicit */_Bool) 1524186452U)) ? (arr_13 [i_4] [i_8] [i_13] [i_13 - 1] [i_14] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21247))))), (((/* implicit */unsigned long long int) var_0))))));
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)99)) ? (((1524186414U) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_4] [i_4] [(signed char)6])) | (var_13)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_7)))))))));
        }
        arr_49 [i_4] [i_4] = ((/* implicit */signed char) arr_26 [i_4]);
    }
    for (unsigned char i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(arr_30 [i_15] [i_15])))) | ((-(((var_6) << (((((/* implicit */int) (signed char)-101)) + (123)))))))));
        arr_52 [(signed char)3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -9103130653791403925LL)))))) > (arr_32 [i_15] [(signed char)15] [i_15] [i_15]));
        var_37 = ((/* implicit */unsigned char) max((var_37), (arr_47 [i_15] [i_15] [(short)10] [i_15])));
    }
    for (unsigned char i_16 = 0; i_16 < 19; i_16 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */signed char) arr_28 [(signed char)10] [(unsigned char)16] [(short)0]);
        /* LoopSeq 2 */
        for (unsigned short i_17 = 0; i_17 < 19; i_17 += 3) 
        {
            var_39 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((1524186459U) & (var_15)))) || (((/* implicit */_Bool) max((var_7), (((/* implicit */int) arr_3 [(_Bool)1]))))))));
            arr_57 [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [16] [i_17])) & (((/* implicit */int) (unsigned char)232)))) & (((((/* implicit */_Bool) 879388498)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)44289))))))) ? (((int) arr_28 [i_16] [i_16] [(short)18])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_16] [i_16] [i_17] [i_17])))))));
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 19; i_18 += 1) 
            {
                for (unsigned short i_19 = 0; i_19 < 19; i_19 += 3) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 19; i_20 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned short) var_13);
                            var_41 = ((/* implicit */_Bool) max((((arr_11 [12U] [13LL] [i_20]) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [11ULL] [(_Bool)1] [i_18]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_27 [i_17] [i_18] [i_19])))))));
                            var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_16] [i_18] [i_19])) ? (((/* implicit */int) arr_59 [(unsigned short)15] [i_18] [i_17])) : (((/* implicit */int) arr_59 [i_16] [i_16] [i_16])))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_21 = 0; i_21 < 19; i_21 += 1) 
        {
            arr_67 [i_16] [i_21] [i_21] = ((/* implicit */signed char) max((((arr_38 [i_21] [i_16] [i_21] [i_21] [i_21] [i_21]) ? (2041730924U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_21] [i_16] [(unsigned char)6] [i_16] [i_21] [i_21]))))), (((/* implicit */unsigned int) (~(((arr_55 [i_16]) ? (arr_37 [i_21] [i_21]) : (((/* implicit */int) (_Bool)1)))))))));
            var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)0)) ? (1524186423U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_16] [i_16] [i_16] [i_16] [i_16] [i_21] [i_21]))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_29 [i_16] [i_16]))))))) ? (max((4774396287093002093LL), (((/* implicit */long long int) (short)-11112)))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_40 [i_16] [i_16] [i_16] [i_21] [i_21] [i_16] [i_21])) ? (4294967295U) : (((/* implicit */unsigned int) var_13)))))))));
        }
        /* LoopNest 3 */
        for (short i_22 = 0; i_22 < 19; i_22 += 3) 
        {
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                for (signed char i_24 = 1; i_24 < 17; i_24 += 1) 
                {
                    {
                        arr_75 [(unsigned short)18] [i_22] [(unsigned short)14] [i_22] |= (~(((/* implicit */int) (unsigned short)44289)));
                        arr_76 [i_23] [i_23] [i_23] [i_22] = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)3968)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_47 [i_16] [i_22] [i_22] [i_24])) : (((/* implicit */int) (short)6718)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                    }
                } 
            } 
        } 
        var_44 = (-(max((((/* implicit */unsigned long long int) arr_46 [i_16] [(short)18] [i_16] [i_16])), (var_18))));
    }
    var_45 = ((/* implicit */signed char) (unsigned char)238);
    var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) var_17))));
    var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_18) : (var_6)));
}
