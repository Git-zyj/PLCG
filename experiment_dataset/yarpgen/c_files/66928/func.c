/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66928
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */long long int) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) min((var_2), (((/* implicit */signed char) arr_2 [i_0 + 1] [i_0])))))))) >= (max((arr_3 [i_0]), (((/* implicit */long long int) ((var_7) >= (var_6)))))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12368))) != (2020192918U)))) << (((arr_1 [i_0 + 1]) + (237508353)))))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) var_0);
        var_18 = ((/* implicit */long long int) max((-1006466659), (((/* implicit */int) (unsigned char)147))));
        arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((short) max(((_Bool)1), ((!(((/* implicit */_Bool) 4949688569756099900ULL)))))));
    }
    for (short i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        var_19 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_13)) ? (var_7) : (var_11))))) % (((unsigned long long int) var_1))));
        var_20 -= ((/* implicit */signed char) min((((/* implicit */unsigned int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_1]))))), (var_1)))), ((~(var_9)))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            arr_12 [i_2] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_9 [i_1 + 3])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_3)))), (((/* implicit */int) max((arr_7 [i_1]), (arr_7 [i_1]))))));
            var_21 = ((/* implicit */short) var_4);
        }
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_22 |= ((/* implicit */unsigned long long int) -7178104276405076613LL);
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned int) ((1006466659) / (((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        var_23 = ((/* implicit */short) -8603282509750755068LL);
        var_24 = ((/* implicit */unsigned char) var_0);
        arr_19 [i_4] = ((/* implicit */unsigned long long int) arr_18 [i_4]);
    }
    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            arr_25 [i_5] [i_5] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_21 [i_5])) / (var_16)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) (unsigned short)58986)))));
            var_25 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_21 [i_6])))));
            /* LoopNest 3 */
            for (unsigned char i_7 = 1; i_7 < 17; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) ((short) var_12));
                            var_27 = ((/* implicit */_Bool) max((var_27), (((((/* implicit */_Bool) arr_35 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [(signed char)4])) || (arr_36 [i_7] [i_7 + 1] [16] [(unsigned char)11] [i_7] [i_7 + 1] [i_7])))));
                        }
                    } 
                } 
            } 
        }
        for (int i_10 = 0; i_10 < 21; i_10 += 2) 
        {
            arr_39 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((long long int) var_13)), (((/* implicit */long long int) min(((unsigned short)6565), (((/* implicit */unsigned short) var_4)))))))) ? (min((((((/* implicit */int) var_3)) - (((/* implicit */int) var_8)))), (((/* implicit */int) var_13)))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
            var_28 |= ((/* implicit */long long int) ((((/* implicit */int) arr_30 [(unsigned short)7] [i_10] [i_10] [i_5] [i_5] [i_5])) << (((/* implicit */int) ((((/* implicit */long long int) ((arr_21 [i_10]) - (arr_21 [i_5])))) != (-2969564143947289385LL))))));
        }
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((unsigned long long int) max((arr_26 [i_5] [i_5] [i_5] [(signed char)5]), (arr_26 [i_5] [i_5] [i_5] [i_5])))))));
        arr_40 [i_5] = ((/* implicit */short) ((((-605860901) != (((/* implicit */int) (short)-25853)))) || (((arr_33 [i_5] [i_5] [(unsigned char)15] [i_5] [i_5]) != (arr_33 [i_5] [i_5] [i_5] [i_5] [i_5])))));
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_5] [i_5] [i_5] [i_5]))))) ? (((/* implicit */unsigned long long int) -1820685485)) : (max((min((((/* implicit */unsigned long long int) (unsigned short)38250)), (arr_32 [i_5] [i_5] [i_5] [(short)10] [i_5]))), (((/* implicit */unsigned long long int) var_15))))));
    }
}
