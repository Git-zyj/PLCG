/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70554
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
    var_19 = ((/* implicit */unsigned long long int) ((signed char) var_4));
    var_20 = ((((/* implicit */_Bool) 1345427835208725305ULL)) ? (min((((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (unsigned short)1481)) : (((/* implicit */int) (unsigned char)204)))), (((/* implicit */int) ((unsigned short) (unsigned short)64039))))) : (((/* implicit */int) (unsigned short)57693)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) min(((unsigned short)9), (arr_0 [i_0] [i_0])))) : (((/* implicit */int) min((var_4), (arr_0 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 4; i_1 < 14; i_1 += 3) /* same iter space */
        {
            arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)57712)) ? (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (5895911053095216714ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)-79))))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1 - 3] [i_1] [i_1 - 3])) ? (arr_7 [i_1 - 4] [i_1 + 1] [i_1 - 1]) : (arr_7 [i_1 + 2] [i_1 + 2] [i_1 - 1]))))));
                            arr_15 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (arr_10 [i_0] [i_0] [(_Bool)1] [i_0] [i_0]))) ? ((~(((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) ((arr_1 [i_1] [i_4]) >= (arr_1 [i_2] [i_0])))));
                            arr_16 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 2])) ? (var_13) : (((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2]))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_0] [10] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (arr_7 [i_1] [i_1 - 4] [i_2]))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */signed char) min((var_23), (var_18)));
        }
        /* vectorizable */
        for (short i_5 = 4; i_5 < 14; i_5 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)14] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (644619613U)))) ? ((~(((/* implicit */int) (unsigned short)7831)))) : (((/* implicit */int) var_18))));
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                arr_21 [i_0] [i_5] [i_5 + 2] = ((int) ((((/* implicit */_Bool) (unsigned short)7816)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 + 1] [i_6]))) : (14865120233845919412ULL)));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (int i_8 = 3; i_8 < 12; i_8 += 2) 
                    {
                        {
                            var_25 -= ((/* implicit */unsigned int) ((293705363U) == (((/* implicit */unsigned int) -23))));
                            arr_26 [i_0] [i_5] [i_0] [i_7] [i_8 + 4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((var_13) & (((/* implicit */int) var_5))))) | (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57715))) : (7459764441308692131ULL)))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_5 - 4] [i_8 + 2] [i_7])) ? (arr_13 [i_5 - 3] [(unsigned short)0] [i_8 + 2] [(unsigned short)4] [i_8 + 4]) : (((/* implicit */unsigned long long int) var_13)))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 2) 
            {
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-92)) ? (6345543995428262529ULL) : (((/* implicit */unsigned long long int) 485682507U)))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    for (int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        {
                            arr_34 [i_0] [i_10] [i_0] [i_5] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_17 [i_5 - 3] [i_9 - 1]))));
                            arr_35 [i_0] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_0] [i_10] = ((/* implicit */unsigned short) ((_Bool) (unsigned short)33185));
                        }
                    } 
                } 
            }
            arr_36 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 11031949809537893996ULL)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) 7090431584270498068LL))))));
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((short) ((((/* implicit */int) arr_30 [i_0] [i_5] [i_0] [i_0])) ^ (((/* implicit */int) var_0))))))));
        }
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) (unsigned short)3584)) : (((/* implicit */int) (short)7344)))) % (((/* implicit */int) ((unsigned short) arr_23 [i_0] [i_0] [i_0] [i_0]))))))));
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) arr_20 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_18), (((/* implicit */signed char) (_Bool)1)))))) : (((((/* implicit */_Bool) 5895911053095216714ULL)) ? (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((((_Bool) 1189123187)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7344)) ? (-977853605) : (((/* implicit */int) (unsigned short)32244))))) : (max((((/* implicit */unsigned long long int) (unsigned short)7750)), (12891489598070863447ULL))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (var_17) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101))) : (644619591U))))))));
        arr_37 [i_0] [i_0] = var_1;
    }
}
