/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76784
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                var_16 = ((/* implicit */unsigned long long int) ((1734983434674883944ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [16ULL] [i_1] [i_2])) >> ((-(0ULL))))))));
                var_17 = ((/* implicit */unsigned int) -161527245);
            }
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    arr_16 [20ULL] [i_3] [9ULL] [9ULL] = (!(var_7));
                    var_18 = ((/* implicit */int) (-(arr_1 [i_4] [(_Bool)1])));
                    arr_17 [i_4] [i_0] [i_3] [i_1] [(short)12] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8191)))));
                    var_19 = (+(((/* implicit */int) (unsigned short)14282)));
                    arr_18 [i_4] [(unsigned char)17] [i_1] = ((/* implicit */unsigned char) (((+(4050618298492688251ULL))) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))) : (arr_1 [i_0] [i_4])))));
                }
                for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 4) 
                {
                    arr_22 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) ((arr_15 [i_5 - 1] [i_3] [i_1] [i_0] [15ULL] [i_0]) >> (((arr_15 [i_0] [i_0] [i_1] [i_3] [i_5 - 1] [i_5 + 1]) - (4547764726097207838ULL)))));
                    arr_23 [i_0] [i_1] [(unsigned char)5] [i_5] [i_0] [i_5] = ((/* implicit */_Bool) (~(1125786946)));
                }
                arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)18264);
                var_20 = ((/* implicit */short) (_Bool)1);
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) (_Bool)0);
                            arr_31 [i_0] [i_0] [18U] [i_0] [i_0] [i_6] = ((/* implicit */_Bool) (+(arr_15 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                            var_22 = ((/* implicit */long long int) ((arr_28 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]) > (arr_28 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (-(((var_15) << (((/* implicit */int) (_Bool)0)))))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                arr_35 [i_0] [(unsigned short)2] [(unsigned short)8] = ((/* implicit */int) ((arr_2 [i_0]) / (((unsigned long long int) arr_2 [i_0]))));
                var_24 = ((/* implicit */unsigned int) min((max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((int) var_12)))), (((/* implicit */int) ((arr_6 [i_0] [i_0] [(_Bool)1] [i_0]) && (((/* implicit */_Bool) arr_0 [10U] [i_0])))))));
                var_25 = ((/* implicit */short) var_1);
            }
            arr_36 [i_1] [20] [20] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) var_15))))))));
            /* LoopNest 2 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        arr_41 [i_9] [i_10] = ((/* implicit */unsigned short) (~(min((arr_12 [i_9 - 1] [i_9] [i_1]), (((/* implicit */unsigned int) var_0))))));
                        var_26 = ((/* implicit */short) min((((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_8 [12ULL] [i_1] [12ULL]))))) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (arr_19 [10ULL] [10ULL] [i_1] [i_1] [i_0] [12ULL]))) - (39350))))), (((/* implicit */int) ((_Bool) (-(arr_20 [i_0] [(short)17] [3] [i_10])))))));
                    }
                } 
            } 
        }
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) -1)), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (var_3)))) / (((((/* implicit */_Bool) arr_4 [i_0] [i_11 + 1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-7217)))) / (161527244)))) && (((_Bool) max((var_13), (((/* implicit */unsigned int) var_9))))))))));
        }
        var_29 -= ((/* implicit */unsigned long long int) var_11);
        arr_46 [20ULL] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned int) var_9)), (var_13))))), (((unsigned int) arr_0 [4U] [4U]))));
    }
    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (~((-(((/* implicit */int) ((signed char) (_Bool)1))))))))));
        arr_50 [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 134217472U)) : (arr_20 [i_12] [(signed char)11] [i_12] [i_12]))) << (((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) arr_6 [(short)5] [(short)5] [i_12] [i_12])))))))));
        arr_51 [21] = ((/* implicit */unsigned long long int) var_12);
        arr_52 [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_12] [i_12])))))) ? (((/* implicit */int) arr_14 [i_12] [(short)3] [(short)3] [i_12])) : (((int) arr_3 [i_12]))));
    }
    /* LoopSeq 1 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) var_6))));
        var_32 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (((arr_8 [i_13] [i_13] [17ULL]) >> ((((~(((/* implicit */int) arr_45 [i_13] [(unsigned char)0] [i_13])))) - (14319)))))));
    }
    var_33 = ((/* implicit */unsigned long long int) var_7);
    var_34 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 2 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_58 [i_14] = min((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_56 [i_14])) == (arr_57 [i_14])))), (((((/* implicit */_Bool) ((var_5) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */int) ((unsigned char) var_9))) : (arr_55 [i_14]))));
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 24; i_15 += 3) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                {
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((arr_59 [i_14]), (((/* implicit */unsigned long long int) var_7)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_14] [i_16] [(short)12] [i_14])))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)50036))))) : (((unsigned int) var_8))));
                    arr_65 [i_14] [i_15] [i_16] = ((((/* implicit */int) ((((/* implicit */int) var_12)) <= (var_3)))) > (((/* implicit */int) ((((long long int) var_14)) <= (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_14] [i_14] [(signed char)13] [(_Bool)1])))))));
                    arr_66 [i_14] [i_14] [i_16] [i_16] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((unsigned short) 190028459688990497ULL))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_14] [i_14])) ? (161527244) : (((/* implicit */int) (_Bool)0))))) ? (((190028459688990497ULL) / (((/* implicit */unsigned long long int) -1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)12288)) * (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 3) 
    {
        arr_69 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (min((((/* implicit */unsigned long long int) var_14)), (var_4)))))) ? (max(((-(((/* implicit */int) arr_34 [i_17] [i_17])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (var_8)))))) : (((/* implicit */int) ((min((1734983434674883944ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)496))))))))));
        arr_70 [i_17] [i_17] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)133)) << (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((arr_37 [i_17] [i_17]) << (((arr_2 [i_17]) - (7724699017336345322ULL)))))) : (arr_2 [i_17]));
    }
}
