/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9524
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        var_13 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
                    var_15 = ((/* implicit */long long int) (((!(arr_6 [i_1]))) || (((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_0]))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))))))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2] [i_1]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
        {
            var_17 += ((/* implicit */unsigned int) ((9223372036854775807LL) > (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))));
            arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
            var_18 += ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        }
        for (short i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
        {
            arr_18 [i_0] [(_Bool)1] = ((/* implicit */short) (+(((/* implicit */int) var_1))));
            var_19 = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
        }
        arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) var_11);
    }
    for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_21 [(_Bool)0]))));
        arr_23 [i_5] = ((/* implicit */long long int) (!(arr_22 [i_5] [i_5])));
    }
    /* LoopSeq 1 */
    for (short i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_6]))));
                    var_22 = ((/* implicit */signed char) arr_20 [i_6] [i_7]);
                    arr_30 [i_8] [i_7] [i_6] = (_Bool)0;
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_26 [i_8] [i_7] [i_6]))));
                    arr_31 [i_6] [i_7] [i_8] = ((/* implicit */_Bool) arr_25 [i_6]);
                }
            } 
        } 
        arr_32 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_27 [i_6])))) && (((/* implicit */_Bool) var_10)))))) <= (-9223372036854775801LL)));
        arr_33 [i_6] = ((/* implicit */signed char) (-(arr_28 [i_6] [i_6] [i_6])));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) arr_37 [i_10] [i_9] [i_10]))));
                    var_25 *= ((/* implicit */_Bool) ((var_5) | (((/* implicit */unsigned int) (~(arr_36 [i_6] [i_9]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 3; i_11 < 14; i_11 += 4) 
                    {
                        var_26 += ((/* implicit */_Bool) var_10);
                        arr_41 [i_6] [i_9] [i_9] [i_11] [i_9] [i_9] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) arr_39 [i_10] [i_11 - 3] [i_11 - 1] [i_11 - 2] [i_11]))));
                    }
                }
            } 
        } 
    }
}
