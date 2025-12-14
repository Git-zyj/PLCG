/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8693
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_7))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)114))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [20U] [i_2] [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_0] [i_4] [i_2] [i_0]));
                                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [10ULL])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) var_1)) : (9223372036854775807LL));
                                var_16 = (!(((/* implicit */_Bool) 9223372036854775807LL)));
                            }
                        } 
                    } 
                } 
                var_17 &= min((((unsigned int) arr_11 [i_0] [i_0] [i_1] [i_0] [i_0])), (((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)-95)) + (((/* implicit */int) (signed char)94))))))));
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    var_18 -= ((/* implicit */int) (-(max((18446744073709551615ULL), (5571934274348997980ULL)))));
                    arr_15 [(unsigned char)0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)114))))), (min((((/* implicit */unsigned int) (unsigned char)89)), (4294967295U))))), (((/* implicit */unsigned int) ((unsigned short) arr_11 [i_0] [i_0] [i_1] [i_1] [i_5])))));
                }
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)127)), (5571934274348997964ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_1] [i_0]))))) : (((/* implicit */int) ((_Bool) arr_6 [(signed char)12] [i_1] [i_0] [i_6] [i_1])))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((signed char) (signed char)-115)))));
                    var_21 -= ((/* implicit */unsigned short) min((max((12874809799360553617ULL), (((/* implicit */unsigned long long int) (signed char)-108)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) var_8)))))));
                    arr_20 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -1338338934)) ^ (max((10ULL), (((/* implicit */unsigned long long int) (signed char)-114))))));
                }
                for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    var_22 = arr_10 [i_0] [i_0];
                    var_23 |= ((/* implicit */short) max((min((((/* implicit */unsigned long long int) ((signed char) (signed char)99))), (((unsigned long long int) arr_16 [i_0] [i_0] [i_7] [i_7])))), (8ULL)));
                }
            }
        } 
    } 
}
