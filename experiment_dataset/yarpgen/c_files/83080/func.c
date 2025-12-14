/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83080
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
    var_19 = ((/* implicit */long long int) var_11);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) arr_1 [i_0])));
        var_21 = ((/* implicit */int) ((unsigned long long int) ((long long int) max((arr_1 [(signed char)5]), (((/* implicit */short) (signed char)37))))));
    }
    for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) arr_0 [i_1] [i_1]);
        var_23 = ((/* implicit */unsigned short) ((unsigned int) arr_3 [i_1 + 1]));
    }
    var_24 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 1 */
    for (int i_2 = 2; i_2 < 15; i_2 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((int) max((arr_4 [i_2 + 1] [i_2 + 1]), (((/* implicit */unsigned long long int) 65011712))))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            var_26 = ((/* implicit */unsigned long long int) arr_6 [16ULL]);
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                var_27 = arr_8 [i_4] [(_Bool)1] [(_Bool)1];
                var_28 = ((/* implicit */unsigned short) arr_6 [i_2 + 3]);
                var_29 = ((/* implicit */unsigned int) arr_6 [i_2]);
                var_30 *= ((/* implicit */unsigned char) arr_7 [(signed char)13]);
            }
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_7 [i_2]))));
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    var_32 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_2] [i_3] [i_5])) ^ (arr_14 [i_2 + 1] [(unsigned char)8] [(unsigned char)8] [7U])))), (((arr_5 [(unsigned char)10]) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2])))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 3685409455U)))) + (max((arr_7 [i_2 - 2]), (((/* implicit */unsigned long long int) arr_9 [i_6]))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 4; i_7 < 17; i_7 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned char) ((signed char) max((arr_4 [i_7 - 1] [i_2 + 3]), (arr_4 [i_7 - 3] [i_2 - 1]))));
                        var_34 = ((/* implicit */unsigned long long int) arr_16 [i_2] [i_2] [i_2] [1LL] [(unsigned char)8]);
                    }
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        var_35 = ((/* implicit */signed char) ((((long long int) arr_6 [i_2 + 2])) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_15 [i_2 + 1] [i_2 + 3] [i_2 - 2]))))));
                        var_36 = ((/* implicit */unsigned long long int) arr_9 [i_2 + 1]);
                    }
                    var_37 -= ((/* implicit */unsigned long long int) ((arr_16 [i_2] [(signed char)14] [i_5] [i_6] [i_5]) && (((/* implicit */_Bool) arr_4 [i_2] [i_6]))));
                    var_38 = ((/* implicit */signed char) max(((~(6416751592461750630ULL))), (((/* implicit */unsigned long long int) (signed char)101))));
                    var_39 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_2] [i_3] [i_3] [i_6]))));
                }
                for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    var_40 ^= ((/* implicit */int) ((short) ((long long int) arr_4 [i_2] [i_2])));
                    var_41 = ((/* implicit */_Bool) max((((/* implicit */int) ((short) max((-7253925595208811669LL), (((/* implicit */long long int) arr_13 [i_2 - 2] [i_2 - 2] [i_3] [i_5] [7ULL] [i_9])))))), ((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) arr_6 [i_2])))))))));
                }
                var_42 += ((/* implicit */short) arr_6 [i_2]);
            }
            for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                var_43 = ((/* implicit */_Bool) arr_8 [i_2 - 2] [(short)6] [0LL]);
                var_44 = ((/* implicit */unsigned long long int) arr_12 [i_2 - 2] [i_2]);
                var_45 = arr_24 [i_2] [i_3] [i_10] [i_2 - 1];
            }
            for (unsigned int i_11 = 1; i_11 < 16; i_11 += 1) 
            {
                var_46 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_19 [i_2] [i_2] [i_2] [i_3] [i_11]), (((/* implicit */short) ((signed char) (short)2157))))))) > (((((/* implicit */unsigned long long int) 2923863330U)) % (((unsigned long long int) arr_9 [i_2]))))));
                var_47 *= ((/* implicit */_Bool) arr_9 [i_2]);
                var_48 = ((/* implicit */unsigned long long int) 2960480122U);
            }
            /* LoopSeq 1 */
            for (long long int i_12 = 2; i_12 < 14; i_12 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_49 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (signed char)-102))))));
                    var_50 ^= ((/* implicit */unsigned long long int) min((arr_21 [i_2] [i_2] [i_12 + 3] [5ULL]), (((/* implicit */unsigned char) arr_27 [i_2 + 1] [i_3] [i_2 + 3] [i_13]))));
                    var_51 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_22 [i_2 + 2])) ^ (arr_12 [i_12 + 3] [i_2 - 1])))));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_14 = 1; i_14 < 17; i_14 += 3) 
                {
                    var_52 = ((/* implicit */int) (~((-((~(808357771389587107ULL)))))));
                    var_53 += ((/* implicit */unsigned long long int) 504);
                }
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    var_54 = ((/* implicit */unsigned long long int) (-(((int) arr_14 [i_15 - 1] [(short)11] [i_12 - 2] [(short)11]))));
                    var_55 = ((/* implicit */long long int) arr_17 [i_2] [(short)14] [i_12] [i_15] [i_2] [i_12]);
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_56 = ((/* implicit */unsigned long long int) arr_5 [i_2 - 1]);
                        var_57 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)26), (((/* implicit */unsigned char) arr_25 [i_2])))))) != ((-(((arr_24 [i_2] [i_3] [i_15] [i_3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_58 = (+(((/* implicit */int) arr_36 [i_17] [i_12] [i_2] [i_2])));
                        var_59 = ((/* implicit */_Bool) max((var_59), (((/* implicit */_Bool) arr_25 [i_3]))));
                        var_60 &= ((/* implicit */unsigned char) ((unsigned long long int) ((short) (-(((/* implicit */int) arr_33 [i_2] [i_2] [i_2] [i_15]))))));
                        var_61 = ((unsigned char) arr_20 [i_12 - 2] [i_12 - 2] [i_12] [i_2]);
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_18 = 1; i_18 < 17; i_18 += 3) 
                {
                    var_62 = ((/* implicit */short) ((((/* implicit */int) arr_32 [i_18 - 1] [i_12 - 2])) < (((/* implicit */int) arr_32 [i_18 - 1] [i_12 + 2]))));
                    var_63 = ((/* implicit */unsigned long long int) arr_41 [i_2 + 2] [i_3] [i_12 + 4] [i_18] [i_18] [i_18 + 1]);
                }
                var_64 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_12]))));
                var_65 = ((/* implicit */_Bool) ((signed char) ((unsigned long long int) min((((/* implicit */unsigned long long int) (signed char)124)), (arr_18 [i_2] [i_2] [(unsigned char)7] [i_12] [i_12])))));
                var_66 = ((/* implicit */long long int) min((((/* implicit */int) ((arr_20 [i_2 + 1] [i_2 - 2] [i_2 + 2] [i_2]) != (((/* implicit */int) (signed char)-3))))), (max((arr_20 [i_2 + 2] [i_2] [i_2 + 3] [i_2]), (arr_20 [i_2 - 2] [i_2] [i_2 + 3] [i_2])))));
            }
        }
    }
}
