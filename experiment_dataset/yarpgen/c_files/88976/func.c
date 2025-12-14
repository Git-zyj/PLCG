/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88976
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
    var_10 = ((/* implicit */long long int) -1);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((unsigned short) ((long long int) (signed char)-60))))));
        var_12 ^= ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) (unsigned char)240))));
        arr_2 [i_0] [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)11)) / ((+(((/* implicit */int) (short)18954))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-18963))))) : ((~(min((var_2), (((/* implicit */unsigned int) var_1)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)48))) / (arr_4 [i_1])));
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 20; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                var_13 = ((/* implicit */short) (~(var_3)));
                var_14 -= ((/* implicit */unsigned short) (signed char)93);
                arr_13 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */int) arr_8 [i_1] [i_2 + 2] [i_3])) : (((/* implicit */int) var_6))));
                arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_10 [i_2] [i_2] [i_3]);
                arr_15 [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_2] [i_2 + 2]))));
            }
            for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 1) 
            {
                arr_18 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_2 + 3] [i_2])) ? ((~(((/* implicit */int) (signed char)3)))) : (((/* implicit */int) arr_11 [i_2] [i_4 + 1]))));
                arr_19 [i_1] [i_2] [i_4 - 3] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) 6555366617581773580ULL)))));
                arr_20 [i_2] [i_2] [i_4 - 2] [i_4 - 2] = ((/* implicit */unsigned long long int) -1495319869);
                arr_21 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5422949074852761236ULL)) ? (((/* implicit */int) ((unsigned char) (short)18946))) : ((+(((/* implicit */int) (short)8197))))));
            }
            var_15 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [18])) : (((/* implicit */int) arr_7 [(short)10]))));
        }
    }
    var_16 += ((/* implicit */long long int) (+((-((+(((/* implicit */int) (unsigned char)3))))))));
}
