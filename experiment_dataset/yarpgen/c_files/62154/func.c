/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62154
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
    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((var_8), (((/* implicit */signed char) ((var_7) > (((/* implicit */unsigned long long int) 1056964608LL)))))))) + (2147483647))) >> (((((/* implicit */int) var_3)) + (17549)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3)))))));
        arr_3 [i_0] &= ((/* implicit */unsigned int) ((unsigned long long int) min((arr_1 [i_0 + 2] [i_0 - 1]), (((/* implicit */unsigned int) var_15)))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_1 = 3; i_1 < 22; i_1 += 1) 
    {
        arr_7 [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((unsigned long long int) arr_5 [(signed char)21])) : (((/* implicit */unsigned long long int) var_14))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1056964578LL)))))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_5 [i_1 - 3]))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 22; i_2 += 1) 
        {
            for (unsigned short i_3 = 2; i_3 < 21; i_3 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) 3928095399U);
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 1; i_4 < 23; i_4 += 3) 
                    {
                        arr_14 [(short)22] [i_2] [i_3 + 1] [i_3 + 2] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 + 1])))));
                        arr_15 [i_1] [i_2] [i_3 + 2] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 2])) * (((/* implicit */int) (unsigned short)0))));
                        arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_5)) : (var_6));
                    }
                    for (unsigned char i_5 = 2; i_5 < 23; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
                        arr_20 [i_2] [i_3 + 1] [i_2] [i_2] = ((/* implicit */unsigned char) var_5);
                    }
                }
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        arr_23 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_4 [i_6]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (arr_22 [i_6] [i_6])))) : (((max((var_13), (((/* implicit */unsigned long long int) arr_17 [i_6] [i_6] [i_6] [i_6])))) & (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_1)))))))));
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
        arr_24 [i_6] [i_6] = ((((/* implicit */_Bool) (+((+(3928095399U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1056964608LL) < (-1056964610LL))))) : (((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
    }
    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        var_23 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
        var_24 = ((/* implicit */long long int) var_0);
        arr_28 [(unsigned char)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_9)) : (1631922110)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (max((var_6), (((/* implicit */unsigned long long int) arr_9 [i_7]))))));
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                for (int i_10 = 1; i_10 < 18; i_10 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) max(((-(var_13))), (((/* implicit */unsigned long long int) (~(var_10))))));
                        arr_37 [i_8] = ((/* implicit */unsigned long long int) var_8);
                    }
                } 
            } 
        } 
    }
}
