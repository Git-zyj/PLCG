/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94050
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
    var_18 = ((/* implicit */unsigned short) var_4);
    var_19 = ((/* implicit */unsigned int) ((signed char) var_15));
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294967232U))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-85)) || (((/* implicit */_Bool) arr_1 [i_0])))) && ((!(((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_1] [i_0]))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 2; i_3 < 21; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 2; i_4 < 20; i_4 += 4) 
                    {
                        var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (signed char)-37))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 8210742539667896719LL)) ? (2935580022U) : (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2] [i_3 + 1])))))));
                        var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)30228)) || (((/* implicit */_Bool) arr_1 [i_1]))));
                    }
                    var_25 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_6 [i_2])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [9U] [i_3])))))));
                }
                var_26 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)49152)) + (((/* implicit */int) (signed char)-9))));
            }
            var_27 = (unsigned short)35308;
        }
        for (int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                var_28 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) (short)-26208)))));
                var_29 = ((/* implicit */int) (((~(arr_2 [i_0] [18U]))) >= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_5] [i_5])))));
                var_30 = ((/* implicit */unsigned short) arr_1 [i_0]);
            }
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_8 = 3; i_8 < 19; i_8 += 2) 
                {
                    arr_26 [i_5] [i_5] [i_7] [i_0] [i_7] [(signed char)2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((arr_18 [i_8 + 1] [i_8 - 1] [i_8 - 2] [i_8 - 2]) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1139844137))))))))), (arr_5 [i_5] [i_7] [i_8])));
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8 - 3] [i_8 - 3])) ? (((/* implicit */int) arr_17 [i_8 - 3] [i_8 + 2])) : (((/* implicit */int) arr_17 [i_8 + 1] [i_8 + 1]))))) && (((/* implicit */_Bool) ((signed char) arr_17 [i_8 - 2] [i_8 - 1])))));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (signed char)-47)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)186))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)-29)))) || (((/* implicit */_Bool) min((1359387273U), (((/* implicit */unsigned int) (_Bool)1))))))))));
                    var_33 = ((/* implicit */unsigned int) (unsigned short)38032);
                }
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_10 = 3; i_10 < 21; i_10 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) (unsigned short)27504)) / (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [(signed char)21] [i_0])))));
                        arr_32 [i_7] [i_7] [2] [i_9] [i_10] = ((/* implicit */unsigned char) (!((_Bool)1)));
                    }
                    var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((arr_4 [i_0] [7U] [i_5] [i_9]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68))))))))));
                    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) max((((unsigned int) max((arr_7 [i_7] [i_5] [i_5] [i_9]), (((/* implicit */int) (signed char)36))))), (((/* implicit */unsigned int) max((arr_10 [i_7] [i_5] [i_0]), ((signed char)28)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 4; i_11 < 18; i_11 += 3) 
                    {
                        arr_37 [i_7] [i_9] [13U] [i_7] = ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) arr_25 [i_7] [i_7] [i_5] [i_11 + 4])) : (((/* implicit */int) arr_25 [i_7] [i_11] [i_7] [i_11 + 4])))) / ((+(((/* implicit */int) arr_25 [i_7] [i_7] [i_7] [i_11 - 2]))))));
                        var_37 = ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) 8210742539667896720LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_5] [i_7]))) : (1359387299U))))), (((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) (~(arr_4 [i_5] [i_7] [i_9] [i_11])))))))));
                        var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0]))))))))));
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [i_0] [(unsigned char)3] [13ULL]) ? (((/* implicit */long long int) arr_33 [i_0] [i_5] [i_7] [9LL] [i_0] [i_5])) : (((long long int) (unsigned short)35300))))) ? (((max((arr_5 [i_0] [i_5] [i_9]), (((/* implicit */unsigned int) (signed char)-37)))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) 559617419U)) ? (((/* implicit */int) (unsigned short)61597)) : (((/* implicit */int) (signed char)100))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30236)))));
                    }
                }
                for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) /* same iter space */
                {
                    var_40 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) ((unsigned short) (_Bool)1))))));
                    arr_41 [i_0] [i_5] [i_5] [(signed char)20] [i_5] [i_7] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_33 [i_5] [i_0] [i_7] [i_7] [15LL] [i_7]))))));
                    var_41 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_12])) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (_Bool)1))))) ? (arr_38 [i_0] [i_7] [i_0]) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_17 [i_0] [i_0])), (arr_5 [(signed char)13] [i_7] [i_7]))))))));
                }
                var_42 = ((/* implicit */signed char) (unsigned char)53);
            }
            var_43 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) (signed char)32))), ((-(((/* implicit */int) arr_35 [i_0] [i_5] [i_5] [i_5] [i_0] [i_5] [i_5]))))));
            arr_42 [i_5] [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) arr_15 [i_0])), (3118511699U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min(((_Bool)1), (arr_6 [(_Bool)1]))) || (((/* implicit */_Bool) max(((short)26204), ((short)-26208)))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0] [(signed char)5])), (3091958215U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4294967293U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_5] [i_5]))))))) : (((((/* implicit */_Bool) 1203009081U)) ? (1203009082U) : (((/* implicit */unsigned int) arr_29 [14U] [i_0] [i_0] [(signed char)2] [i_5])))))));
        }
    }
    var_44 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) 0U))))))));
}
