/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91106
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
    var_19 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            var_20 = (signed char)-89;
            var_21 |= ((((/* implicit */long long int) ((/* implicit */int) var_8))) & (var_16));
        }
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_22 -= ((/* implicit */signed char) max((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)10)), (arr_0 [i_0] [i_2])))), (max((((/* implicit */int) var_17)), (var_3)))));
            arr_9 [i_0] [(unsigned short)13] [i_0] = ((/* implicit */_Bool) -780701194546444092LL);
        }
        for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */int) (signed char)10);
                        var_24 |= ((/* implicit */unsigned long long int) 1502060139U);
                        var_25 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                    }
                } 
            } 
            arr_19 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_12 [i_0] [i_3] [i_3]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_6 = 3; i_6 < 16; i_6 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_7 = 1; i_7 < 18; i_7 += 4) 
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_7 + 1] [i_0] [(_Bool)1]))) : (1502060131U)));
                    var_27 += var_15;
                }
                for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 3; i_9 < 17; i_9 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) 1146285067))));
                        arr_32 [i_0] [i_3] [i_3] [i_6] [i_3] [i_3] [i_9 - 2] = ((/* implicit */int) -780701194546444092LL);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */int) arr_27 [(signed char)17] [i_3]);
                        arr_35 [i_3] [i_3] [i_3] [i_6] [i_8] [1U] = ((/* implicit */unsigned char) ((arr_26 [i_8] [i_3] [i_6] [i_3] [i_3]) > (((/* implicit */unsigned long long int) var_14))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)10)) << (((1146285074) - (1146285063)))));
                        var_31 = ((/* implicit */long long int) (+(2147483392)));
                    }
                    arr_36 [i_6] [i_0] [i_6] [i_6] [i_3] |= ((/* implicit */unsigned char) ((-4435692017464004600LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                    arr_37 [i_0] [i_3] = ((/* implicit */unsigned short) (signed char)82);
                }
                for (long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    var_32 = ((/* implicit */short) -780701194546444092LL);
                    arr_42 [i_0] [i_11] [i_3] [i_3] = ((/* implicit */signed char) var_16);
                }
                /* LoopSeq 3 */
                for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        arr_48 [9LL] [i_3] [2LL] [i_12] [9LL] [i_3] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) arr_14 [(unsigned char)8] [i_3] [i_6 - 3]))));
                        arr_49 [i_6] [i_3] [i_6] [i_3] [i_3] [i_3] [i_13] = ((/* implicit */signed char) var_12);
                        arr_50 [i_3] = ((/* implicit */_Bool) arr_40 [i_6 - 1] [i_6 - 1] [(unsigned short)16]);
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) arr_47 [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6 + 2] [i_6] [i_6 + 2]);
                        arr_53 [i_3] [i_0] [i_12] [i_6] [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) 780701194546444078LL);
                    }
                    for (unsigned int i_15 = 2; i_15 < 18; i_15 += 3) 
                    {
                        var_34 -= ((/* implicit */unsigned int) ((286833404) % (((/* implicit */int) (unsigned char)31))));
                        var_35 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_55 [i_0] [i_12] [i_6] [i_3] [i_3]))));
                        arr_56 [i_0] [i_3] [(unsigned char)5] [i_12] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0] [i_3] [i_0] [i_0] [i_15])) ? (arr_40 [i_3] [i_6 - 3] [i_3]) : (var_6)));
                    }
                    arr_57 [i_0] [i_3] [i_3] [i_3] [i_12] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */unsigned int) -1146285068)) : (3438422660U)));
                    arr_58 [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & (var_9)));
                }
                for (short i_16 = 2; i_16 < 17; i_16 += 2) /* same iter space */
                {
                    arr_61 [i_16] [i_3] [i_3] [i_0] = ((/* implicit */signed char) (_Bool)1);
                    arr_62 [i_3] = var_10;
                    var_36 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-5845))));
                    /* LoopSeq 2 */
                    for (signed char i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        var_37 -= ((/* implicit */unsigned long long int) var_17);
                        var_38 = ((/* implicit */signed char) (+(((/* implicit */int) arr_20 [i_6 - 3] [i_16 - 2]))));
                    }
                    for (signed char i_18 = 1; i_18 < 18; i_18 += 3) 
                    {
                        arr_69 [i_16] [i_3] [i_6] [i_0] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) < (var_5)));
                        var_39 = ((/* implicit */unsigned char) var_3);
                        arr_70 [i_3] [i_3] [i_3] [i_6] [i_16] [i_6] [i_3] = ((/* implicit */_Bool) var_12);
                        var_40 -= ((/* implicit */unsigned char) arr_28 [i_16 + 2]);
                    }
                }
                for (short i_19 = 2; i_19 < 17; i_19 += 2) /* same iter space */
                {
                    var_41 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)224)) / (var_3)));
                    var_42 = ((/* implicit */unsigned char) (-(-21LL)));
                }
            }
            arr_74 [i_3] = ((/* implicit */_Bool) (unsigned char)220);
        }
        for (long long int i_20 = 4; i_20 < 16; i_20 += 1) 
        {
            var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) min((var_16), (((/* implicit */long long int) max((var_14), ((-(856544636U)))))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_21 = 3; i_21 < 16; i_21 += 2) 
            {
                arr_81 [i_20] = ((/* implicit */signed char) (unsigned char)220);
                var_44 = ((/* implicit */signed char) (+(3438422660U)));
                arr_82 [i_0] [i_20] [i_20] [i_21 + 2] = ((/* implicit */_Bool) arr_54 [i_20] [i_20] [i_21] [i_20]);
                arr_83 [i_20] = 2147483647;
            }
            arr_84 [i_20] [i_20] = ((/* implicit */unsigned short) 907292782241676125ULL);
            arr_85 [11ULL] [i_20] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_8)), (var_5)));
        }
        arr_86 [i_0] [i_0] = ((/* implicit */signed char) var_4);
    }
}
