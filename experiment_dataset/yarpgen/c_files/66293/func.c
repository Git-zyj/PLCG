/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66293
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_10))))));
                var_13 = ((/* implicit */_Bool) max((((((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 1] [i_1 + 2])) | (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_1 + 2])))), (min(((~(((/* implicit */int) var_5)))), ((~(((/* implicit */int) arr_1 [i_1]))))))));
                arr_5 [i_1] [i_0] = ((/* implicit */long long int) (~(max((-1999655327), (-1999655327)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_14 |= ((/* implicit */short) max((((/* implicit */long long int) -1999655351)), ((-(max((((/* implicit */long long int) (signed char)60)), (var_8)))))));
                            var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)-59)) - (((/* implicit */int) (signed char)-11))))))) ? (((/* implicit */unsigned int) min((-1999655316), (((/* implicit */int) (short)-6788))))) : (((((/* implicit */_Bool) ((unsigned int) arr_10 [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))) : (((((/* implicit */_Bool) 8380127617692232479LL)) ? (255U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78)))))))));
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_2 [i_0 + 1] [i_0 + 1] [i_0]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (-2006566979) : (((/* implicit */int) (short)2495))))) ? (((/* implicit */int) max((var_4), (((/* implicit */short) var_10))))) : (max((((((/* implicit */_Bool) 4294967044U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-60)), (var_9))))))));
    /* LoopSeq 1 */
    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 4) 
    {
        arr_14 [i_4] = ((/* implicit */short) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) 33292288)) ? (2147483647) : (((/* implicit */int) (signed char)(-127 - 1)))))), (arr_9 [i_4 - 1]))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-76)) ? (1186013605U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) < (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [i_4]))) ^ (0U))))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_9 [i_5]))) ? (min((arr_9 [i_4 - 1]), (arr_9 [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_6]) == (arr_9 [i_4 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        for (int i_8 = 2; i_8 < 10; i_8 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) 20);
                                arr_26 [i_4] [i_4] [i_6] [i_7] [i_4] = ((/* implicit */signed char) max((((/* implicit */long long int) (short)2495)), ((-(arr_10 [i_8 + 1] [i_8 + 1] [i_8 + 1])))));
                                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((1270518726203774735LL), (((/* implicit */long long int) (unsigned short)34481)))), (((/* implicit */long long int) (unsigned short)65515))))) ? (((/* implicit */int) ((_Bool) 739072887))) : (((/* implicit */int) (short)4370))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) var_11)) ? (-4725038402921479572LL) : (((/* implicit */long long int) -902468740)))))), (((/* implicit */long long int) min((-739072888), (((/* implicit */int) (short)4370)))))));
    }
}
