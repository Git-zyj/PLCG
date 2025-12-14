/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9400
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) min((min((((/* implicit */int) (unsigned char)255)), (arr_3 [i_0] [i_0]))), ((~(arr_3 [i_0] [3])))));
        var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_3 [i_0] [i_0])))) ? ((~(((/* implicit */int) var_15)))) : ((~(((/* implicit */int) var_13))))));
        var_20 = 1070897603;
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_21 = (~(((((/* implicit */_Bool) ((unsigned char) -1070897604))) ? (((/* implicit */int) arr_0 [(signed char)7] [i_1])) : (((/* implicit */int) max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned char) arr_2 [i_1]))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)147)) : (1070897603)))))));
        var_22 ^= (~((~(((/* implicit */int) arr_1 [i_1])))));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
    {
        for (unsigned char i_3 = 3; i_3 < 10; i_3 += 3) 
        {
            {
                var_23 ^= ((int) ((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? (arr_8 [i_2 + 1]) : (arr_8 [i_2 + 1])));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        {
                            arr_20 [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned short) min(((unsigned char)215), (max((arr_14 [i_2 - 1]), (arr_14 [(unsigned char)12])))));
                            var_24 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (max((((/* implicit */int) ((((/* implicit */int) (unsigned char)108)) == (2870231)))), (((((/* implicit */int) var_12)) / (((/* implicit */int) arr_14 [1U])))))) : (((2870231) ^ (-1774767435))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) 2870231);
                /* LoopSeq 4 */
                for (unsigned int i_6 = 1; i_6 < 12; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 12; i_7 += 1) 
                    {
                        for (signed char i_8 = 1; i_8 < 12; i_8 += 1) 
                        {
                            {
                                arr_29 [i_6] = (~(min((arr_22 [i_2] [i_2] [i_7 - 1] [i_2]), ((~(((/* implicit */int) arr_23 [i_2] [i_8 - 1] [i_8 - 1])))))));
                                var_26 = ((/* implicit */unsigned char) 0U);
                            }
                        } 
                    } 
                    arr_30 [i_6] [i_3] [i_6] = ((/* implicit */int) (~(((((/* implicit */unsigned int) arr_17 [i_2])) & (4294967295U)))));
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned char)199)) ? (arr_17 [i_3 - 2]) : (arr_17 [i_3 - 2]))) : ((~(((/* implicit */int) arr_23 [11U] [11U] [i_6])))))))));
                    arr_31 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [7] [i_3] [i_3] [i_6])) >> (((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (0U) : (((/* implicit */unsigned int) 2147483647))))))) ? (((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) (unsigned char)68)) >> (((((/* implicit */int) (signed char)91)) - (83))))))) : (((int) arr_26 [2U] [i_6] [i_6 + 1]))));
                }
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_12 [i_2 - 1] [i_3 - 3] [i_3 - 3]), (((/* implicit */unsigned int) arr_14 [i_2 + 1])))))));
                    var_29 = (+(((int) (signed char)(-127 - 1))));
                }
                for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        for (int i_12 = 2; i_12 < 11; i_12 += 1) 
                        {
                            {
                                arr_42 [i_12] [i_11] [i_10] [i_3 - 1] = ((/* implicit */int) (signed char)-127);
                                var_30 = ((/* implicit */signed char) arr_37 [i_12] [i_11] [i_10] [i_3 - 2]);
                            }
                        } 
                    } 
                    arr_43 [i_2] [i_3 - 3] [i_10] = ((/* implicit */signed char) max((((/* implicit */int) min((((signed char) (signed char)-6)), (arr_28 [(signed char)11] [i_2] [i_3 + 1] [i_3 + 1] [i_10] [i_10])))), ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2] [9])) && (((/* implicit */_Bool) 4294967295U)))))))));
                }
                for (unsigned int i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    var_31 = ((/* implicit */signed char) 2234088099U);
                    var_32 &= ((/* implicit */unsigned int) var_16);
                }
            }
        } 
    } 
}
