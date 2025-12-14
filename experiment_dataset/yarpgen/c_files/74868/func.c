/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74868
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)12629))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)3)) ? (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_19)))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_0 [i_1]))) % (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_9)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) 0U))));
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_23 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) != (arr_9 [i_1] [i_1] [i_1] [i_1])));
                            arr_18 [i_1] = ((/* implicit */unsigned short) ((unsigned char) arr_13 [i_1] [i_2] [i_3] [i_1] [i_1]));
                            arr_19 [i_4] [i_4] [i_4] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7)))));
                        }
                    } 
                } 
            } 
            var_24 = ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-58))))) & (45477089U));
        }
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                {
                    var_25 *= ((/* implicit */long long int) arr_12 [(unsigned char)11] [i_6]);
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((((var_4) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1] [i_1] [i_6] [i_7]))) : (var_5))) != (((/* implicit */long long int) ((((/* implicit */int) (short)1392)) % (((/* implicit */int) var_11))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_7] [i_7] [i_7]))) : (((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_6] [i_7] [i_1]))) | (var_5))) >> (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_10))))))))))));
                }
            } 
        } 
        arr_28 [i_1] = ((/* implicit */unsigned char) (((_Bool)1) ? ((-(((/* implicit */int) ((_Bool) (unsigned char)128))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)27245))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54336))) != (6770953472697174781ULL)))) : (((/* implicit */int) min((var_13), (((/* implicit */unsigned short) (unsigned char)173)))))))));
    }
    var_27 = ((/* implicit */unsigned long long int) var_19);
    var_28 = var_4;
    var_29 = ((/* implicit */unsigned short) var_9);
    var_30 *= ((/* implicit */unsigned char) max(((~(((((((/* implicit */int) var_12)) + (2147483647))) >> (((var_5) - (1400903331781148612LL))))))), ((~(((/* implicit */int) ((unsigned char) var_4)))))));
}
