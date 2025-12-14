/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74944
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
    var_11 = ((unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)-2)) + (((/* implicit */int) var_10))))), (var_4)));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_12 -= ((/* implicit */long long int) var_10);
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)62))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= (arr_2 [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) % (arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) (unsigned short)7036);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned char) arr_5 [(unsigned short)8]);
                        var_15 = ((/* implicit */short) (~(max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_9))), (((/* implicit */unsigned long long int) min(((unsigned short)7036), (((/* implicit */unsigned short) arr_10 [i_0 + 1] [i_0 - 2] [i_1] [i_2] [i_0] [i_3])))))))));
                    }
                    for (short i_4 = 2; i_4 < 7; i_4 += 2) 
                    {
                        arr_13 [i_0] = ((/* implicit */_Bool) min(((signed char)-35), (arr_4 [i_0])));
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) arr_12 [0ULL] [i_1] [i_4])) - (44469))))))), (((((/* implicit */int) min((arr_11 [i_0] [i_1] [i_2] [i_2] [i_4]), ((signed char)-35)))) | (((/* implicit */int) ((((/* implicit */int) arr_4 [i_4])) == (((/* implicit */int) var_3))))))))))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((signed char) (unsigned char)189)))) ? (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [(unsigned char)6])) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_10 [(unsigned short)3] [(unsigned short)3] [i_2] [i_2] [i_0] [(unsigned short)3])) : (((/* implicit */int) var_7))))))));
                        arr_14 [i_0] [i_2] [i_2] [(short)8] [i_0 + 2] [i_0] = ((/* implicit */short) min(((-(var_4))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-125)))))));
                    }
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-32739)) ? (((/* implicit */int) ((short) var_1))) : ((~(((/* implicit */int) var_2)))))), (((/* implicit */int) ((short) arr_8 [i_0 - 1] [i_0] [(unsigned char)8] [i_0 - 1])))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                {
                    arr_24 [i_6] [i_5] = ((/* implicit */long long int) arr_23 [(signed char)7]);
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_4), (7644419089191604026LL))) > (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [i_6] [i_6] [i_7]))))))) != (min((max((((/* implicit */unsigned long long int) (short)-1)), (18239443851394828816ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [5LL]))) : (var_4))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 18; i_8 += 2) 
        {
            for (unsigned short i_9 = 1; i_9 < 18; i_9 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_25 [i_5] [i_5])) ? (((/* implicit */int) arr_25 [i_8 - 1] [i_8 + 1])) : (((/* implicit */int) arr_25 [i_5] [i_8 - 1]))))));
                    arr_32 [i_5] [i_8] [12LL] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_27 [i_8])), (min((var_9), (18239443851394828831ULL))))) - (arr_15 [i_9])));
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
                    {
                        arr_36 [i_5] [i_8] [i_8 + 1] [i_9] [i_9] [i_8 + 1] = (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (arr_16 [i_9 + 1]))));
                        var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_17 [i_10] [i_9])) ? (1LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_7))))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) (-(min((((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [i_5] [i_9] [i_11]))) + (1725317319075925104LL))), (((/* implicit */long long int) var_7))))));
                        arr_39 [i_5] [i_9] [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_18 [i_8 - 1] [i_8 + 1]), ((signed char)(-127 - 1))))), (min((((/* implicit */int) ((signed char) var_0))), (((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_29 [i_11] [i_9 + 1] [(short)1] [i_5]))))))));
                    }
                }
            } 
        } 
        arr_40 [i_5] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)43877))))));
    }
}
