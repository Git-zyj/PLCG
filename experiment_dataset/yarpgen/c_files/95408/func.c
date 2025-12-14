/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95408
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
    var_20 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (((~(((/* implicit */int) var_19)))) > (((/* implicit */int) var_5))))), (var_13)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_2 [1] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0 - 3]);
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), (arr_3 [i_1])))) ? (7813683992235365710LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))));
        var_23 ^= ((/* implicit */unsigned char) arr_4 [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_24 = ((/* implicit */int) ((unsigned long long int) arr_6 [i_2]));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            var_25 = ((/* implicit */unsigned int) max((max((arr_8 [i_2] [i_3] [i_3 + 1]), (arr_8 [(short)8] [i_3 + 1] [i_3 + 2]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_3 + 3] [i_3 + 3] [i_3 + 4])))))));
            arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_2] [i_2])) ? (((/* implicit */int) arr_6 [(_Bool)1])) : (((/* implicit */int) (_Bool)1))))))))) > (((unsigned long long int) ((((/* implicit */_Bool) -408115723)) || (((/* implicit */_Bool) var_10)))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                arr_17 [i_5] [i_2] [i_5] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_13 [i_4] [i_2] [i_2])))), (((/* implicit */int) (_Bool)1))));
                arr_18 [i_2] [i_4] [i_2] = arr_12 [i_2];
            }
            for (unsigned int i_6 = 1; i_6 < 9; i_6 += 3) 
            {
                var_26 -= ((/* implicit */unsigned char) (+(((/* implicit */int) min(((unsigned char)1), ((unsigned char)252))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) arr_12 [i_7]))));
                    var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)49558), (((/* implicit */unsigned short) (unsigned char)237))))) ? (arr_0 [i_6 + 1]) : (((((/* implicit */_Bool) arr_0 [i_6 - 1])) ? (arr_0 [i_6 - 1]) : (arr_0 [i_6 + 4])))));
                    var_29 = ((/* implicit */unsigned short) var_12);
                    arr_23 [i_2] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) min((min((((/* implicit */int) arr_5 [i_2])), (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_20 [i_7])))))), (((/* implicit */int) ((unsigned short) arr_11 [i_2] [i_2] [i_2])))));
                }
                var_30 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) > (((arr_6 [i_2]) ? (arr_4 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115))))))))));
            }
            var_31 = ((((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) arr_8 [6] [i_4] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_4] [i_4]))))));
        }
        for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            var_32 = ((/* implicit */unsigned short) arr_6 [i_8]);
            arr_26 [6] [i_2] [(unsigned char)8] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -408115713)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)247))))) ? (((/* implicit */unsigned long long int) max((arr_25 [i_8] [i_2] [i_2]), (var_18)))) : (max((arr_1 [i_2]), (((/* implicit */unsigned long long int) arr_6 [i_2])))))));
        }
    }
    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        arr_30 [i_9] = ((/* implicit */long long int) arr_14 [i_9] [i_9] [(unsigned char)10]);
        var_33 = ((/* implicit */unsigned char) (((_Bool)1) ? (min((((/* implicit */unsigned int) min((arr_25 [i_9] [i_9] [i_9]), (((/* implicit */int) arr_6 [i_9]))))), (var_14))) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)161)))))));
    }
    var_34 = ((/* implicit */signed char) (+((((!(((/* implicit */_Bool) var_13)))) ? (((((/* implicit */_Bool) var_6)) ? (799124893U) : (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
}
