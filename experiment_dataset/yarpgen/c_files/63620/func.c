/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63620
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_6)) : (arr_4 [i_0 + 2] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57223))) : (var_3))))))) : (((/* implicit */int) var_12))));
                var_20 = ((/* implicit */unsigned short) (+(((unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))))));
                arr_5 [i_1] = ((/* implicit */signed char) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))), (-1210050167)));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) min((max((max((2001549955), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_1 [i_1] [i_0 + 2]))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_21 &= ((/* implicit */signed char) max((max(((short)(-32767 - 1)), (arr_0 [i_2] [i_2]))), (arr_0 [i_2] [i_2])));
        arr_11 [i_2] = ((/* implicit */_Bool) ((arr_7 [i_2]) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned char) (_Bool)1))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)))) : ((~(max((((/* implicit */int) arr_8 [i_2])), (1879191254)))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned char)0))))) : (((/* implicit */int) arr_7 [i_2]))))));
    }
    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_3] [i_3])) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_12 [i_3] [i_3]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65280)) || ((_Bool)1))))));
        arr_14 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (arr_13 [i_3])))) ? (((arr_13 [i_3]) - (var_7))) : (((1678791929) - (arr_13 [i_3])))));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) var_2);
        var_24 = ((/* implicit */int) var_5);
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) (_Bool)1)))));
    }
    for (unsigned int i_4 = 3; i_4 < 21; i_4 += 1) 
    {
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) min(((~(((((/* implicit */_Bool) 15617610068400114168ULL)) ? (15617610068400114168ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) max((arr_17 [i_4 - 2]), (((/* implicit */unsigned char) (_Bool)1))))))))));
        arr_21 [i_4] [i_4] = ((/* implicit */int) max((((/* implicit */unsigned short) (!((_Bool)1)))), (max((((/* implicit */unsigned short) (_Bool)1)), (max(((unsigned short)65535), (((/* implicit */unsigned short) (short)-3510))))))));
        var_26 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)))));
    }
}
