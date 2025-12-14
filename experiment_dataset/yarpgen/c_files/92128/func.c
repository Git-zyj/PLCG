/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92128
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 23; i_2 += 1) /* same iter space */
                {
                    var_10 = ((int) arr_6 [i_1 + 1] [i_1] [i_1 + 1] [(unsigned short)4]);
                    arr_7 [i_2] [23ULL] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (signed char)32))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) : (-5962780645330917524LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)19722)))));
                }
                for (unsigned short i_3 = 1; i_3 < 23; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) -5962780645330917525LL))));
                        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_1 + 1])))));
                        arr_13 [i_3] [i_4] = ((/* implicit */unsigned short) 5962780645330917523LL);
                        arr_14 [i_3] = ((/* implicit */short) arr_4 [i_0] [i_4]);
                    }
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_9))));
                }
                arr_15 [(unsigned short)16] [i_1 + 1] [i_1 + 1] = ((/* implicit */signed char) arr_1 [i_0] [i_1 + 1]);
                arr_16 [i_1 + 1] [i_1] [i_0] = ((/* implicit */long long int) (unsigned short)65531);
                /* LoopSeq 1 */
                for (signed char i_5 = 3; i_5 < 23; i_5 += 1) 
                {
                    arr_19 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */short) (_Bool)1);
                    var_14 = ((/* implicit */unsigned char) var_8);
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned int) -5962780645330917531LL);
                                var_16 = ((/* implicit */unsigned char) arr_5 [i_0]);
                                var_17 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)68))) : (-5962780645330917534LL)));
                                arr_25 [i_0] [i_6] [i_5] = ((/* implicit */short) arr_1 [i_5 - 2] [i_0]);
                            }
                        } 
                    } 
                }
                var_18 ^= ((/* implicit */unsigned short) max((((long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)56935)) : (((/* implicit */int) (short)-6976))))), (((/* implicit */long long int) min((((((((/* implicit */int) arr_10 [i_0] [i_0])) + (2147483647))) << (((5962780645330917527LL) - (5962780645330917527LL))))), (((/* implicit */int) ((signed char) (_Bool)1))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((_Bool) var_3));
}
