/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60861
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)79))) + (var_7))), (((/* implicit */unsigned int) (signed char)-70))))) ? (((/* implicit */int) ((var_12) > ((+(var_12)))))) : ((~(((((/* implicit */int) (unsigned short)11133)) % (((/* implicit */int) var_11))))))));
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])) <= (((/* implicit */int) (signed char)24))))) + (((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 3]))))) ? (var_12) : (((/* implicit */long long int) var_8)));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        {
                            arr_14 [i_1] [i_1] [i_1] [i_1] [(short)5] = ((/* implicit */short) var_2);
                            var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39252))))) ? (((((/* implicit */_Bool) (unsigned short)26284)) ? (((/* implicit */int) (unsigned short)26284)) : (((/* implicit */int) arr_0 [i_2] [i_2])))) : (((/* implicit */int) ((arr_9 [i_0]) >= (((/* implicit */int) arr_3 [i_0] [i_3] [i_2])))))))), (((((_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */long long int) ((((var_8) + (2147483647))) >> (((((/* implicit */int) (unsigned short)39252)) - (39236)))))) : ((((_Bool)0) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) < (((unsigned long long int) (unsigned short)39249)))))) : (((((/* implicit */_Bool) min((arr_7 [i_0] [i_0] [(unsigned char)8]), (((/* implicit */unsigned long long int) (unsigned short)39252))))) ? (((((/* implicit */_Bool) arr_9 [i_0])) ? (-4119981678336990608LL) : (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1 - 2] [i_1] [9U])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10)))))))))));
            var_18 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (short)1563)) : (var_1)))) % (18446744073709551611ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4041373157U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 3])))))) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) ((unsigned short) arr_5 [i_1 + 2] [i_1] [i_1] [i_1]))))))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 253594139U)) ? (4119981678336990608LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 + 3] [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_1])))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1 - 1])))));
        }
        arr_15 [i_0] = ((/* implicit */long long int) ((signed char) arr_2 [i_0]));
    }
    for (int i_5 = 3; i_5 < 16; i_5 += 4) 
    {
        var_20 = 15958477774616215539ULL;
        var_21 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_18 [i_5 - 3])) ? (((/* implicit */unsigned int) (~(arr_16 [i_5])))) : (arr_19 [i_5]))));
    }
    for (short i_6 = 4; i_6 < 15; i_6 += 1) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */int) 0U);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            var_22 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4119981678336990588LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (arr_19 [(unsigned char)0])))) && (((/* implicit */_Bool) ((long long int) arr_25 [i_6])))));
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                for (signed char i_9 = 3; i_9 < 12; i_9 += 2) 
                {
                    {
                        arr_33 [i_8] [i_8] [5LL] [2LL] [(unsigned short)5] [i_6] = ((/* implicit */signed char) (short)13241);
                        var_23 = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)37683)))) > ((~(((/* implicit */int) arr_18 [i_8]))))));
                    }
                } 
            } 
        }
    }
    var_24 = ((/* implicit */unsigned int) -1);
}
