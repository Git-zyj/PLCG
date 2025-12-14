/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69297
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
    var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (var_0))))) >= (70368744175616ULL));
    var_16 = ((/* implicit */_Bool) var_9);
    var_17 = ((/* implicit */short) ((max(((-(((/* implicit */int) (unsigned short)56093)))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-2)) && (((/* implicit */_Bool) 1476160168327806106ULL))))))) > (((/* implicit */int) max((((/* implicit */signed char) var_7)), (var_8))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) -319576322)) ? (2147483647) : (-2147483633)))))), ((-(((long long int) var_11))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 9; i_2 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_1] [(unsigned char)5])) + (28474))))) == (((((/* implicit */int) var_4)) / (((/* implicit */int) var_8))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_0))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((2838811655896783346LL) / (((/* implicit */long long int) ((/* implicit */int) (short)18229)))));
                    arr_10 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-105)) ^ ((-2147483647 - 1))));
                }
                /* vectorizable */
                for (long long int i_3 = 2; i_3 < 9; i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((long long int) var_6));
                    arr_14 [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) var_9);
                }
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_18 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) (((-(((/* implicit */int) arr_3 [i_4] [i_0] [i_4])))) <= (((((/* implicit */int) arr_3 [i_0] [6LL] [6LL])) | (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) 1476160168327806136ULL)) || (((((/* implicit */_Bool) var_12)) && (arr_16 [i_0] [(signed char)11] [i_4]))))) ? (((/* implicit */unsigned long long int) max((max((15LL), (((/* implicit */long long int) -534612003)))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_2 [(unsigned char)9] [i_1])) + (90))))))))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (-2147483643)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_12)))))));
                }
                /* vectorizable */
                for (long long int i_5 = 1; i_5 < 10; i_5 += 2) 
                {
                    var_20 = ((/* implicit */short) (unsigned short)65535);
                    arr_23 [i_5] = ((((/* implicit */_Bool) arr_12 [(signed char)7] [i_5 - 1])) ? (((/* implicit */int) arr_12 [i_0] [i_5 + 1])) : (((/* implicit */int) var_14)));
                }
                var_21 = ((/* implicit */short) -534612003);
            }
        } 
    } 
}
