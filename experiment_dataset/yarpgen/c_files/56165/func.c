/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56165
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
    var_13 = ((/* implicit */signed char) max((((((/* implicit */int) var_6)) % (((/* implicit */int) var_10)))), (((((813640827) % (((/* implicit */int) var_10)))) & ((+(((/* implicit */int) var_5))))))));
    var_14 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (585033113U)))));
        var_16 = ((((/* implicit */unsigned int) arr_1 [i_0 - 1])) >= ((+(585033113U))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                var_17 = ((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_2 + 2]))));
                var_18 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 + 2] [(_Bool)1]))) > (arr_4 [i_0] [i_0 + 1] [i_0] [i_2]));
                var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_0] [i_1]))) % (arr_4 [i_0] [i_2] [i_0 + 2] [i_2])));
            }
            for (int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0 + 1]) : (((/* implicit */int) var_4))));
                var_21 = ((/* implicit */unsigned char) ((-2147483647) <= (((/* implicit */int) arr_2 [i_0 + 1] [i_0]))));
                var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)43))));
            }
            for (int i_4 = 2; i_4 < 15; i_4 += 3) 
            {
                var_23 = ((/* implicit */short) (+(((/* implicit */int) var_11))));
                var_24 = ((/* implicit */unsigned char) var_1);
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 2]))));
                            var_26 = ((/* implicit */signed char) (~((+(arr_14 [i_4 + 1] [10U])))));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) && (((/* implicit */_Bool) arr_12 [i_0] [i_4 - 2] [i_6] [i_0 + 1]))));
                            var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_5] [i_6]))));
                            var_29 = (unsigned char)119;
                        }
                    } 
                } 
            }
            var_30 = ((/* implicit */unsigned char) var_7);
            var_31 = ((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) arr_17 [i_0 - 1] [i_0] [i_0] [i_0] [i_1] [i_1])) - (216))));
        }
        for (long long int i_7 = 1; i_7 < 15; i_7 += 2) 
        {
            var_32 = 3709934156U;
            var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_0 - 1]))));
        }
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            for (unsigned char i_10 = 1; i_10 < 15; i_10 += 4) 
            {
                {
                    var_34 = ((/* implicit */short) arr_29 [i_10 + 2] [i_10 + 2] [i_10 - 1]);
                    var_35 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned char) (~(3709934193U)));
    }
}
