/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79320
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) max((((((/* implicit */int) var_16)) + (((/* implicit */int) (signed char)127)))), ((-(var_11)))));
        var_20 = ((/* implicit */short) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_8)), (min((((/* implicit */unsigned int) max((arr_0 [i_0]), (((/* implicit */unsigned short) var_12))))), (arr_1 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) var_0)) * ((-(((/* implicit */int) var_15)))))))));
            arr_8 [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) (signed char)-15))))) + (((/* implicit */int) var_15)))), (((/* implicit */int) min((((/* implicit */short) var_18)), (arr_7 [i_0] [i_1]))))));
        }
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_3 = 2; i_3 < 7; i_3 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_4 = 2; i_4 < 6; i_4 += 4) 
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_15 [i_0]))) == (-2097152)));
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_16)) + (((/* implicit */int) (signed char)16)))) * (((/* implicit */int) (!(((/* implicit */_Bool) -2097152)))))))) >= (((((/* implicit */_Bool) var_4)) ? (2845062349U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65509)))))));
                }
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    var_25 = ((/* implicit */signed char) (unsigned short)26);
                    var_26 = ((/* implicit */int) (signed char)15);
                }
                var_27 -= ((/* implicit */_Bool) ((((arr_17 [i_0] [i_0] [i_3 + 2] [i_3 + 1]) ? (((((/* implicit */int) var_16)) | (((/* implicit */int) arr_6 [i_0])))) : (((/* implicit */int) arr_13 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3 - 1])))) / (-2097152)));
            }
            /* vectorizable */
            for (signed char i_6 = 2; i_6 < 7; i_6 += 3) /* same iter space */
            {
                var_28 &= ((/* implicit */unsigned char) arr_17 [i_2] [i_0] [(signed char)6] [(signed char)6]);
                var_29 = ((/* implicit */unsigned short) arr_21 [i_6 - 1] [i_6 - 1] [i_2]);
                arr_22 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) (short)3508)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2097167))))) : (((((/* implicit */int) var_6)) + (((/* implicit */int) arr_6 [i_2]))))));
            }
            /* vectorizable */
            for (signed char i_7 = 2; i_7 < 7; i_7 += 3) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */int) arr_9 [(unsigned short)0] [(unsigned short)0] [i_0])))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)-3526)) : (((/* implicit */int) var_0))))));
                var_31 = (-(((/* implicit */int) (short)-3495)));
            }
            var_32 = ((/* implicit */signed char) arr_24 [i_2] [(signed char)6] [(signed char)6]);
            /* LoopSeq 1 */
            for (unsigned int i_8 = 3; i_8 < 9; i_8 += 3) 
            {
                var_33 = ((/* implicit */unsigned int) var_13);
                /* LoopSeq 4 */
                for (signed char i_9 = 1; i_9 < 7; i_9 += 2) 
                {
                    var_34 = ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_8] [i_2] [i_8] [i_8 + 1])) <= (((/* implicit */int) var_13))))) + (((/* implicit */int) var_9)));
                    var_35 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) (unsigned short)65509))))) ? (arr_20 [i_9] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_0]))) > (var_19)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [(signed char)0] [(signed char)0] [(signed char)0] [(signed char)0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_27 [i_0] [i_0]))))) ? (min((((/* implicit */int) (short)-3508)), (var_17))) : (max((((/* implicit */int) var_4)), (arr_18 [i_0] [i_0] [i_8] [i_0]))))) : (((/* implicit */int) var_2))));
                }
                for (unsigned char i_10 = 4; i_10 < 9; i_10 += 2) /* same iter space */
                {
                    var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37)) ? (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_12))))))) : (arr_14 [i_0]))))));
                    var_37 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (max((((var_10) / (((/* implicit */int) arr_30 [i_8] [i_8] [(short)8] [i_0])))), (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) (signed char)13)))))))));
                    var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) max((var_3), (((/* implicit */short) arr_28 [i_0] [i_0] [i_0] [i_0]))))))));
                }
                /* vectorizable */
                for (unsigned char i_11 = 4; i_11 < 9; i_11 += 2) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned short) var_5);
                    var_40 = ((/* implicit */int) ((unsigned int) 2097158));
                    arr_35 [i_0] [i_0] [i_2] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) 2097141);
                    arr_36 [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (short)15360))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15360))) : (var_19)));
                }
                /* vectorizable */
                for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    var_41 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65481)) | (arr_12 [i_8] [i_8 - 2] [i_8] [i_8 - 3])));
                    var_42 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (signed char)-32)))))));
                }
            }
            var_43 = ((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_2]);
            arr_40 [i_0] [5] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_12)) % (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_39 [i_2] [i_0] [i_0] [i_0])) ? (arr_12 [4] [4] [4] [4]) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_2])))) : (((/* implicit */int) (unsigned char)162))))));
        }
        arr_41 [i_0] = (-(((/* implicit */int) ((arr_12 [i_0] [i_0] [i_0] [i_0]) != (arr_12 [i_0] [3] [i_0] [3])))));
    }
    for (signed char i_13 = 3; i_13 < 14; i_13 += 4) 
    {
        arr_44 [i_13] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_13 + 1] [i_13 + 1])) ^ (((/* implicit */int) (signed char)80))))) ? ((-(((/* implicit */int) arr_42 [i_13 - 1])))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)-3508)))));
        var_44 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (short)3508))))));
        var_45 = ((/* implicit */_Bool) max((2097121), (((/* implicit */int) (signed char)2))));
    }
    /* vectorizable */
    for (signed char i_14 = 3; i_14 < 7; i_14 += 1) 
    {
        var_46 = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_45 [i_14]) > (arr_45 [i_14]))))));
        var_47 = ((/* implicit */signed char) max((var_47), (var_4)));
        var_48 = ((/* implicit */signed char) ((((((/* implicit */int) arr_42 [i_14])) & (((/* implicit */int) (short)32750)))) + ((+(((/* implicit */int) (short)15341))))));
        /* LoopSeq 1 */
        for (int i_15 = 2; i_15 < 9; i_15 += 3) 
        {
            var_49 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)9157)) != (((/* implicit */int) var_0))));
            var_50 = ((arr_47 [i_15 - 1] [i_14]) != (((/* implicit */int) var_12)));
        }
    }
    var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)-30359)) != (2097158))))))) ? (((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (short)-15372)))) : (((var_10) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)15341))))))));
    var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -2097158)) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) min((((/* implicit */short) var_4)), (var_1)))) : (((/* implicit */int) (short)15341))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) var_6))))))))));
    var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_7)))) ^ (var_10)))) ? (((((/* implicit */int) var_16)) / (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) min((1198719286U), (((/* implicit */unsigned int) 144346313))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (max((var_11), (((/* implicit */int) var_15))))))));
}
