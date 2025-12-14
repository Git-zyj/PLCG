/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79489
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_9))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_14))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) | (1428377839U)))));
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((short) min((var_3), (((/* implicit */unsigned int) arr_0 [(unsigned short)4])))))), (((2866589445U) & (((/* implicit */unsigned int) (-2147483647 - 1)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (arr_12 [i_0] [i_0] [i_1] [i_0] [i_3]) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))));
                        var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (6333794987632155786ULL)))) ? (((/* implicit */unsigned long long int) ((int) var_8))) : (var_0))) / (((((/* implicit */_Bool) 0U)) ? (12112949086077395800ULL) : (((/* implicit */unsigned long long int) 1331485826U))))));
                        var_21 = ((/* implicit */short) (~(((/* implicit */int) (short)-5877))));
                    }
                } 
            } 
            arr_13 [i_0] [(unsigned short)2] [i_1] = ((/* implicit */int) var_1);
            var_22 += ((/* implicit */unsigned char) ((unsigned short) min((12112949086077395800ULL), (((/* implicit */unsigned long long int) ((int) 3196385866U))))));
        }
        var_23 = ((/* implicit */int) min((((/* implicit */long long int) 825547070)), (min((((/* implicit */long long int) min((1700351865U), (((/* implicit */unsigned int) var_15))))), (7143448375129900392LL)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_24 = ((/* implicit */int) max((var_24), ((~(arr_16 [i_4] [i_4] [i_5])))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    {
                        arr_24 [(unsigned short)0] [i_6] [i_6] [i_6] [2LL] |= ((/* implicit */signed char) (~(((arr_18 [i_7]) ? (((/* implicit */int) arr_6 [i_6])) : (((/* implicit */int) var_12))))));
                        var_25 = ((/* implicit */unsigned short) ((arr_8 [i_6 - 1] [i_6 - 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6 - 2])))));
                        arr_25 [i_4] [i_7] [(_Bool)1] [i_7] = arr_22 [i_5] [i_6];
                        var_26 *= ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_11)))));
                        var_27 -= ((/* implicit */unsigned short) ((unsigned long long int) arr_17 [i_6 - 1] [i_6 - 2]));
                    }
                } 
            } 
        }
        for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [6U])) != (var_15))))));
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_4] [i_4] [i_8] [i_8]))) ^ (arr_4 [i_4] [i_8]))))));
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) var_8))));
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned short)23333))))) : (-1)));
        }
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            arr_34 [i_4] = ((/* implicit */int) ((2866589456U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4] [i_4] [4ULL] [i_9])))));
            var_32 = ((/* implicit */unsigned int) ((arr_11 [i_4] [i_4] [i_4] [i_4]) | (((/* implicit */long long int) ((/* implicit */int) (short)-5877)))));
        }
        var_33 = ((/* implicit */int) ((_Bool) var_11));
        arr_35 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)29883)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)136))))) < (arr_23 [(unsigned short)4])));
    }
    var_34 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) var_13)), (var_0))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)28576)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (unsigned char)105))))) == (var_1)))))));
}
