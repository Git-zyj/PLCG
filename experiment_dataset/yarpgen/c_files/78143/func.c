/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78143
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
    var_13 = ((/* implicit */unsigned char) var_1);
    var_14 = ((short) (short)-10829);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((var_12) << ((((~(((/* implicit */int) arr_0 [i_0 - 1])))) + (33)))));
        var_16 &= var_3;
        var_17 = ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 883994635U))))) : (((/* implicit */int) arr_2 [i_0 - 2])))), (((/* implicit */int) max((var_11), (arr_1 [i_0 + 1]))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_18 = ((/* implicit */signed char) (!((!(arr_4 [i_0 + 1])))));
            /* LoopNest 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 3; i_3 < 16; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 - 1] [i_2] [i_0 - 2] [i_2] [14ULL]))) < (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_7))))))));
                            var_20 = ((/* implicit */short) 883994646U);
                            arr_12 [i_1] [i_3] [i_2 - 1] [i_2] [i_1] [i_0 - 1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(1279374040U))) >> (((((/* implicit */int) ((signed char) arr_10 [i_0 + 1] [i_1] [i_2] [i_1] [i_4]))) + (117)))))) ? (((/* implicit */int) ((_Bool) arr_4 [i_0 + 1]))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_2 - 1] [i_1] [i_2 - 1])) : (((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0] [i_1] [i_0]))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_6 + 1] [i_0 - 2])) == (((/* implicit */int) arr_17 [i_6 + 1] [i_0 - 1]))));
                        var_22 = ((/* implicit */_Bool) (+((~(3410972649U)))));
                        var_23 *= (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (12301201805688174041ULL))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((883994616U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0 - 1]))))) >> ((((+(((/* implicit */int) arr_3 [i_0] [i_5] [i_5])))) + (23142))))))));
        }
        var_25 = ((max(((-(383539843U))), (((/* implicit */unsigned int) arr_17 [i_0 - 2] [(signed char)5])))) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
    }
    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_8] [i_8] [i_8] [i_8])) + (((/* implicit */int) arr_2 [i_8]))));
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8] [(signed char)0] [i_8] [i_8] [i_8] [i_8]))) - (min((3410972649U), (((/* implicit */unsigned int) arr_18 [i_8] [(_Bool)1] [i_8] [i_8] [(_Bool)1] [i_8])))))))));
        arr_22 [i_8] [9U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_8] [i_8] [i_8] [i_8]))));
        arr_23 [i_8] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_18 [i_8] [(unsigned char)8] [i_8] [i_8] [i_8] [i_8])))), (((/* implicit */int) ((signed char) (short)7470)))));
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 2) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_10 - 1] [i_10 - 1] [i_10 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8345))) : (3911427453U)))), (var_5)));
                    var_29 = (-(((((unsigned long long int) arr_27 [i_8])) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 1]))))));
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (((!(((/* implicit */_Bool) (short)12466)))) ? ((~(28938896U))) : (3410972649U))))));
                }
            } 
        } 
    }
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!((_Bool)1))))));
        var_32 = ((/* implicit */signed char) max((var_32), (arr_30 [4ULL] [4ULL] [4ULL] [i_11])));
        /* LoopSeq 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_37 [i_11] [i_12] = ((/* implicit */signed char) (((((~(((/* implicit */int) arr_24 [i_11])))) + (2147483647))) << (((max((var_0), (((/* implicit */unsigned int) arr_10 [i_11] [(signed char)16] [i_11] [(short)4] [i_12])))) - (3513216061U)))));
            var_33 = ((/* implicit */long long int) (!(arr_35 [(short)3] [i_12] [i_12])));
        }
        /* vectorizable */
        for (unsigned int i_13 = 1; i_13 < 8; i_13 += 3) 
        {
            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_11 - 1] [i_13 - 1] [i_11 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_11]))) : (3410972649U))))));
            var_35 = ((/* implicit */short) arr_40 [i_11] [i_11] [i_11]);
        }
    }
    var_36 = ((/* implicit */_Bool) min((var_36), (var_4)));
    /* LoopSeq 3 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_37 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_42 [i_14]) < (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_14] [i_14]))))))) > (((((/* implicit */_Bool) var_3)) ? (arr_42 [(signed char)11]) : (arr_42 [i_14])))))) != (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                {
                    var_38 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_42 [i_16 - 1])) ? (arr_42 [i_16 - 1]) : (arr_42 [i_16 - 1])))));
                    var_39 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_43 [i_16 - 1])), (((3410972680U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [(short)2] [(short)2])))))))) ? (((min((arr_46 [i_14] [i_14] [(_Bool)0]), (((/* implicit */unsigned long long int) var_6)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 630738995U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)90))) : (-1LL)))))) : (((/* implicit */unsigned long long int) ((long long int) (unsigned short)2768)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_53 [i_14] [i_17] [i_16 - 1] [i_15] [i_16 - 1])) <= (((/* implicit */int) arr_53 [i_14] [i_15] [i_15] [i_15] [i_17]))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_18 = 1; i_18 < 21; i_18 += 1) /* same iter space */
                        {
                            var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2))))));
                            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (_Bool)1))));
                            var_43 = ((/* implicit */short) ((((/* implicit */int) arr_52 [i_16] [i_16 - 1] [i_18 - 1] [i_18 + 4] [i_18 - 1] [i_16 - 1])) << (((9940635941771878019ULL) - (9940635941771878019ULL)))));
                            var_44 += ((/* implicit */short) (~(((/* implicit */int) (short)-28496))));
                        }
                        for (unsigned long long int i_19 = 1; i_19 < 21; i_19 += 1) /* same iter space */
                        {
                            var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((signed char) arr_51 [3U] [i_16] [i_17] [i_16 - 1])))));
                            var_46 = ((/* implicit */short) (((-(((/* implicit */int) (unsigned char)94)))) - (((((/* implicit */_Bool) arr_52 [i_14] [20ULL] [i_15] [i_16 - 1] [i_17] [i_19 + 4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_44 [i_14] [(signed char)0]))))));
                        }
                        for (unsigned long long int i_20 = 1; i_20 < 21; i_20 += 1) /* same iter space */
                        {
                            var_47 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))) < (((unsigned int) 13937464678165133666ULL))));
                            var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((((/* implicit */_Bool) arr_54 [14U] [i_15] [i_16] [i_20 + 4] [i_20])) && (((/* implicit */_Bool) (short)-2682)))))));
                            var_49 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (arr_47 [i_14] [i_16 - 1] [i_20 + 2])));
                        }
                        for (short i_21 = 1; i_21 < 21; i_21 += 1) 
                        {
                            var_50 -= arr_48 [i_14] [(_Bool)1];
                            var_51 = ((/* implicit */signed char) ((((((/* implicit */int) arr_57 [i_15])) < (((/* implicit */int) arr_48 [i_14] [i_15])))) ? (((/* implicit */int) ((((/* implicit */int) arr_52 [i_14] [i_14] [i_15] [i_16] [i_17] [i_21 + 3])) >= (((/* implicit */int) arr_63 [i_14] [i_14] [19U] [i_14] [i_14]))))) : (((/* implicit */int) arr_53 [13U] [13U] [i_16 - 1] [i_15] [13U]))));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            var_52 &= ((/* implicit */unsigned long long int) arr_47 [i_14] [(short)4] [i_22]);
            /* LoopSeq 1 */
            for (signed char i_23 = 0; i_23 < 25; i_23 += 4) 
            {
                var_53 = ((max((arr_65 [i_14]), (arr_65 [i_22]))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_58 [i_22] [(signed char)13])) || (((/* implicit */_Bool) arr_50 [i_14] [i_22] [(short)7]))))));
                var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_63 [i_14] [i_14] [i_14] [i_22] [i_23]))))) && (((/* implicit */_Bool) arr_69 [i_22] [i_14]))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)2682))))) ? ((~(var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40))))))))));
                var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) var_11))));
                var_56 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_52 [i_14] [i_14] [i_14] [6U] [i_14] [i_14]))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_24 = 1; i_24 < 23; i_24 += 3) 
        {
            var_57 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_67 [i_14] [i_24 + 1] [i_24 + 2])) ? ((-(((/* implicit */int) var_4)))) : (((((/* implicit */int) (short)21229)) - (((/* implicit */int) (_Bool)1))))));
            arr_75 [i_24] [i_24] = ((/* implicit */short) ((arr_42 [i_24 + 2]) > (((/* implicit */long long int) var_2))));
        }
    }
    for (unsigned short i_25 = 0; i_25 < 15; i_25 += 4) 
    {
        var_58 = ((/* implicit */_Bool) min((var_58), (((/* implicit */_Bool) ((((/* implicit */int) (short)-8360)) & (((/* implicit */int) (_Bool)1)))))));
        var_59 = ((/* implicit */signed char) ((((_Bool) arr_68 [i_25])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_25] [i_25] [i_25]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_25] [i_25] [i_25] [i_25]))))))) : (max((arr_5 [i_25] [i_25] [i_25]), (((/* implicit */unsigned long long int) 351847591U))))));
        arr_80 [i_25] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_25] [i_25])) ? (arr_70 [i_25]) : (var_5)))) && (((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((((/* implicit */short) (signed char)127)), ((short)-32766)))))))));
    }
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
    {
        var_60 = ((/* implicit */short) min((var_60), (((/* implicit */short) (+(((/* implicit */int) (unsigned char)24)))))));
        var_61 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_43 [i_26])), (arr_53 [i_26] [i_26] [i_26] [2ULL] [i_26]))))) < (((((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)0), (arr_55 [i_26] [i_26] [10ULL] [i_26] [i_26]))))) / (1297089398U)))));
    }
}
