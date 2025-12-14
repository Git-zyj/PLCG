/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65941
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))))), (arr_4 [i_1] [i_0 + 1] [i_1])));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 2])))), (((((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_1])))) >> (((-1069747497) + (1069747502)))))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((/* implicit */int) max((((((/* implicit */int) (signed char)-13)) == (((/* implicit */int) (signed char)-29)))), ((_Bool)1)))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_1])) - (((/* implicit */int) (signed char)-9))))) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2])) : (((/* implicit */int) max((((/* implicit */short) arr_1 [i_1] [i_0])), (arr_3 [i_0] [i_1])))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 4; i_2 < 22; i_2 += 4) 
    {
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (-605419422326249117LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_2 + 1]))))))))));
        arr_10 [i_2 - 3] = ((/* implicit */int) ((unsigned long long int) (unsigned short)32236));
    }
    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
        {
            arr_15 [i_3] = ((/* implicit */unsigned short) arr_3 [6LL] [i_4]);
            /* LoopNest 3 */
            for (short i_5 = 2; i_5 < 16; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        {
                            arr_24 [i_7] [i_7] [i_3] = ((/* implicit */_Bool) arr_11 [i_3]);
                            arr_25 [i_7] [i_3] [i_5 + 3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) | (arr_22 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 3])));
                            var_22 *= ((/* implicit */_Bool) arr_4 [i_3 + 1] [i_3 + 1] [i_7]);
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_17))));
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3 - 3] [i_3 + 1] [4ULL])) ? (arr_19 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 2] [i_3 - 2]) : (((/* implicit */int) arr_4 [i_3 - 1] [i_3 - 2] [(unsigned char)16]))));
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    var_25 *= (signed char)-38;
                    /* LoopSeq 2 */
                    for (short i_10 = 1; i_10 < 18; i_10 += 3) 
                    {
                        arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) (unsigned char)208);
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((arr_20 [i_3 - 1] [i_3 - 1]) > (arr_20 [i_3 - 3] [i_3 - 1]))))));
                    }
                    for (short i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        arr_36 [i_3] [i_4] [i_8] [i_9] [i_11] = ((/* implicit */unsigned int) (unsigned char)221);
                        arr_37 [i_3] [i_3] [i_8] [(signed char)15] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_3] [i_3 - 3] [i_3 - 3] [i_3 - 3] [i_3] [i_3 - 3])) ? (arr_34 [17LL] [i_3 - 1] [i_3] [i_3 - 2] [17LL] [i_3 - 1]) : (((/* implicit */unsigned long long int) arr_8 [i_3]))));
                        var_27 -= ((/* implicit */long long int) (unsigned char)213);
                        arr_38 [i_3] [(short)2] [i_8] [i_4] [i_3] = ((/* implicit */long long int) (unsigned short)18);
                        var_28 -= ((/* implicit */unsigned long long int) ((arr_27 [i_3] [i_11] [i_3] [i_3]) + (((/* implicit */unsigned int) arr_13 [i_3] [i_3]))));
                    }
                }
                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_3 - 2] [i_3 - 1])))))));
            }
            for (short i_12 = 0; i_12 < 20; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_13 = 1; i_13 < 19; i_13 += 4) 
                {
                    for (short i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        {
                            arr_47 [i_3] [i_13 + 1] [i_12] [i_12] [i_4] [i_3] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                            arr_48 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned long long int) arr_35 [i_3]));
                            var_30 = ((long long int) arr_14 [i_13 - 1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        {
                            arr_53 [i_4] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) (+(arr_49 [i_3] [i_3 - 2] [i_3] [i_3 - 2])));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_16] [i_3] [i_3] [i_12] [i_3] [i_3 + 1]))) : (arr_44 [i_16] [i_15] [i_4])))) ? (((/* implicit */unsigned long long int) arr_32 [i_3 - 3] [i_3 - 3] [i_3 + 1] [i_3 - 3])) : (var_19)));
                        }
                    } 
                } 
                arr_54 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_31 [i_12] [i_4] [i_3]))) ? (((/* implicit */int) arr_12 [i_3])) : (arr_50 [3U] [i_3 - 2] [i_3 - 1] [i_4])));
                arr_55 [i_12] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_3] [i_3 - 2] [i_3 - 2] [(_Bool)1])) ? (((/* implicit */int) arr_23 [i_3 + 1] [i_3 + 1] [i_3 - 3] [(signed char)10])) : (((/* implicit */int) arr_23 [i_3] [i_3 - 3] [i_3 - 1] [i_3]))));
                arr_56 [i_3] [19LL] [i_3] [i_3] = ((/* implicit */signed char) arr_28 [i_12] [i_4] [i_3]);
            }
        }
        for (long long int i_17 = 0; i_17 < 20; i_17 += 3) /* same iter space */
        {
            var_32 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_26 [i_17] [i_3] [i_3]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)159))))))))));
            arr_59 [i_3] [i_3] = ((/* implicit */_Bool) ((max((arr_11 [i_3]), (((/* implicit */long long int) (signed char)26)))) | (((/* implicit */long long int) arr_18 [i_17] [i_3] [i_3] [(short)19]))));
            arr_60 [i_3] = ((/* implicit */int) max((((signed char) arr_17 [i_3] [i_3 - 1] [i_3 + 1])), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_17] [i_3] [(unsigned short)3])))))));
        }
        arr_61 [i_3] [i_3] = ((/* implicit */int) ((long long int) (unsigned char)243));
        arr_62 [i_3] = max(((unsigned short)908), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)115)) || (((/* implicit */_Bool) arr_49 [i_3 - 3] [i_3] [i_3 - 3] [i_3]))))));
    }
}
