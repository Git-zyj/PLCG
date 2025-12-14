/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65069
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
    var_20 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)153))))) : (((/* implicit */int) var_11))))));
    var_21 = (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned char)242)) - (((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_4 [i_0] = max((((long long int) arr_2 [i_1 + 1])), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)242)))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1610612736U)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) var_0))))) ? (((long long int) (unsigned short)50015)) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
                arr_6 [i_0 + 2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-30244)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)15503))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
    {
        var_22 -= ((/* implicit */_Bool) var_10);
        arr_9 [(short)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_8))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 1; i_5 < 21; i_5 += 1) 
            {
                arr_19 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) (-(((((/* implicit */_Bool) -564004382)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50017))) : (12505068050161511674ULL)))));
                /* LoopSeq 1 */
                for (signed char i_6 = 1; i_6 < 24; i_6 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((-(var_12))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-84)))));
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (unsigned char)16))));
                    arr_22 [i_3] [i_3] [i_5] [(short)17] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)15520))))));
                    arr_23 [i_3] [i_3] [i_3] [i_6] = ((/* implicit */int) var_18);
                    var_25 *= ((/* implicit */signed char) (_Bool)1);
                }
                arr_24 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3283507515228322407LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5 - 1]))) : (var_12)));
                arr_25 [i_3] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((int) arr_20 [i_5 + 2] [i_5 + 3] [i_5 + 2] [i_5] [i_5 + 2]));
            }
            arr_26 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) <= (((/* implicit */int) var_5)))))) != (((((/* implicit */long long int) -1193738464)) & (var_7)))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 216598275)) ? (((/* implicit */int) (signed char)-72)) : (2147483644))))))));
            arr_29 [i_3] [i_7] &= ((/* implicit */short) (-(134086656)));
        }
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            for (int i_9 = 3; i_9 < 22; i_9 += 2) 
            {
                {
                    arr_36 [i_3] [i_9] = ((/* implicit */int) ((_Bool) (-(arr_20 [i_9] [i_9] [i_9] [i_8] [i_3]))));
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (-(var_1))))));
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (short)-29122))));
                    var_29 = ((((/* implicit */_Bool) -1193738468)) ? (((((/* implicit */_Bool) arr_35 [i_3] [i_3])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))) : (arr_17 [i_3] [(unsigned char)2] [i_9 - 3] [i_9]));
                }
            } 
        } 
    }
}
