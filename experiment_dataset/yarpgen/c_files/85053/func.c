/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85053
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
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-(((/* implicit */int) (signed char)-67)))))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_3])))));
                        var_20 = ((arr_0 [i_0 - 1]) == (arr_0 [i_0 - 1]));
                        var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) (short)32763))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_0 - 2] [i_0 - 2])))) : (((((/* implicit */_Bool) arr_4 [i_3] [(unsigned char)10] [i_0 + 1])) ? (arr_7 [i_0 - 1] [i_1] [(_Bool)1] [i_3]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_2] [i_3]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            arr_13 [i_0 + 1] [i_0] |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [1ULL] [i_4] [i_4])) || (((/* implicit */_Bool) arr_4 [i_4] [i_4] [(unsigned short)7])))))) == (arr_0 [i_0])));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 2; i_6 < 10; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_16))));
                            var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0]))) : (arr_16 [i_5] [i_7]))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [(_Bool)1] [10U] [i_6 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) var_13)))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            var_24 -= ((/* implicit */short) arr_5 [i_8] [i_0]);
            arr_28 [i_8] [(unsigned char)12] = ((/* implicit */unsigned int) (short)8157);
        }
        /* LoopSeq 1 */
        for (unsigned short i_9 = 1; i_9 < 11; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((unsigned long long int) ((var_11) << (((((/* implicit */int) arr_30 [i_0] [i_0])) - (40)))))))));
                            arr_44 [i_9] [i_11] [i_10] [i_10] [i_11] [i_0] = ((/* implicit */unsigned short) arr_22 [(short)6] [(unsigned char)4]);
                        }
                    } 
                } 
            } 
            arr_45 [i_0 - 1] [i_9] = ((/* implicit */short) var_0);
            arr_46 [i_0] = ((/* implicit */int) (((-(var_7))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) && (((/* implicit */_Bool) arr_32 [i_0 - 2] [i_0] [i_0]))))))));
        }
    }
    var_26 -= ((/* implicit */unsigned char) var_13);
    var_27 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25591))) | (3596995341851159406ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_13)))))) ? (((/* implicit */unsigned long long int) min((((long long int) var_11)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_6)))))))) : (((((var_17) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2))))))));
}
