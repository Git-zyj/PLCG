/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70821
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
    var_11 = ((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)245)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */int) ((min((((/* implicit */int) (unsigned char)248)), ((-(((/* implicit */int) arr_8 [i_2] [i_1] [i_1] [i_1] [(_Bool)1])))))) == (((((/* implicit */int) arr_8 [i_2] [i_3] [i_3 - 2] [i_3 + 1] [i_2])) + (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_2]))))));
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_9 [i_2] [8] [i_3] [5U] [i_3 - 1]), (arr_6 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_2])))) ? (((/* implicit */long long int) (+(var_9)))) : (((((/* implicit */_Bool) max((arr_0 [i_2]), (arr_6 [(unsigned char)0] [5LL] [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_0])))))))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned char) (~(max((((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) var_4)))), (((/* implicit */int) arr_6 [i_0] [(short)2] [i_0] [(short)0]))))));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max((var_6), (max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (arr_1 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)10)) && (((/* implicit */_Bool) arr_1 [(unsigned char)10] [i_0]))))))))))));
        var_16 ^= ((/* implicit */short) 6891089090936265413LL);
    }
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
    {
        var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) arr_11 [i_4] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26964))) : ((-((-(var_5)))))));
        arr_13 [i_4] = ((/* implicit */unsigned short) (+(min((((/* implicit */int) (!(((/* implicit */_Bool) 1289793748))))), (var_1)))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~((~(1289793761))))))));
                    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5]))) : (arr_16 [i_5]))) == (arr_16 [i_5])));
                    var_20 |= ((/* implicit */unsigned char) var_2);
                    var_21 = ((/* implicit */int) (unsigned char)96);
                }
            } 
        } 
        arr_20 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-50))))) ? (var_10) : (((/* implicit */unsigned long long int) (~(-216242781))))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                {
                    var_22 &= ((/* implicit */int) var_10);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */short) var_6);
                                arr_32 [8U] [i_8] [i_9] [i_8] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_8])) + (((/* implicit */int) arr_25 [i_8]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
