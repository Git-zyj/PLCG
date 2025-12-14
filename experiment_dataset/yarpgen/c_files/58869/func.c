/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58869
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 3482493401U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [7U]))) : (812473895U)));
        var_11 = var_4;
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            var_12 -= ((/* implicit */unsigned int) var_2);
            arr_8 [14] [i_1] [i_0] = ((/* implicit */int) var_5);
            var_13 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (3482493401U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4095))))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)255)))));
        }
        for (unsigned char i_2 = 3; i_2 < 21; i_2 += 2) 
        {
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) 773233092U))));
        }
        for (unsigned int i_3 = 3; i_3 < 21; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_3 + 1] [i_3] [i_3 - 2] [i_3 - 3])) ? (812473895U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3 - 2] [i_3] [i_3 - 3] [i_3 - 2])))));
                arr_19 [(signed char)19] [i_0] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
            }
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 3; i_6 < 20; i_6 += 2) 
                {
                    for (unsigned char i_7 = 3; i_7 < 22; i_7 += 2) 
                    {
                        {
                            arr_26 [i_0] [i_7 + 1] [i_6] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)25284)) ? (arr_4 [(unsigned char)13]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9)))))));
                            var_16 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((unsigned int) arr_20 [i_5] [i_5] [i_5])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-1))))));
                            var_17 += ((/* implicit */short) var_7);
                        }
                    } 
                } 
            } 
            arr_27 [(_Bool)1] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3 - 3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) ? ((~(812473894U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
        }
    }
    for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 773233092U)) ? (((((/* implicit */_Bool) (-(arr_24 [i_8] [i_8] [i_8] [i_8] [(unsigned short)1])))) ? (((/* implicit */long long int) ((arr_15 [i_8]) / (((/* implicit */int) var_6))))) : ((-(973470703745887222LL))))) : (((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))) / (773233092U))), (((/* implicit */unsigned int) var_7)))))));
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            for (unsigned int i_10 = 3; i_10 < 13; i_10 += 1) 
            {
                {
                    arr_34 [i_8] [i_9] [(unsigned char)9] = ((/* implicit */_Bool) arr_9 [i_8]);
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_13 [i_8] [(unsigned short)0] [i_10 - 1])), (((((/* implicit */_Bool) var_7)) ? (min((0U), (((/* implicit */unsigned int) (signed char)-9)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
                }
            } 
        } 
    }
    var_20 = var_1;
    var_21 |= var_3;
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (1275928251U))))), (max((1U), (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (var_4)))))))))));
    var_23 = (unsigned char)160;
}
