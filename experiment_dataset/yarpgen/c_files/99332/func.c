/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99332
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
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        var_10 = ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned int) (signed char)47))))) ? (max((min((((/* implicit */unsigned int) (unsigned short)256)), (arr_1 [(signed char)8]))), (((/* implicit */unsigned int) (signed char)47)))) : (825373341U));
        var_11 = ((/* implicit */signed char) max((min(((~(((/* implicit */int) (unsigned char)91)))), ((~(((/* implicit */int) var_1)))))), ((~(((/* implicit */int) min(((unsigned char)159), (((/* implicit */unsigned char) (signed char)63)))))))));
        var_12 = ((unsigned short) min((((/* implicit */unsigned short) (signed char)90)), (var_2)));
        arr_2 [i_0] = ((/* implicit */unsigned int) min((min(((-(((/* implicit */int) (signed char)105)))), ((~(((/* implicit */int) (signed char)-79)))))), (((/* implicit */int) max((min((((/* implicit */unsigned short) (signed char)-79)), (var_7))), (((/* implicit */unsigned short) var_6)))))));
    }
    for (unsigned short i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        var_13 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [(unsigned short)6])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)36446)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)29))))))), (var_5)));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) /* same iter space */
        {
            arr_8 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)192))));
            arr_9 [i_1] = ((/* implicit */unsigned int) var_0);
        }
        for (unsigned char i_3 = 1; i_3 < 18; i_3 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_1] [i_3 + 2])) - (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26288))))) * (((((/* implicit */int) (signed char)-54)) - (((/* implicit */int) var_2))))))));
            var_15 += (signed char)-39;
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_3))));
        }
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) arr_10 [i_1 - 2] [(unsigned short)16]))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_4 = 2; i_4 < 19; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 4; i_5 < 20; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            {
                                arr_25 [i_4] [i_4] [i_5] [i_4] [i_4] = ((/* implicit */signed char) (~(((unsigned int) var_2))));
                                arr_26 [i_4] [i_4] [i_4 + 1] = ((/* implicit */unsigned short) ((signed char) (~((~(((/* implicit */int) (signed char)78)))))));
                            }
                        } 
                    } 
                    arr_27 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_9))))))) ? ((~(((/* implicit */int) arr_16 [i_4] [i_5 - 2] [i_4 - 1])))) : ((~((~(((/* implicit */int) var_0))))))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)62728))))) ^ (max((((911478840U) & (var_5))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-75)) & (((/* implicit */int) (signed char)122)))))))));
                }
            } 
        } 
        var_19 ^= ((/* implicit */unsigned int) (unsigned short)46919);
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) arr_30 [i_4] [i_4 + 2]);
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_12] [i_11] [i_10] [i_4 - 2]))))) ? ((-(((/* implicit */int) arr_18 [i_4] [i_11] [(unsigned char)20] [i_4 + 2])))) : ((+(((/* implicit */int) (unsigned short)21937))))));
                                arr_38 [i_4] [i_12] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 4251697700U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [i_4] [i_4 + 2])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_4] [i_4 - 1])) || (((/* implicit */_Bool) arr_15 [i_12] [i_4 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned short) max((var_22), ((unsigned short)3)));
    /* LoopNest 2 */
    for (unsigned char i_13 = 0; i_13 < 21; i_13 += 2) 
    {
        for (signed char i_14 = 3; i_14 < 20; i_14 += 4) 
        {
            {
                arr_44 [i_14 - 3] &= 603916893U;
                arr_45 [i_13] [i_14] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-90)) || (((/* implicit */_Bool) arr_33 [i_14 - 2] [i_13] [i_14] [i_14 - 3] [i_14 - 1]))))) : (((/* implicit */int) var_4))));
            }
        } 
    } 
}
