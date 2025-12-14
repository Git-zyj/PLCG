/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73434
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
    var_14 = ((/* implicit */unsigned short) ((unsigned long long int) var_9));
    var_15 *= ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) var_3)) % (((((/* implicit */_Bool) 2935410534U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_4)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))), (((int) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) 2935410560U))))))))));
            arr_7 [i_1] = ((/* implicit */unsigned short) ((long long int) (~(arr_5 [i_1]))));
            var_17 = ((/* implicit */unsigned long long int) -2022966494);
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) (((+(3730941591U))) ^ (((unsigned int) var_4))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0])))));
                arr_11 [i_2] [i_1] [i_0] = ((/* implicit */signed char) arr_6 [i_1]);
                arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (((~(arr_1 [i_1]))) | ((~(arr_1 [i_0])))));
            }
        }
        for (signed char i_3 = 2; i_3 < 20; i_3 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) min((arr_9 [(unsigned short)15] [i_3] [i_3 - 1]), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) var_12))))))));
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 22; i_4 += 4) 
            {
                for (unsigned short i_5 = 1; i_5 < 22; i_5 += 4) 
                {
                    {
                        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((unsigned int) arr_21 [(_Bool)1] [i_4] [i_4] [i_5 + 2]))))) ? (((/* implicit */int) min((arr_18 [i_4 - 1] [i_4] [i_3] [i_3 + 3]), (var_2)))) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (-2147483647 - 1)))))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) || ((((!(((/* implicit */_Bool) var_11)))) && (((((/* implicit */_Bool) arr_15 [i_3])) || (((/* implicit */_Bool) arr_6 [i_5]))))))));
                            arr_25 [i_0] [i_4] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((2071547852), (((/* implicit */int) arr_6 [i_4]))))) ? ((-(3561267146U))) : (min((((/* implicit */unsigned int) var_2)), (1359556786U)))))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((arr_9 [i_3 - 2] [i_5 + 1] [i_3 - 2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_3] [i_4 - 1] [i_5 - 1])))))), (min(((+(3772010716U))), (((/* implicit */unsigned int) max((-430434091), (((/* implicit */int) var_6)))))))));
                            var_22 *= (((+(arr_14 [i_3 + 3] [i_3 + 4] [i_3]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_3 + 4] [i_3 + 2] [i_3 + 1]) != (((/* implicit */unsigned int) max((arr_23 [i_6] [i_6] [i_5] [i_4] [i_3 - 1] [i_3 - 1] [i_0]), (var_12)))))))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_3 - 2] [i_4 + 2] [i_5])))))))) <= (((unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_3])) : (((/* implicit */int) (signed char)-12)))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_19 [i_3 + 4] [i_3 + 1] [i_0] [i_0])), (min((3561267146U), (((/* implicit */unsigned int) arr_24 [i_3] [i_3 + 2] [20LL] [i_3] [i_3] [i_0] [i_0]))))))) || (arr_0 [i_0] [i_0])));
        }
        /* vectorizable */
        for (signed char i_7 = 2; i_7 < 20; i_7 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? ((((_Bool)1) ? (564025711U) : (2935410540U))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (var_13)))));
            /* LoopNest 2 */
            for (unsigned short i_8 = 2; i_8 < 23; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    {
                        arr_37 [i_7] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_33 [i_7] [i_8] [i_7] [i_0])) || (((/* implicit */_Bool) arr_23 [i_0] [i_7] [i_7] [i_8] [(_Bool)1] [i_8 - 1] [18])))) || (((/* implicit */_Bool) ((unsigned int) var_9)))));
                        var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [20] [20] [i_8 - 2] [i_9] [i_8 + 1] [i_9] [i_7 - 2])) ? (((((/* implicit */_Bool) arr_30 [7ULL] [i_8] [i_7 + 2])) ? (((/* implicit */unsigned int) arr_23 [i_0] [i_7 - 2] [i_8] [i_9] [i_7] [i_9] [i_9])) : (3730941591U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_35 [i_0] [i_0] [i_0])))))));
                        arr_38 [i_0] [i_7] [i_8 - 2] [i_9] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_3)) + (var_7))) <= (18446744073709551615ULL)));
                        arr_39 [i_0] [i_7] [i_8] [i_7] [i_8 + 1] [i_8 - 2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_7 + 3] [i_7 - 1] [i_8 - 2])) ^ (var_12)));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0])) && (((/* implicit */_Bool) (~(var_9))))));
            arr_42 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_27 [i_0]) : (((/* implicit */unsigned long long int) 3144259769U))))) ? (arr_40 [i_0]) : (((/* implicit */unsigned long long int) ((unsigned int) 733700150U)))));
        }
        var_28 = ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [3U]))) : (3561267168U)))) ? (((((/* implicit */int) arr_29 [i_0] [i_0])) / (arr_28 [i_0] [i_0]))) : (min((803257754), (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [11LL])))));
        var_29 = ((/* implicit */signed char) var_2);
    }
    for (signed char i_11 = 2; i_11 < 17; i_11 += 4) 
    {
        var_30 = ((/* implicit */_Bool) arr_27 [i_11 - 2]);
        var_31 = ((/* implicit */int) var_4);
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 16; i_12 += 4) 
    {
        for (signed char i_13 = 2; i_13 < 15; i_13 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_13 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */int) (short)3052))))) : ((~(var_11)))))) ? (((((((/* implicit */_Bool) var_1)) ? (2113929216U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58362))))) & (((/* implicit */unsigned int) arr_28 [i_12] [(short)17])))) : (((((/* implicit */unsigned int) var_12)) | (max((((/* implicit */unsigned int) arr_44 [i_14] [i_14])), (3611039956U)))))));
                            var_33 = ((/* implicit */int) max((((/* implicit */unsigned int) max((((/* implicit */short) ((_Bool) arr_29 [i_12] [i_12]))), (arr_30 [i_13 + 1] [i_12] [i_15])))), (var_11)));
                            var_34 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) ((3561267168U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_12] [i_12] [i_14]))))))))));
                            arr_55 [i_12] [0U] [0U] [i_15] [(_Bool)1] [i_13] = ((/* implicit */unsigned long long int) ((short) 14402218887022086827ULL));
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned int) ((max((arr_50 [0] [i_12] [i_12] [i_12]), ((+(arr_50 [i_13 + 1] [12LL] [i_12] [i_12]))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */long long int) 2275439175U))))) ? (((/* implicit */unsigned long long int) ((arr_33 [i_13] [(_Bool)0] [i_13] [i_13]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-30)))))) : (arr_9 [i_13 - 1] [i_13 - 1] [i_12])))));
                var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) & (((/* implicit */int) arr_32 [i_13] [i_13 + 1] [i_13] [i_13 - 2])))))));
                var_37 *= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_33 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 - 2])) ? (((/* implicit */int) arr_0 [i_13 + 1] [i_13])) : (((/* implicit */int) arr_0 [i_13 + 1] [i_12])))));
            }
        } 
    } 
}
