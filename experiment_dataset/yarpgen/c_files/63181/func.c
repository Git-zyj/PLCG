/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63181
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) (short)-69);
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((short)-69), (((/* implicit */short) (_Bool)1))))) < (((/* implicit */int) var_0)))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_0 [i_0])))))) : (min((((/* implicit */long long int) var_10)), (1075328822338310880LL))))), (((/* implicit */long long int) var_13)))))));
    }
    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        var_20 = ((/* implicit */signed char) arr_8 [i_3] [i_3]);
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (short i_5 = 3; i_5 < 21; i_5 += 1) 
            {
                {
                    var_21 -= ((/* implicit */signed char) arr_10 [i_5 - 3] [i_5 - 1] [i_5 + 1]);
                    var_22 = (_Bool)0;
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 21; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) var_0);
                                var_24 ^= ((/* implicit */_Bool) arr_18 [i_3] [(_Bool)0] [i_3]);
                                var_25 = ((/* implicit */_Bool) (~((+(((/* implicit */int) (short)69))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        arr_24 [i_4] = ((/* implicit */short) max(((-(var_14))), (((/* implicit */long long int) min((arr_9 [i_5 - 1]), (arr_9 [i_5 - 3]))))));
                        arr_25 [i_3] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 602424490U)) ? (((/* implicit */int) (short)-816)) : (((/* implicit */int) (short)-1))))), (var_4))));
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((int) ((((/* implicit */_Bool) 0)) ? (arr_7 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3] [i_3] [i_8] [i_5 + 1] [i_3])))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) <= (((((/* implicit */_Bool) (unsigned short)12918)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (arr_17 [(signed char)20] [i_3] [i_5] [17] [i_3])))))))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                {
                    var_27 &= ((/* implicit */unsigned short) (-(min((((/* implicit */long long int) (short)69)), (0LL)))));
                    var_28 ^= ((/* implicit */_Bool) arr_28 [i_9] [i_3]);
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_23 [i_12] [i_11] [i_10] [i_10] [i_9] [i_3]) / (((/* implicit */int) arr_20 [i_9] [i_11]))))) ? (127U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_3] [i_11])) ? (((/* implicit */int) arr_20 [i_11] [i_12])) : (arr_23 [i_3] [i_9] [i_10] [i_11] [i_11] [i_12])))))))));
                                var_30 = ((/* implicit */short) var_6);
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_33 [i_3] [i_3] [i_9] [i_9] [i_10] [i_3])) ? (((/* implicit */unsigned int) arr_11 [i_3])) : (127U)))));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)66))))) ? (((/* implicit */long long int) var_11)) : (var_15))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) * (var_14)))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    var_33 = ((/* implicit */short) (((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-1)))))) % (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (var_13)))) || (((137438953471ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)69))))))))));
}
