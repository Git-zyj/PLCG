/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67722
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1] [i_1]))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_3] [i_2])) ? (((/* implicit */int) var_12)) : (var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                    arr_13 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
                }
                for (long long int i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                {
                    var_16 -= ((/* implicit */unsigned char) ((arr_0 [i_1]) + (((/* implicit */unsigned long long int) var_10))));
                    arr_16 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((int) 1040135789549113584LL));
                }
                for (long long int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) != (2247940145U)));
                    /* LoopSeq 1 */
                    for (int i_6 = 1; i_6 < 22; i_6 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_2] [i_5]);
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~(arr_20 [i_1] [i_1] [i_6 - 1] [i_1] [(signed char)8]))))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_6 - 1] [i_6 - 1] [i_5] [i_6 + 2] [i_6 + 1])) & (((/* implicit */int) arr_11 [i_0] [i_6 + 2] [i_6 + 2] [i_5] [i_6 + 2] [i_6 + 2]))));
                        var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_1])) ? (var_9) : (((/* implicit */int) (unsigned char)188)))) <= (((/* implicit */int) arr_8 [i_0] [i_1] [i_1]))));
                    }
                }
                var_22 = ((/* implicit */_Bool) ((arr_14 [i_0] [i_1] [i_2]) ? (arr_9 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2])))));
                var_23 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_1])));
            }
            /* LoopSeq 2 */
            for (unsigned char i_7 = 2; i_7 < 22; i_7 += 1) 
            {
                var_24 -= ((/* implicit */unsigned char) var_3);
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_11) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-64)))))))))));
            }
            for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                var_26 -= ((/* implicit */unsigned int) ((unsigned long long int) var_3));
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    arr_27 [i_1] [i_0] [i_1] [i_8] [i_8] [i_9] = ((/* implicit */unsigned char) var_12);
                    var_27 = ((/* implicit */unsigned int) ((arr_19 [i_0] [i_0] [i_8] [i_0] [i_0] [i_1]) ^ (((/* implicit */int) var_0))));
                    var_28 = ((/* implicit */int) var_8);
                }
                var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
            }
            var_30 -= ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) var_8)))));
        }
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) arr_26 [i_0] [i_10] [i_10] [i_10]))));
            var_32 = ((/* implicit */long long int) min((((/* implicit */signed char) ((min((((/* implicit */int) var_2)), (arr_23 [15LL] [15LL] [i_10] [i_10]))) <= (((/* implicit */int) var_4))))), (var_6)));
        }
        var_33 = ((/* implicit */unsigned char) max(((-(((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) (signed char)-93)))))), (max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (8852800122987690286LL)))), (var_9)))));
        var_34 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [(signed char)4])) ? (((/* implicit */int) arr_11 [i_0] [(signed char)20] [15] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_4))))) == (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (18446744073709551615ULL)))))), (max((var_8), (((/* implicit */signed char) ((var_3) <= (arr_4 [i_0]))))))));
        var_35 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 67104768U)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_14 [i_0] [14] [i_0])) : (((/* implicit */int) arr_8 [i_0] [10LL] [i_0]))))))))) == (((((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (arr_12 [i_0] [i_0] [i_0])))) * ((+(arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_36 = ((/* implicit */signed char) var_4);
    var_37 = ((/* implicit */signed char) var_1);
}
