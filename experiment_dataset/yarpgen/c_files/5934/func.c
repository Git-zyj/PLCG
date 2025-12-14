/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5934
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
    var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) var_6))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_11))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (var_7))))) : (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))))));
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))) : (var_7)))))), (((((((/* implicit */int) (unsigned char)159)) / (((/* implicit */int) (unsigned char)81)))) <= (((/* implicit */int) (signed char)-64)))))))));
    var_15 *= ((/* implicit */unsigned int) ((signed char) (+(((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8656709741898783663ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)64))))) && (arr_1 [i_0])));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [(unsigned char)15]) & (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) arr_7 [(short)5])) ? (((/* implicit */int) arr_7 [i_0])) : (arr_4 [i_2]))) : (((/* implicit */int) arr_6 [(unsigned char)10] [i_2] [i_2])))))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+(((/* implicit */int) arr_0 [i_2 - 1])))))));
                    var_19 += ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2 - 1])) ? (((/* implicit */int) arr_6 [(short)13] [(short)13] [i_2 - 1])) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_2 - 1])));
                    var_20 = ((/* implicit */unsigned char) ((_Bool) var_7));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((+(((/* implicit */int) (short)-13219)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_22 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_3] [i_3] [i_3])) - (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) 511861162)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (-(((/* implicit */int) arr_9 [i_4] [i_4 - 1] [i_4])))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]);
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_10 [(short)7] [i_0] [i_0]))))));
    }
    for (unsigned char i_7 = 2; i_7 < 8; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            arr_27 [i_7 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7 + 1])) ? (min(((+(((/* implicit */int) var_2)))), ((~(((/* implicit */int) arr_0 [i_8])))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)65))))) ? ((~(((/* implicit */int) arr_9 [i_7 - 1] [i_7 - 1] [i_7])))) : ((-(((/* implicit */int) (unsigned char)65))))))));
            arr_28 [i_7] [i_7] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) var_1))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_7])) ? (((/* implicit */int) (short)-30979)) : (((/* implicit */int) (short)3442))))), ((-(var_9)))))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)205))) ? (((arr_9 [i_7] [i_7] [i_7 - 2]) ? (((/* implicit */unsigned long long int) var_8)) : (3385845194042185228ULL))) : (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) ((unsigned char) (short)15347))) : (((/* implicit */int) ((((/* implicit */int) ((signed char) (short)-15347))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (var_7)))))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_9 = 2; i_9 < 9; i_9 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) ((((arr_1 [i_7]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190))) : (((unsigned int) (short)21573)))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)14])))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                for (short i_11 = 1; i_11 < 9; i_11 += 1) 
                {
                    {
                        var_27 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_6 [i_10] [i_10] [i_10]), (((/* implicit */unsigned short) ((unsigned char) arr_14 [i_10] [i_7] [i_10]))))))));
                        arr_36 [i_9] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_18 [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1])) ? (((/* implicit */int) arr_18 [i_11 + 1] [i_11 + 1] [16ULL] [i_11 + 1] [i_11] [i_11 - 1])) : (((/* implicit */int) arr_18 [i_11 + 1] [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1])))));
                    }
                } 
            } 
            arr_37 [i_9] [i_9] [i_9 - 2] = ((/* implicit */short) (-(max((744717345859434303LL), (((/* implicit */long long int) (short)32762))))));
        }
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_28 -= ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
        arr_40 [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_12] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_12] [i_12]))) : (-2455352068757583845LL)))) ? (max((((/* implicit */unsigned long long int) (short)15347)), (2941066588795390800ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)68)))))));
        var_29 = (~(((((/* implicit */long long int) arr_15 [i_12] [i_12] [(unsigned char)6])) / (arr_13 [(unsigned short)16] [i_12] [(short)15] [i_12]))));
        arr_41 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) arr_5 [i_12])), (arr_18 [i_12] [i_12] [i_12] [i_12] [i_12] [(unsigned short)14])))) ? (((((/* implicit */_Bool) arr_17 [i_12])) ? (((/* implicit */int) arr_39 [i_12])) : (arr_17 [i_12]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_12])))))));
    }
    var_30 = ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) 3385845194042185249ULL)) ? (var_5) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28)))));
}
