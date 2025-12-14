/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66278
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
    var_11 = ((/* implicit */short) (~(((/* implicit */int) (signed char)115))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            var_12 += ((signed char) arr_5 [i_0] [i_0 - 1] [i_2 + 4] [i_4 + 3]);
                            var_13 = ((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */unsigned short) ((signed char) arr_7 [(signed char)11] [i_2] [i_2] [i_3] [(signed char)11] [(signed char)11]))), (((unsigned short) (signed char)-120)))));
                        }
                        for (signed char i_5 = 1; i_5 < 14; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_3] [i_5 + 2] [i_2 + 1])) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3] [i_5 + 2] [i_2 + 1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_3] [i_5 + 2] [i_2 + 1])))));
                            arr_13 [(unsigned short)0] [i_1] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)61)) - (-1453146446)));
                            arr_14 [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned short) 2147483647);
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned long long int) 16777215)) : (4653933180725638756ULL)));
                        }
                        for (signed char i_6 = 2; i_6 < 13; i_6 += 1) 
                        {
                            arr_18 [i_6] [i_3] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) arr_17 [i_0] [i_1] [i_2 + 3] [i_3] [i_6]));
                            arr_19 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_0 + 2]), (arr_3 [i_0 + 2])))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_0 - 1]))) : (((((/* implicit */int) arr_3 [i_0 + 2])) - (((/* implicit */int) arr_3 [i_0 + 1]))))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) ((short) (unsigned short)65531)))))));
                        }
                        for (signed char i_7 = 1; i_7 < 15; i_7 += 1) 
                        {
                            var_17 *= ((((/* implicit */_Bool) (signed char)-8)) ? (8388607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32759))));
                            arr_22 [i_0] [i_1] [i_1] [i_3] [i_7] [i_7] = ((/* implicit */int) ((((((/* implicit */int) arr_8 [i_1] [i_1] [i_3] [i_3])) == (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0] [i_3] [i_7])) < (arr_10 [i_0] [i_1] [i_2] [i_2] [i_7] [i_3] [13ULL])))))) ? (((((/* implicit */_Bool) arr_15 [i_0 + 2] [i_7 + 1] [i_2 + 2])) ? (((unsigned long long int) arr_4 [i_1] [i_2] [i_3])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) <= (arr_2 [i_0] [i_2 - 1] [i_3]))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_17 [i_0] [i_1] [i_2] [i_3] [i_7])))) - (min((5256600061344906623ULL), (((/* implicit */unsigned long long int) (signed char)-47))))))));
                            arr_23 [i_0] [i_1] [i_0] [i_0] [i_7] = ((/* implicit */unsigned long long int) (short)-18426);
                            var_18 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2 - 1] [i_3] [i_0 + 2] [i_3])))))) & (((/* implicit */int) arr_5 [i_7 - 1] [i_3] [i_1] [i_0])))), (((/* implicit */int) arr_0 [i_0 + 1]))));
                            var_19 ^= ((/* implicit */signed char) ((((8388607ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28137))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_2 - 1] [i_2 - 1])))))));
                        }
                        var_20 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)28743)))) && ((!(((/* implicit */_Bool) 10241894543357539201ULL))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            arr_28 [i_0] [i_0] [i_8] = (+(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2])))));
            var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_8 [i_0] [i_0 + 2] [(signed char)11] [i_8])), ((short)-20594)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_8] [i_8]))) <= (arr_2 [i_0 - 1] [i_0] [i_0 - 1]))))))), ((-(min((arr_21 [i_0] [i_0] [i_8] [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned long long int) arr_6 [i_8] [i_8] [i_8] [i_0]))))))));
            /* LoopSeq 2 */
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                var_22 = ((/* implicit */short) (~(-1848672089)));
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) (signed char)125))))), (((((/* implicit */_Bool) -351827463)) ? (arr_17 [i_0 + 2] [i_8] [i_9] [i_8] [i_11]) : (arr_37 [(signed char)7] [i_8] [i_8] [i_8] [i_11]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)62483)) && (((/* implicit */_Bool) arr_16 [i_0 + 2] [i_11] [i_9] [i_11])))) || (((/* implicit */_Bool) ((arr_21 [i_0] [i_0] [i_9] [i_10] [i_10] [i_9] [i_10]) | (((/* implicit */unsigned long long int) arr_36 [i_0] [i_9])))))))))));
                            arr_39 [i_8] [i_9] [i_10] [i_11 + 1] = arr_9 [i_0] [i_8] [i_9] [i_8] [i_10];
                        }
                    } 
                } 
            }
            for (signed char i_12 = 2; i_12 < 14; i_12 += 3) 
            {
                var_24 = ((((/* implicit */_Bool) 4285344150911432122ULL)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (unsigned short)15734)));
                /* LoopSeq 1 */
                for (signed char i_13 = 3; i_13 < 15; i_13 += 2) 
                {
                    arr_44 [i_0 - 1] [i_13 + 1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [i_0 - 1] [i_0])) ? (((int) (unsigned char)39)) : (min((1461482355), (-1461482388))))), (((/* implicit */int) ((arr_32 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_12 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_8] [i_8])) || (((/* implicit */_Bool) arr_36 [i_8] [i_12])))))))))));
                    arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_13])) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) * (((/* implicit */int) max((arr_0 [i_8]), (arr_20 [i_13] [i_12] [i_0] [14ULL] [i_0] [(signed char)15] [i_0]))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0])) ? (((/* implicit */int) (unsigned short)49800)) : (((/* implicit */int) (unsigned short)15735))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -1461482356))))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_0 + 2] [i_8] [i_12] [i_13 + 1])) * (((/* implicit */int) ((((/* implicit */int) arr_41 [i_13 - 2])) <= (((/* implicit */int) arr_40 [i_0 + 1] [i_8] [i_13 - 1])))))));
                    arr_46 [i_0] [i_8] [2] [(signed char)7] = ((/* implicit */signed char) ((unsigned long long int) 117050352738360494ULL));
                }
            }
        }
    }
    var_26 = ((/* implicit */unsigned short) var_6);
    var_27 = ((/* implicit */signed char) ((unsigned char) (signed char)0));
    var_28 ^= var_1;
}
