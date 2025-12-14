/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88391
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0]))));
                        arr_14 [i_0] [i_3] = ((/* implicit */unsigned int) arr_4 [i_2] [i_0]);
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26382)))))) >= (((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2]))) : (var_2)))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */long long int) ((arr_11 [i_0] [i_0] [i_0]) <= (arr_11 [i_0] [i_0] [i_0])));
        var_15 = ((/* implicit */unsigned char) (-(var_2)));
        arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (arr_5 [i_0] [i_0])));
    }
    for (unsigned short i_4 = 2; i_4 < 19; i_4 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
        var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)26382))))) / (min((arr_11 [i_4] [(_Bool)1] [i_4]), (((/* implicit */long long int) 3705340071U))))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_4] [i_4 + 1])) * (((/* implicit */int) arr_8 [i_4] [i_4] [i_4 - 2] [i_4 + 1]))))) ? (arr_11 [i_4 + 1] [18U] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [(short)10]) == (((/* implicit */unsigned long long int) 995929627705648656LL))))))));
        arr_20 [i_4] = ((/* implicit */unsigned int) min(((-(arr_10 [4U]))), (((/* implicit */int) arr_6 [i_4 + 1] [i_4 + 1]))));
    }
    for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) arr_1 [i_7]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
                        {
                            arr_35 [i_5] [i_6] [i_7] [i_7] [i_8] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_5] [i_7])) && (((/* implicit */_Bool) arr_3 [i_7]))));
                            var_20 = ((/* implicit */unsigned char) arr_6 [i_5] [i_5]);
                            arr_36 [i_5] [i_5] [12LL] [i_7] [i_7] [i_7] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7]))) : (arr_33 [i_7] [i_6] [i_6] [(short)9] [(short)9] [i_9])));
                            arr_37 [i_5] [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -1996276167085175680LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_7]))) : (arr_11 [i_6] [i_7] [i_6])))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_26 [(unsigned char)14]))))) < (var_0)));
                            var_22 = (~(((unsigned long long int) -7581695517082199017LL)));
                            arr_42 [i_5] [i_6] [i_7] [i_5] [17U] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_32 [i_7] [i_7] [i_7]))))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                        {
                            var_23 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)20866))))));
                            arr_45 [i_6] [i_7] [20LL] [i_5] = ((/* implicit */unsigned char) arr_44 [i_5] [i_6] [i_7] [i_7] [i_11]);
                            arr_46 [i_7] [i_6] [i_7] [i_7] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_11])) >> (((((/* implicit */int) arr_25 [i_11])) - (19936)))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            arr_51 [i_5] [i_7] [i_7] [i_8] [i_12] [i_6] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_7] [i_6] [i_7] [i_7])) - (((/* implicit */int) arr_12 [(unsigned short)16] [i_6] [i_7] [i_7]))));
                            arr_52 [i_5] [i_7] [i_12] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_1))))) * ((-(4294967293U)))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_8] [(unsigned short)6] [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_44 [i_5] [i_12] [8U] [i_6] [i_6])));
                            arr_53 [i_7] [i_8] [i_7] [i_6] [i_7] = ((/* implicit */unsigned int) 995929627705648656LL);
                        }
                        arr_54 [i_7] [i_6] [i_7] [i_7] [i_8] [3ULL] = ((((/* implicit */_Bool) arr_3 [i_7])) ? (arr_49 [i_7] [i_7] [i_6] [i_6] [i_5] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_7] [i_7] [i_7] [i_7] [i_7]))));
                        var_25 = ((/* implicit */unsigned short) (-((~(arr_3 [i_7])))));
                        arr_55 [i_7] [i_7] [i_7] [i_6] [i_7] = ((/* implicit */long long int) var_9);
                        var_26 = ((/* implicit */unsigned char) (!(var_1)));
                    }
                }
            } 
        } 
        arr_56 [4LL] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_49 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7384423483898062866ULL)))))) : (arr_5 [i_5] [i_5])))));
    }
    var_27 = ((/* implicit */unsigned long long int) (!((!(var_1)))));
}
