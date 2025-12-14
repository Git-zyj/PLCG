/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89313
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
    var_15 = ((/* implicit */int) (-(max((1549039761626912024LL), (((/* implicit */long long int) (-2147483647 - 1)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
        {
            arr_5 [i_0] [2] &= ((/* implicit */short) 32760);
            var_16 = max((max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 - 1] [i_0 + 1])), (var_6))), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            arr_9 [i_0] = ((((/* implicit */int) var_9)) <= ((~((-2147483647 - 1)))));
            var_17 *= ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) (unsigned short)17605))), (-2147483636)));
        }
        arr_10 [i_0] [i_0] = (unsigned short)65515;
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) arr_0 [i_0] [(short)6]))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(((int) (unsigned short)65493)))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) arr_12 [i_4]);
                    arr_19 [i_5] [i_5] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_5])) ? (((/* implicit */int) arr_17 [i_3] [i_4] [i_5])) : (((/* implicit */int) arr_17 [i_3] [i_5] [i_5]))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_12 [i_5]))));
                    var_22 = ((/* implicit */_Bool) (+(899178651)));
                }
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            for (long long int i_8 = 2; i_8 < 22; i_8 += 4) 
            {
                {
                    arr_28 [i_7] [i_7] [i_7] |= ((/* implicit */unsigned int) arr_20 [i_6]);
                    var_23 |= ((/* implicit */signed char) max((1321090394), (((/* implicit */int) (short)25180))));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_24 += ((/* implicit */signed char) ((unsigned short) 9167977798456276164ULL));
                        /* LoopSeq 2 */
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            var_25 = ((/* implicit */long long int) min((var_25), (9223372036854775807LL)));
                            var_26 = ((/* implicit */signed char) (~((~(((/* implicit */int) ((((/* implicit */long long int) arr_32 [i_7] [i_9] [i_8 + 1] [i_7] [i_6])) <= (var_1))))))));
                            arr_35 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) arr_14 [i_9]);
                            arr_36 [i_6] [i_7] [i_8] [i_8] [i_8] [(signed char)2] [i_10] = ((/* implicit */long long int) var_10);
                        }
                        for (unsigned short i_11 = 1; i_11 < 22; i_11 += 2) 
                        {
                            arr_41 [21LL] [21LL] = ((((long long int) (signed char)-1)) < (((/* implicit */long long int) ((/* implicit */int) var_14))));
                            arr_42 [i_6] [i_6] [i_8] [i_9] [i_11] = ((/* implicit */short) -1830215200);
                        }
                        var_27 &= max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) : (-1LL)))), (max((((/* implicit */unsigned long long int) (signed char)-113)), (18446744073709551615ULL))));
                        var_28 = ((/* implicit */long long int) (-(var_10)));
                        arr_43 [i_6] [i_6] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */signed char) arr_22 [i_9]);
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */unsigned long long int) -32741)), (7663772846227755296ULL))));
    }
    var_30 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
    var_31 = ((/* implicit */signed char) var_14);
}
