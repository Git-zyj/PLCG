/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79696
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_10 |= ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) * (arr_3 [i_1]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_0 [i_0] [i_0])), ((unsigned char)238)))), (min((1817280203U), (((/* implicit */unsigned int) (unsigned char)176)))))))));
                var_11 = ((/* implicit */unsigned char) min((((/* implicit */int) min(((signed char)111), ((signed char)114)))), (((((/* implicit */_Bool) -515194388075471307LL)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (unsigned char)101))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned long long int) (~(var_2)));
                    var_13 = ((/* implicit */long long int) min((max((var_7), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_0]))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_2]))) : (max((18ULL), (((/* implicit */unsigned long long int) 2770021870U))))))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)140)) + (((/* implicit */int) (signed char)(-127 - 1)))));
    var_15 = ((/* implicit */int) min((max((min((var_7), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_2)))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 665498959597647284LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))) : (14680064U)))), (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) var_8))))))));
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 2) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */long long int) var_5)) : (min((((/* implicit */long long int) max((arr_12 [i_3 + 1] [i_3]), (((/* implicit */int) arr_0 [i_3 - 2] [i_3 - 2]))))), (((var_8) % (var_2)))))));
                var_17 ^= ((/* implicit */unsigned short) var_9);
                arr_14 [i_3] [i_4 + 2] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_3] [i_3])) | (((/* implicit */int) arr_6 [i_4 + 2]))))));
                var_18 = ((/* implicit */signed char) (_Bool)1);
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_5 [i_3] [i_4] [i_4]))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (((((/* implicit */_Bool) var_3)) ? (((var_0) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) || (var_4)))))))));
}
