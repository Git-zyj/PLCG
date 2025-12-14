/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84905
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
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_3])) ? (arr_4 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))) ? (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_7 [i_0] [i_2] [i_3]))) : (((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0 + 1]))))));
                        var_17 = ((/* implicit */short) ((signed char) arr_2 [i_1] [i_1] [i_2]));
                        arr_8 [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7936))) & (18446744073709551594ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)127))))))));
                    }
                } 
            } 
        } 
        arr_9 [i_0 - 2] [i_0 + 3] = ((/* implicit */unsigned long long int) min((((signed char) ((signed char) arr_2 [i_0] [i_0] [i_0 - 4]))), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (arr_3 [i_0 - 1] [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                {
                    arr_16 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_3 [i_0 - 2] [i_4] [i_5])) + (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 - 1]))))) : (((/* implicit */int) (signed char)126))))) ? (((/* implicit */int) (unsigned short)7936)) : (((/* implicit */int) arr_13 [i_0] [i_0])));
                    arr_17 [i_0 - 3] [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)7936))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) max((((/* implicit */int) arr_12 [i_0 - 4] [i_0 - 1] [i_0])), (arr_10 [i_0])));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_21 [i_6] [i_6] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_6] [i_6])) + (((/* implicit */int) (signed char)56))))), (arr_14 [i_6] [i_6] [i_6] [i_6])));
        var_19 ^= ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_12 [i_6] [i_6] [i_6])))), (min((((/* implicit */int) min(((unsigned short)7936), (((/* implicit */unsigned short) var_15))))), (max((arr_11 [i_6] [i_6]), (((/* implicit */int) (short)-15))))))));
    }
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        var_20 ^= ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2196838562U)), (arr_23 [i_7] [i_7])))) * (7709876458030144087ULL));
        /* LoopNest 2 */
        for (unsigned short i_8 = 2; i_8 < 20; i_8 += 1) 
        {
            for (int i_9 = 2; i_9 < 20; i_9 += 2) 
            {
                {
                    var_21 ^= ((((/* implicit */_Bool) ((((arr_27 [i_9 - 1]) + (9223372036854775807LL))) << (((/* implicit */int) arr_26 [i_8 + 1] [i_8 - 2]))))) ? ((((!(((/* implicit */_Bool) (unsigned short)65533)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_24 [i_7])), (2212375862U)))) : (arr_25 [i_8 - 1] [i_8 - 1] [i_8 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7919))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 19; i_11 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */int) 1573611849U);
                                var_23 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_29 [i_9] [i_10] [i_11])), ((unsigned char)255))))) > (min((arr_25 [i_7] [i_8 + 1] [i_11 + 2]), (((/* implicit */unsigned long long int) var_12)))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((4125638134961904963LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57599))))) : (((/* implicit */long long int) 253952U)))) : (((/* implicit */long long int) arr_30 [i_7] [i_7] [i_7] [i_7])));
                            }
                        } 
                    } 
                    var_24 ^= ((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)3)), (((((((/* implicit */_Bool) arr_28 [i_7] [i_8 + 1] [i_9 - 1] [i_8 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4568))) : (arr_30 [i_8 - 2] [i_7] [i_8 - 2] [i_8 - 2]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_8 - 2] [i_8 - 1])))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_7] [i_7] [i_7] [i_9 - 2])) ? (((((/* implicit */_Bool) 1445307969U)) ? (2098128733U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-16), (((/* implicit */signed char) var_12))))))))) * (((((/* implicit */unsigned long long int) ((unsigned int) arr_32 [i_7] [i_8]))) / (((((/* implicit */_Bool) 10354970090644728779ULL)) ? (arr_25 [i_7] [i_8] [i_9 - 1]) : (((/* implicit */unsigned long long int) arr_23 [i_7] [i_9 + 1]))))))));
                    var_26 = ((/* implicit */unsigned long long int) 1498166680);
                }
            } 
        } 
        arr_36 [i_7] = ((/* implicit */unsigned int) (_Bool)1);
        var_27 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (signed char)-29)) ? (arr_25 [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) 2196838572U)))) == (((((/* implicit */_Bool) 18446744073709551600ULL)) ? (arr_25 [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) arr_23 [i_7] [i_7])))))) || (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-29))))) || (((/* implicit */_Bool) arr_35 [i_7]))))));
    }
    var_28 = ((/* implicit */short) var_0);
    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)57617))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-32736)), (var_11))))) : (((((/* implicit */_Bool) var_3)) ? (2080374784LL) : (((/* implicit */long long int) var_7))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)10872)), (max((((/* implicit */int) var_12)), (var_2)))))) : (min((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) 67108864)) ? (2196838563U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (unsigned char i_12 = 2; i_12 < 13; i_12 += 3) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned int i_14 = 0; i_14 < 15; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 3; i_15 < 13; i_15 += 3) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 15; i_16 += 1) 
                        {
                            {
                                var_30 *= ((/* implicit */int) min((max((arr_30 [i_15 + 2] [i_15 + 2] [i_14] [i_12 - 1]), (((/* implicit */unsigned int) arr_29 [i_15 + 1] [i_12 + 2] [i_12 - 1])))), (((/* implicit */unsigned int) arr_29 [i_15 - 3] [i_12 + 2] [i_12 - 2]))));
                                var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 10354970090644728779ULL)) ? (8091773983064822833ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_16] [i_15 + 2] [i_14] [i_13] [i_12]))))) * (((((/* implicit */_Bool) 16004323447322995554ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_12 - 2] [i_12 + 2]))) : (10354970090644728801ULL))))))));
                            }
                        } 
                    } 
                    var_32 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((arr_41 [i_12 + 1] [i_13] [i_14]), (((/* implicit */long long int) arr_24 [i_12 - 1]))))) || (((/* implicit */_Bool) min((arr_34 [i_12] [i_12 + 2] [i_12 + 1] [i_12] [i_12 + 1]), (((/* implicit */unsigned int) (unsigned short)31))))))), ((((+(((/* implicit */int) arr_24 [i_12])))) <= (((/* implicit */int) max(((signed char)-4), (((/* implicit */signed char) (_Bool)1)))))))));
                    arr_50 [i_14] = ((/* implicit */_Bool) ((long long int) max((arr_34 [i_12 - 1] [i_12 - 2] [i_12 - 1] [i_12 - 1] [i_12 - 1]), (2721355441U))));
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7)))))) ? (var_0) : (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_1)))))))));
}
