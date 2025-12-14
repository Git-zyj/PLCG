/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93116
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
    var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) >= (((min((2838493611U), (((/* implicit */unsigned int) var_2)))) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [i_0] [6LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((long long int) (unsigned char)107)));
                        var_20 = ((((/* implicit */int) min((((/* implicit */short) (unsigned char)0)), (min((arr_8 [i_0] [i_1] [i_1] [i_3]), (((/* implicit */short) (_Bool)1))))))) - (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)42))))), (arr_6 [i_3] [i_0] [i_1] [i_0])))));
                        var_21 = ((/* implicit */unsigned short) arr_7 [(unsigned short)17]);
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] [i_2] = min((min((((/* implicit */int) ((((/* implicit */int) (signed char)1)) <= (((/* implicit */int) arr_2 [7U]))))), (((((/* implicit */_Bool) (unsigned short)20418)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)0)))))), (max((max((((/* implicit */int) (unsigned short)7077)), (-19))), (((/* implicit */int) (unsigned short)0)))));
                            arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] [i_1] [i_3] = ((/* implicit */_Bool) (unsigned short)65525);
                        }
                    }
                } 
            } 
        } 
        arr_14 [i_0] [(signed char)5] = ((/* implicit */_Bool) max((arr_1 [i_0]), (min((((((/* implicit */int) (signed char)121)) / (1308467171))), (((/* implicit */int) ((16383U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16748))))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        arr_19 [i_5] [i_5] = (!(((/* implicit */_Bool) arr_16 [i_5])));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34117))) : (arr_15 [i_5] [i_5]))))));
    }
}
