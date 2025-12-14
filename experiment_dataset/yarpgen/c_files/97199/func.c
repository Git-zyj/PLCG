/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97199
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
    var_16 = ((/* implicit */signed char) var_15);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) (short)32269);
            var_18 = ((/* implicit */unsigned short) (unsigned char)105);
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_2 - 1] [i_2 - 1] [i_1] [i_4] = ((/* implicit */_Bool) (signed char)112);
                            arr_13 [i_0] [i_1] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */long long int) var_14);
                        }
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) ((signed char) (signed char)112));
                            var_20 = ((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 2] [i_3 + 1]);
                        }
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                        {
                            arr_18 [i_1] [i_2] [i_2 + 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_2 + 2] [i_3 - 1] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))) : (arr_2 [i_1])));
                            var_21 = ((/* implicit */unsigned short) arr_10 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2] [i_2 - 1]);
                        }
                        var_22 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [10U] [i_2] [10U]))));
                        var_23 = ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
                        /* LoopSeq 3 */
                        for (signed char i_7 = 1; i_7 < 18; i_7 += 1) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_1] [i_7] [i_0] [i_3 + 1] = ((/* implicit */int) (unsigned char)222);
                            var_24 = ((/* implicit */unsigned long long int) (signed char)0);
                        }
                        for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            var_25 -= ((/* implicit */unsigned int) (~(arr_14 [i_3] [i_3] [i_3 - 1] [i_3] [i_3] [i_3] [i_3 - 2])));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_1] [i_3 - 3] [i_3 - 3])) ? (((/* implicit */int) arr_8 [i_3 - 2] [i_1] [i_3] [i_3 - 3])) : (((/* implicit */int) arr_8 [i_3 - 2] [i_1] [i_3 - 3] [i_3 + 1]))));
                            var_27 = ((/* implicit */unsigned int) arr_0 [i_3]);
                            arr_24 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_2 [i_1]);
                        }
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            arr_29 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-112)) ? ((~(9LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_2 + 1] [i_3 + 1] [i_9])))));
                            var_28 = ((/* implicit */_Bool) arr_23 [i_0] [i_2 - 1] [i_3 - 1] [i_3 + 1] [i_3]);
                        }
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((unsigned long long int) arr_22 [i_1] [i_0] [i_0] [i_0])))));
        }
        arr_30 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */signed char) max((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))), (var_4)));
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((int) 6488059299024815322ULL)))));
        var_31 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [10ULL])) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) (_Bool)1))))), (max((6488059299024815332ULL), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [(unsigned char)8] [i_0] [i_0]))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
    {
        arr_33 [i_10] = ((/* implicit */short) var_13);
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_27 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (arr_27 [i_10] [i_10] [i_10] [i_10] [i_10]) : (arr_27 [i_10] [i_10] [i_10] [i_10] [i_10]))), (arr_27 [i_10] [i_10] [i_10] [i_10] [i_10]))))));
    }
}
