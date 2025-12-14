/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87714
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (arr_4 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (var_11)))))))) + (var_9)));
            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))))), (((((/* implicit */_Bool) ((short) arr_0 [i_1] [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))) : (((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) var_2)))))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((-2079572715) >= (((/* implicit */int) (signed char)7))))), ((-(((unsigned long long int) var_2)))))))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)61440)) : (((/* implicit */int) (signed char)25))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 8; i_3 += 2) 
            {
                for (short i_4 = 4; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                        var_19 = ((((((/* implicit */_Bool) (signed char)-89)) && (((/* implicit */_Bool) 0)))) ? (((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_4] [i_4 - 3] [i_0])) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_2] [i_0])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4]))))) < (arr_8 [i_3 + 1] [(unsigned short)2] [(unsigned char)10])))));
                        arr_14 [1U] [4] [i_3] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_7 [i_3 + 3])) < (((/* implicit */int) arr_7 [i_3 + 2])))))));
                        var_20 = ((/* implicit */unsigned char) var_5);
                    }
                } 
            } 
        }
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
        {
            arr_19 [(unsigned char)6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (signed char)-10))));
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((arr_15 [i_0] [i_0] [6LL]) < (((/* implicit */unsigned long long int) arr_5 [i_0] [(signed char)2])))) ? ((+(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_1)) + (((/* implicit */int) arr_6 [i_5])))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_5] [i_0])) && (((/* implicit */_Bool) var_0))))))))))))));
            var_22 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)20)) | (arr_5 [6] [6]))))));
        }
    }
    for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 3) 
    {
        arr_22 [i_6] = ((/* implicit */unsigned char) var_7);
        arr_23 [i_6] = ((/* implicit */signed char) arr_20 [i_6] [(unsigned short)4]);
    }
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_10))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_8 - 2] [i_8 + 3] [i_9])) + ((~(((/* implicit */int) arr_29 [i_8 + 1] [i_8 + 1] [i_9])))))))));
                    arr_33 [i_9] [i_8 + 1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_20 [i_8 - 1] [i_8 - 1]))))) >= (((((/* implicit */_Bool) arr_20 [i_8 - 1] [i_8 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_20 [i_8 - 1] [i_8 - 1]))))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_11))));
                    var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_9] [i_8 - 2] [i_7])) || (((/* implicit */_Bool) (unsigned short)29822))))) : (1765622971)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_9] [i_8])) + (((((/* implicit */int) var_7)) | (((/* implicit */int) arr_30 [i_8 - 2] [i_8 - 1]))))))) : (((690482515U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531)))))));
                }
                arr_34 [9LL] [i_8 + 2] = ((/* implicit */_Bool) var_5);
            }
        } 
    } 
}
