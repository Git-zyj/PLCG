/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58793
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
    var_11 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
    var_12 = ((/* implicit */_Bool) 483506531060695918ULL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) + (((arr_0 [i_0] [(signed char)3]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_2 [i_0] = ((/* implicit */int) ((var_7) + (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-21179))))));
        var_14 = ((/* implicit */short) 5384851102017092831ULL);
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) 4054530571U)) ? (2449130232647998233ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)21178)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1449853261U))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 22; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned int i_4 = 1; i_4 < 22; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            arr_16 [i_1] [i_2] [i_3] [(unsigned char)1] [i_5] = ((/* implicit */short) ((17963237542648855698ULL) + (((/* implicit */unsigned long long int) (~(513332263U))))));
                            arr_17 [i_1] [i_2 + 2] [i_3] [i_4 + 1] [i_5] = ((/* implicit */unsigned int) min((((max((1198638958), (((/* implicit */int) var_6)))) + (arr_5 [7U] [(short)9] [i_3]))), (((((((/* implicit */int) var_0)) + (((/* implicit */int) var_6)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) var_3)) - (49296))))), (((/* implicit */int) var_9))))) + (min((432441395U), (var_8)))));
                            var_18 -= ((/* implicit */signed char) arr_0 [i_1] [i_2 + 1]);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_2))));
                            arr_21 [i_1] [i_1] [i_2] [(short)21] [i_4] [(signed char)4] = ((/* implicit */short) (~(-1448837843409912748LL)));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_3]);
                            var_21 = ((/* implicit */signed char) arr_0 [i_1] [(_Bool)0]);
                            var_22 = ((/* implicit */unsigned int) 5290322086200777448LL);
                        }
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-21179)) + (((/* implicit */int) var_4)))) + (arr_9 [i_1]))))));
    }
    var_24 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_7) : (7957405284200024516LL)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            {
                var_25 = ((/* implicit */long long int) (!(((_Bool) arr_20 [i_9] [i_9] [(signed char)8] [i_8] [i_8]))));
                arr_29 [i_9] [i_9] [(unsigned short)17] |= ((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_19 [i_9] [12] [i_9] [i_8] [i_8] [i_8])) : (((/* implicit */int) (unsigned char)73)))) + (((((/* implicit */int) (unsigned short)46560)) + (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) var_4))));
                arr_30 [i_8] [i_9] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (short)-21178)))) + (((((/* implicit */int) (signed char)8)) + (((/* implicit */int) (short)21183))))));
            }
        } 
    } 
}
