/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96371
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
    var_10 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                var_11 = ((/* implicit */signed char) max((-1696546607), (-1696546607)));
                var_12 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((_Bool) max((4213548535098320435ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))), (max((((var_4) << (((-1696546607) + (1696546634))))), (((/* implicit */unsigned long long int) -1))))));
                var_13 *= arr_1 [i_0];
                arr_6 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) var_0);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) 3654168341329208696ULL);
            }
            var_14 -= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (((short) 9520606502305876161ULL)))))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_15 = (((!(arr_9 [i_0] [i_3] [i_3]))) && ((!(((/* implicit */_Bool) var_2)))));
            var_16 = ((/* implicit */_Bool) ((unsigned long long int) 14233195538611231186ULL));
            /* LoopSeq 4 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_4] [i_0] [i_0]))));
                arr_12 [i_3] [i_3] = var_5;
                var_18 = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_9 [i_0] [i_3] [i_3]))))));
            }
            for (signed char i_5 = 3; i_5 < 22; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)511))))) : (((((/* implicit */_Bool) 1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [(_Bool)1] [i_3]))))));
                    arr_17 [i_0] [(unsigned char)9] [(signed char)16] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)));
                }
                var_20 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4))));
                var_21 -= ((/* implicit */_Bool) var_8);
            }
            for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                arr_22 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_0);
                var_22 = ((/* implicit */int) var_3);
            }
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_23 += ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                var_24 *= ((/* implicit */short) arr_19 [i_0]);
                var_25 -= (+((+(((/* implicit */int) var_0)))));
                arr_26 [i_3] [i_3] [i_3] = ((/* implicit */signed char) arr_8 [i_0]);
                /* LoopSeq 1 */
                for (short i_9 = 2; i_9 < 23; i_9 += 4) 
                {
                    arr_29 [i_0] [i_3] [i_3] [i_9 + 2] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) ((short) (signed char)-121))) : (((/* implicit */int) ((signed char) var_3)))));
                    var_26 = ((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_0] [i_0] [i_9]));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_8])) ? (((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-16939))));
                }
            }
            /* LoopSeq 3 */
            for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                var_28 ^= ((((/* implicit */_Bool) -478019896)) ? (((/* implicit */int) (unsigned char)73)) : (-2070479128));
                var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) 4503599627368448ULL)) ? (((/* implicit */int) arr_11 [i_3] [i_3] [i_10])) : (((/* implicit */int) (signed char)-118)))) / (((/* implicit */int) var_2))));
                var_30 = ((/* implicit */unsigned long long int) (_Bool)0);
            }
            for (short i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                var_31 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_13 [i_0] [i_3] [9])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                var_32 ^= ((/* implicit */unsigned char) var_7);
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_33 = ((/* implicit */_Bool) ((int) (short)-32180));
                    /* LoopSeq 2 */
                    for (short i_13 = 2; i_13 < 24; i_13 += 2) 
                    {
                        var_34 = var_6;
                        arr_42 [i_0] [i_12] [i_11] [i_12] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)16945)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)29155))));
                        arr_43 [i_0] [i_3] [i_3] [i_12] [i_13 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (short)28823))))) : (((((/* implicit */_Bool) arr_25 [i_12] [i_11] [i_3])) ? (((/* implicit */int) var_0)) : (var_1)))));
                        var_35 = ((/* implicit */signed char) arr_36 [i_0] [i_3] [i_11] [i_13]);
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) arr_33 [i_0] [i_3] [i_13] [18ULL]))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        var_37 *= ((/* implicit */unsigned long long int) ((_Bool) arr_9 [i_0] [i_14] [i_0]));
                        var_38 = ((/* implicit */_Bool) ((int) arr_34 [i_0] [i_3] [i_11] [i_3]));
                    }
                    var_39 = arr_3 [i_0] [i_3] [i_11];
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_40 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0] [i_3] [i_0] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */int) (short)16935)) : (arr_39 [i_0] [i_3] [(unsigned char)2] [i_3] [i_0] [i_3] [i_15])));
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 1; i_16 < 24; i_16 += 3) 
                    {
                        var_41 = ((/* implicit */short) (unsigned short)18222);
                        arr_52 [i_0] [i_3] [i_11] [i_15] = var_6;
                        arr_53 [i_3] = var_0;
                        arr_54 [(unsigned short)3] [(unsigned short)18] [i_3] [i_15] [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                    }
                }
                var_42 -= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
            }
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                var_43 = ((/* implicit */_Bool) ((unsigned long long int) var_4));
                var_44 = ((int) var_5);
            }
        }
        var_45 = ((/* implicit */signed char) min((var_6), ((((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_0))))))));
        var_46 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */int) var_3))))), (max((var_4), (((/* implicit */unsigned long long int) (unsigned short)8064)))))) / (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_3 [9ULL] [i_0] [i_0])) : (var_6))))));
        arr_58 [i_0] = ((/* implicit */_Bool) var_9);
    }
    for (signed char i_18 = 0; i_18 < 25; i_18 += 2) /* same iter space */
    {
        var_47 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (signed char)-87))) / (((/* implicit */int) ((_Bool) (_Bool)1)))));
        arr_62 [(_Bool)1] [(_Bool)1] = ((/* implicit */int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), ((unsigned short)40448)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_44 [i_18] [i_18]))))), (((/* implicit */unsigned long long int) (_Bool)1))));
        arr_63 [i_18] = ((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (15854888622535796779ULL)))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) : ((+(((/* implicit */int) var_9))))))));
    }
    var_48 = ((((/* implicit */unsigned long long int) ((/* implicit */int) min((min(((unsigned char)30), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (var_1)))) ? (((unsigned long long int) var_1)) : (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
}
