/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70193
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_2 [i_0] [i_0 - 1])), (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_9)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_0] = min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), ((+(((/* implicit */int) (unsigned short)33023))))))), (max((var_4), (((/* implicit */unsigned long long int) arr_4 [i_0 + 1])))));
                    var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_0 [i_2]), (arr_0 [i_1 + 1]))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [11ULL])) : (((/* implicit */int) var_6)))))));
                    arr_11 [i_0] [i_2] [i_0] [i_2] = (_Bool)0;
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            var_13 = ((/* implicit */unsigned long long int) arr_14 [i_4] [i_4] [(signed char)0]);
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_13 [i_4])))))))));
            var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_3] [i_4] [i_4]))));
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_16 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)-1)) ? (144115188075855871ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                arr_18 [i_5] [i_3] [i_3] = ((/* implicit */_Bool) arr_12 [i_3]);
                /* LoopNest 2 */
                for (short i_6 = 3; i_6 < 16; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        {
                            arr_25 [i_7] [i_4] [i_3] [i_4] [i_3] = (!(arr_21 [i_5] [i_5] [i_6 - 1] [i_6]));
                            var_17 = ((arr_14 [i_3] [i_3] [i_3]) ? (arr_20 [i_3] [i_4] [i_5] [i_6] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_3]))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) (+((~(10060546477254868959ULL)))));
            }
            for (short i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                var_19 = ((/* implicit */_Bool) arr_13 [i_4]);
                var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_21 [i_3] [(_Bool)1] [i_3] [i_3]))));
                arr_28 [i_3] [i_3] [i_3] = ((/* implicit */short) (((+(((/* implicit */int) var_3)))) + (((/* implicit */int) ((_Bool) arr_26 [i_3] [12ULL] [i_3] [i_3])))));
                /* LoopSeq 3 */
                for (unsigned char i_9 = 3; i_9 < 18; i_9 += 2) 
                {
                    arr_31 [i_3] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_4] [i_9 - 2] [i_9 + 1] [i_9 + 1]))));
                    var_21 = ((/* implicit */unsigned long long int) ((short) var_4));
                }
                for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_3] [(_Bool)1] [i_8] [i_10]))));
                    arr_35 [i_3] [18ULL] [i_8] [i_10] = ((/* implicit */short) (+(arr_13 [i_3])));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 1; i_11 < 16; i_11 += 2) 
                    {
                        arr_39 [i_3] [i_11] [i_3] [9ULL] [i_3] = arr_36 [i_11 + 3] [i_3] [14LL] [13ULL] [i_3] [i_3];
                        arr_40 [i_11] [i_11] [i_8] [i_10] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)16)) && (((/* implicit */_Bool) arr_37 [i_11] [i_3] [(unsigned short)14] [(unsigned short)14] [i_3])))))));
                    }
                    var_23 = (_Bool)0;
                }
                for (short i_12 = 4; i_12 < 17; i_12 += 2) 
                {
                    arr_43 [i_3] [i_3] [(_Bool)1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2986218434734301300ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)36070))));
                    arr_44 [i_3] [(short)17] [(_Bool)1] [i_12 - 3] [i_12] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_29 [i_3] [i_4])) : (var_4)))));
                }
            }
            arr_45 [i_3] [i_3] = ((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3] [i_3]);
        }
        var_24 = ((/* implicit */_Bool) (-(arr_12 [i_3])));
        var_25 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_3]))));
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 2) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    arr_51 [i_3] [i_13] = ((/* implicit */unsigned short) var_8);
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_7))))));
                        var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_3] [i_13]))));
                    }
                    for (long long int i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4)) ? (2986218434734301294ULL) : (6168103117473804754ULL)));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29466))) / (((((/* implicit */_Bool) 16885356139095356258ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3]))) : (2986218434734301276ULL)))));
                        var_30 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_46 [(_Bool)1] [i_14]))));
                        var_31 = ((/* implicit */signed char) arr_30 [i_13] [(unsigned short)14] [i_3] [(unsigned short)14]);
                    }
                    var_32 = (!((_Bool)0));
                    var_33 = ((((/* implicit */_Bool) (short)-30640)) ? (15460525638975250307ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26959))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 2) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (~(arr_12 [i_17]))))));
        var_35 = ((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_17] [(unsigned short)15] [i_17] [i_17]))));
        arr_60 [i_17] [i_17] = ((/* implicit */short) ((arr_27 [i_17] [i_17] [i_17]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_13 [i_17])));
    }
    for (short i_18 = 0; i_18 < 21; i_18 += 2) 
    {
        arr_63 [i_18] = ((/* implicit */short) (-((~(((/* implicit */int) min((((/* implicit */short) var_8)), (arr_62 [i_18]))))))));
        arr_64 [i_18] = ((/* implicit */unsigned long long int) ((_Bool) max((arr_61 [i_18]), (arr_61 [i_18]))));
        arr_65 [i_18] = ((/* implicit */_Bool) arr_61 [i_18]);
        /* LoopNest 2 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (signed char i_20 = 0; i_20 < 21; i_20 += 2) 
            {
                {
                    var_36 = ((/* implicit */short) (-(min((4322321079221322201ULL), (2986218434734301294ULL)))));
                    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) var_2)), (arr_61 [i_18]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)36051), (((/* implicit */unsigned short) arr_71 [i_20]))))))))))))));
                    arr_73 [i_18] [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (short)-13339))))) ? (((/* implicit */int) arr_68 [i_18] [i_20])) : ((((_Bool)1) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (short)9944))))))));
                    var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) var_2))));
                }
            } 
        } 
    }
    var_39 = ((/* implicit */unsigned long long int) var_6);
    var_40 = ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)1)), (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_1))))));
}
