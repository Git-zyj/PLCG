/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98681
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_14))));
                    arr_6 [i_1] [7LL] [i_2] = ((/* implicit */unsigned long long int) var_3);
                    var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) (~(var_16)))) ? (var_5) : (var_5)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((_Bool) -1LL));
                                arr_15 [i_4 + 1] [i_1] [i_1] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) ((arr_14 [i_0] [i_1] [i_0] [i_1 - 1] [i_4 - 1] [i_3] [17U]) + (((/* implicit */int) var_12))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopSeq 2 */
        for (long long int i_5 = 1; i_5 < 18; i_5 += 1) /* same iter space */
        {
            var_21 = var_14;
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                var_22 = ((/* implicit */unsigned short) var_11);
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_8))));
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) arr_11 [i_0] [i_0] [i_5] [i_6] [i_6]));
            }
        }
        for (long long int i_7 = 1; i_7 < 18; i_7 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_11))));
            arr_26 [i_0] [8ULL] [i_7] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_7] [i_7]);
            /* LoopNest 2 */
            for (long long int i_8 = 1; i_8 < 18; i_8 += 3) 
            {
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    {
                        arr_34 [i_8] [i_9] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_4)) + ((-2147483647 - 1))))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_7 - 1] [i_8 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_16 [i_7 - 1] [i_8 - 1])));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_7 + 2] [i_8] [i_9]))) | (var_16))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((unsigned int) arr_31 [i_0] [13U] [i_7] [i_7 + 1])))));
        }
    }
    for (unsigned short i_10 = 3; i_10 < 23; i_10 += 1) 
    {
        arr_37 [i_10 + 1] [i_10 + 1] = ((/* implicit */long long int) (+(var_16)));
        var_28 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)206)))));
    }
    var_29 *= ((/* implicit */unsigned char) ((unsigned long long int) ((var_8) ? (var_0) : (var_0))));
}
