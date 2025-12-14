/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62806
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) (short)14924)))))) != (((/* implicit */int) var_13)))))));
        arr_2 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))))) * (var_10)));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */_Bool) ((signed char) arr_4 [i_0] [i_1] [i_1]))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min(((unsigned short)57546), (((/* implicit */unsigned short) (_Bool)1)))))))))));
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (((unsigned int) max((arr_0 [i_0]), (((/* implicit */unsigned char) arr_1 [i_1]))))))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [(signed char)8] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_1])), (var_0)))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (signed char)-82)))) : (((/* implicit */int) var_8)))) << (((((/* implicit */int) ((signed char) var_9))) - (86)))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) (short)496)) : (((/* implicit */int) (unsigned char)3))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7989))));
                        var_20 &= ((/* implicit */short) arr_6 [i_0]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    {
                        arr_19 [i_4] [i_5] = ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [(signed char)1] [(short)10] [i_4] [(short)8])) && (((/* implicit */_Bool) arr_15 [i_0] [i_4] [i_5]))))) : (((((/* implicit */_Bool) arr_18 [i_4])) ? (((/* implicit */int) arr_18 [i_4])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_5])))))) < (((/* implicit */int) max((arr_15 [i_0] [i_1] [i_5]), (min((((/* implicit */unsigned short) arr_6 [(_Bool)1])), (arr_10 [i_0] [i_0] [i_0] [i_0])))))));
                        arr_20 [i_4] = ((/* implicit */short) ((_Bool) (signed char)6));
                        var_21 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_5])) * (((/* implicit */int) arr_3 [i_4])))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned char i_6 = 2; i_6 < 11; i_6 += 2) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) arr_22 [i_6 - 1] [i_1] [(_Bool)0])) : (((/* implicit */int) arr_7 [(short)11] [i_1] [i_6 + 1]))))) ? (((/* implicit */int) min((arr_15 [i_6] [i_6 - 1] [i_6]), (arr_15 [i_6] [i_6 + 1] [i_1])))) : (((/* implicit */int) var_15))));
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_6]))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)23524)) / (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_7 [i_6 + 1] [i_6 - 1] [i_6 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6 - 2] [i_6 - 2] [i_6 + 1]))) : (var_6)))));
            }
            for (unsigned char i_7 = 2; i_7 < 11; i_7 += 2) /* same iter space */
            {
                var_25 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7 + 1] [1U] [i_1])) ? (((/* implicit */int) arr_9 [i_7] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7])) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) ((_Bool) arr_9 [i_0] [i_1] [i_7 - 1] [i_0] [i_7]))) : (((/* implicit */int) min((max((var_13), (var_7))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_7])) || (((/* implicit */_Bool) (unsigned char)186))))))))));
                arr_26 [i_0] [i_0] [i_7] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [(unsigned short)10] [i_7])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (var_13)))) : (((((/* implicit */_Bool) (short)-26377)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)45284))))))) : (var_6)));
            }
            for (unsigned char i_8 = 2; i_8 < 11; i_8 += 2) /* same iter space */
            {
                var_26 &= ((/* implicit */unsigned char) arr_14 [i_0] [i_1] [i_8]);
                arr_29 [i_0] = ((/* implicit */short) ((signed char) arr_21 [i_0] [(signed char)2]));
                arr_30 [i_0] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_0] [i_1])) < (((/* implicit */int) min((arr_12 [i_1] [i_8 + 1] [i_1] [i_8]), (arr_12 [(_Bool)1] [i_8 + 1] [i_8 - 2] [i_8 - 2]))))));
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) min((((unsigned char) var_10)), (((/* implicit */unsigned char) arr_16 [i_8 - 1] [i_8 - 1] [i_8 - 1] [(unsigned char)5] [i_8])))))));
                var_28 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) arr_6 [i_0])) / (((/* implicit */int) var_12)))) == (((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (arr_12 [i_0] [1U] [i_8 - 2] [i_8 - 2]))))))) / (((((/* implicit */int) (unsigned char)34)) + (((/* implicit */int) (_Bool)1))))));
            }
        }
    }
    for (short i_9 = 2; i_9 < 12; i_9 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)198)) * (((/* implicit */int) (signed char)19)))))));
        arr_34 [i_9] = ((/* implicit */unsigned char) min((var_10), (((((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [(short)4]))) : (min((((/* implicit */unsigned int) arr_33 [i_9] [i_9])), (arr_32 [(_Bool)1] [i_9])))))));
        arr_35 [i_9] [i_9] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)0))))) : (((/* implicit */int) (_Bool)1))));
        var_30 = ((/* implicit */unsigned int) max((var_30), (((((/* implicit */_Bool) ((var_11) ? (((var_8) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_33 [i_9 + 2] [i_9 + 2])))) : (((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32625))))))) ? (((((_Bool) var_3)) ? (((unsigned int) arr_31 [i_9])) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (arr_32 [i_9] [i_9])))));
    }
    for (short i_10 = 0; i_10 < 13; i_10 += 2) 
    {
        arr_38 [(_Bool)1] &= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16384))));
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (+(((/* implicit */int) var_0)))))));
    }
    var_32 = ((/* implicit */short) ((((_Bool) ((signed char) var_2))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))));
}
