/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96968
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) max((min((max((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0 - 2]))), (((((/* implicit */_Bool) arr_0 [(unsigned short)7])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [i_0])))))), (((((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0])))) >> ((((~(arr_0 [10]))) + (1675657373)))))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) ((unsigned long long int) -885687876));
                        arr_9 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((short) arr_8 [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) max((arr_3 [i_0 - 1] [i_1]), ((short)29656)))) : (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_4 [i_1]) : (((/* implicit */int) arr_5 [i_0])))))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_1 [(short)5])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))));
                        arr_10 [(short)0] [i_1] [(short)0] [(unsigned short)11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0 - 1]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_3] [i_1])), (arr_1 [i_3])))) : (((/* implicit */int) max((arr_1 [i_2]), (((/* implicit */unsigned short) arr_3 [i_0 + 1] [i_1])))))))) ? (max((((((/* implicit */_Bool) (unsigned short)896)) ? (arr_0 [i_3]) : (1006632960))), (((/* implicit */int) (unsigned short)65532)))) : (((/* implicit */int) arr_1 [i_1]))));
                    }
                } 
            } 
            var_15 = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((min((((arr_4 [i_1]) | (((/* implicit */int) arr_8 [13LL] [(unsigned short)11] [(unsigned short)11] [(unsigned short)11])))), (((/* implicit */int) arr_1 [i_0])))) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_1] [i_1] [i_0] [i_0])) + (1204)))))) : (((/* implicit */unsigned short) ((((((min((((arr_4 [i_1]) | (((/* implicit */int) arr_8 [13LL] [(unsigned short)11] [(unsigned short)11] [(unsigned short)11])))), (((/* implicit */int) arr_1 [i_0])))) - (2147483647))) + (2147483647))) >> (((((((/* implicit */int) arr_7 [i_1] [i_1] [i_0] [i_0])) + (1204))) - (1638))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            arr_13 [i_4] [(unsigned char)13] [i_4] = ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) arr_1 [i_4])) : (((((/* implicit */int) ((short) arr_0 [i_0]))) & (((((/* implicit */int) arr_11 [i_0])) << (((arr_4 [i_4]) + (1470182967))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    {
                        arr_18 [i_0 - 1] [(unsigned short)0] [i_4] [i_6] [i_4] [i_4] = ((unsigned short) (+(((/* implicit */int) ((short) arr_17 [i_6] [i_6] [(short)7] [(short)6] [i_6])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [i_0 + 1] [(short)10] [i_0 + 1] [(short)10])) ? (arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_0 [(short)3]))), (((arr_0 [i_6]) - (((/* implicit */int) arr_6 [(unsigned char)12])))))))));
                            arr_21 [i_0] [i_4] [i_4] [(short)0] [i_7] = arr_15 [i_7] [i_4] [i_4] [i_0];
                            var_17 = ((/* implicit */long long int) min((((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_20 [i_5])) : (arr_0 [(unsigned short)11])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_12 [i_0] [i_5] [i_7]))))))));
                        }
                        arr_22 [i_4] = ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_6 [(unsigned short)13])) ^ (((/* implicit */int) arr_6 [i_6])))) | ((~(((/* implicit */int) arr_11 [i_0])))))) & (((/* implicit */int) arr_3 [i_4] [i_4]))));
                        arr_23 [i_6] [6] [i_6] [i_4] [i_6] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0])) & (((/* implicit */int) arr_15 [(unsigned char)1] [i_0 - 1] [i_4] [i_6]))))) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [(unsigned char)6] [i_4])), (arr_6 [i_0])))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((long long int) ((unsigned short) (~(((/* implicit */int) arr_6 [i_0])))))))));
            arr_24 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (~(arr_0 [i_0]))))) ? (min((1525818799), (((((/* implicit */_Bool) (short)-482)) ? (((/* implicit */int) arr_16 [i_0] [i_4] [i_4] [i_4])) : (-88156410))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_0 [(unsigned short)13]) : (((/* implicit */int) arr_12 [i_4] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_8 [(unsigned short)8] [i_4] [(short)3] [(short)3])) ? (((/* implicit */int) arr_6 [i_4])) : (((/* implicit */int) arr_8 [i_4] [i_4] [3LL] [(unsigned short)13])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [(short)11] [i_0] [i_0])), (arr_1 [i_0]))))))));
        }
    }
    for (short i_8 = 1; i_8 < 11; i_8 += 3) 
    {
        var_19 += ((/* implicit */unsigned short) min((arr_15 [i_8] [i_8] [10ULL] [10ULL]), (arr_5 [i_8 - 1])));
        arr_28 [i_8] = ((/* implicit */unsigned char) arr_26 [i_8 + 2]);
    }
    var_20 -= ((/* implicit */unsigned short) ((min((((/* implicit */int) var_8)), (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_5)))))) ^ (((/* implicit */int) ((short) ((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
    var_21 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))), (((unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1)))))));
    var_22 = ((/* implicit */unsigned short) var_1);
}
