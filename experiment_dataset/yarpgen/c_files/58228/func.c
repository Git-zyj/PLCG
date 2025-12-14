/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58228
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_17 *= ((/* implicit */signed char) ((int) (+(arr_1 [i_0 - 1]))));
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            var_18 = arr_0 [(_Bool)1];
            var_19 = ((_Bool) arr_0 [i_0 - 2]);
            var_20 = ((/* implicit */long long int) ((unsigned int) arr_4 [i_0 - 1]));
        }
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 17; i_2 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 3]);
        arr_8 [i_2 + 2] = ((/* implicit */unsigned long long int) arr_0 [i_2]);
        var_22 = ((/* implicit */unsigned int) ((_Bool) arr_0 [i_2 - 1]));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        arr_18 [i_2] [i_2] [i_2 - 1] [(signed char)1] [0U] [i_2 + 2] &= ((/* implicit */_Bool) var_16);
                        var_23 &= ((unsigned int) arr_17 [i_2 + 2] [i_2 + 3] [i_4 - 1]);
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_9)) ? (3416968259U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225))))), (((/* implicit */unsigned int) (!((_Bool)1)))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((var_8), (var_13))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 3) 
    {
        var_25 = (!(((/* implicit */_Bool) -2177887884649705098LL)));
        var_26 = ((/* implicit */_Bool) ((unsigned int) arr_6 [1U]));
        arr_23 [i_6] [7LL] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223))) : (var_10));
        /* LoopNest 3 */
        for (unsigned char i_7 = 2; i_7 < 12; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                for (long long int i_9 = 4; i_9 < 10; i_9 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) arr_11 [i_6 + 4] [(signed char)12]);
                        var_28 += ((short) var_15);
                        arr_31 [i_6 + 2] [i_6] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_30 [i_7 - 1] [i_9 + 2] [i_8] [i_9] [i_7] [i_9]))));
                    }
                } 
            } 
        } 
    }
}
