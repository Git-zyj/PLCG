/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98154
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0 + 1]);
        arr_3 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) arr_6 [i_1] [i_1]);
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 1) 
                        {
                            var_10 = (-(var_8));
                            arr_17 [i_1] = ((/* implicit */signed char) ((arr_6 [i_1] [i_1]) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_3]))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) var_2))));
                            var_12 &= ((unsigned char) arr_8 [i_0 - 1]);
                            var_13 -= ((/* implicit */unsigned int) 14836487882318384092ULL);
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [18U] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_14 [i_0 + 2] [i_0 + 2] [i_0 + 3] [i_0] [i_3])) : (((/* implicit */int) arr_15 [i_0] [i_1] [3U] [i_1] [i_3] [i_6]))));
                            arr_23 [i_0] [i_1] [i_2] [i_1] [4ULL] = ((/* implicit */_Bool) arr_8 [i_0]);
                            arr_24 [i_0] [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */signed char) arr_0 [(unsigned char)5]);
                            arr_25 [i_0] [i_3] [i_1] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)50350)) ^ (((/* implicit */int) arr_10 [i_1] [i_1] [(unsigned char)0] [i_3]))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_27 [(unsigned short)13] [(unsigned char)11] [i_2] [i_1] [i_1] [i_0]))));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_2] [i_2] [i_0 + 3] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_22 [i_7] [11U] [i_7 + 2] [i_7 + 1] [i_0 - 1] [0ULL])))))));
                            var_17 = ((/* implicit */_Bool) (unsigned char)89);
                            var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 5813896518604962419ULL)))))));
                            var_19 = var_1;
                        }
                        for (unsigned char i_8 = 1; i_8 < 16; i_8 += 2) /* same iter space */
                        {
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0 + 2] [i_0 + 1] [8ULL] [i_0 - 1] [i_0] [i_0] [(signed char)0]))) | (4003410750U)));
                            arr_35 [i_0] [i_0] [(_Bool)1] [i_1] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135))) / (8880602508489483797ULL)));
                            var_20 = -8622288995289019104LL;
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            arr_38 [i_9] [i_0 + 2] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-64))))));
            var_21 &= ((/* implicit */_Bool) (+(arr_26 [i_0 + 3] [i_0] [i_0 + 3] [i_0] [i_0 + 3])));
        }
        arr_39 [i_0 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_31 [10] [10] [(_Bool)1] [i_0] [i_0 + 1] [10ULL] [(unsigned short)8])) ? (14932956437819077849ULL) : (var_8))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [2U])))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_4);
}
