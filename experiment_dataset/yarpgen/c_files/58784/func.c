/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58784
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) 395793452U);
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) 3899173845U);
                        arr_11 [i_0] [i_1] [i_0] [i_3] = (signed char)-125;
                    }
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        arr_16 [i_0] [(unsigned short)4] [i_0] [i_4] = ((/* implicit */int) (unsigned char)0);
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) min((3322760643U), (((/* implicit */unsigned int) max((var_2), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (((+(((/* implicit */int) var_4)))) + (((/* implicit */int) arr_9 [i_0] [10LL] [10LL] [i_5])))))));
                        arr_20 [i_1] [i_5] = ((/* implicit */short) (-((+(arr_8 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1])))));
                        arr_21 [i_0] [i_2] [i_5] = ((/* implicit */short) var_12);
                    }
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                arr_28 [i_2] = ((/* implicit */short) arr_19 [i_0] [i_1] [i_1] [i_1] [i_7]);
                                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_22 [i_1 - 2]), (((/* implicit */unsigned char) arr_14 [i_1 - 1] [i_7] [i_7] [i_1 - 1] [i_7] [i_7])))))) + (min((1862372734U), (3713329130U)))));
                                arr_29 [i_0] [i_1] = min(((short)7), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))));
                                var_23 = ((/* implicit */unsigned short) min((3899173844U), (((/* implicit */unsigned int) (short)-10667))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (int i_10 = 3; i_10 < 11; i_10 += 3) 
                {
                    {
                        arr_37 [i_0] [i_8] [i_10] [10U] [i_8] [i_9] = ((/* implicit */unsigned char) (short)-21173);
                        arr_38 [i_8] [i_8] = ((/* implicit */unsigned short) (signed char)-1);
                    }
                } 
            } 
        } 
        arr_39 [i_0] = (+(((((/* implicit */_Bool) max((arr_31 [i_0]), (arr_31 [i_0])))) ? (2047U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))))));
    }
    var_24 = max((min(((-(((/* implicit */int) var_2)))), ((-(((/* implicit */int) var_13)))))), (((/* implicit */int) var_16)));
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (unsigned short)36366))));
}
