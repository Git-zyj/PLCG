/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79576
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
    var_19 = var_1;
    var_20 &= ((/* implicit */unsigned int) var_16);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0] [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_17))))) & (arr_7 [i_2] [i_2 + 1] [i_2])))) : (min((((/* implicit */unsigned long long int) (unsigned short)27816)), (10515765638198596494ULL))))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */int) arr_5 [i_0]);
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((int) var_5)))) & (((/* implicit */int) ((_Bool) min((6281869686102742755LL), (((/* implicit */long long int) (signed char)77)))))))))));
                }
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    var_23 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (var_11)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */int) ((((-6281869686102742755LL) & (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3 + 1] [i_0] [i_3 + 1]))))) & (((/* implicit */long long int) 2319508827U))));
                                var_25 = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_4]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_19 [i_0] [i_1] = ((long long int) (~(((/* implicit */int) (unsigned short)27816))));
                    var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0]))));
                }
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 3; i_8 < 11; i_8 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_9 = 1; i_9 < 13; i_9 += 2) 
                            {
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9 - 1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_0] [i_0] [i_8 - 2] [i_9 - 1] [i_0]))));
                                var_27 = (unsigned short)37747;
                            }
                            var_28 -= ((/* implicit */unsigned short) var_8);
                        }
                    } 
                } 
            }
        } 
    } 
}
