/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57834
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
    var_16 |= ((/* implicit */_Bool) var_3);
    var_17 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -837355415)) ? (((((/* implicit */_Bool) var_5)) ? (1546852230) : (((/* implicit */int) (signed char)53)))) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) (-2147483647 - 1)))))) ? (1649840598U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_18 = ((((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_2)))))))) <= (((/* implicit */int) arr_1 [i_0] [i_0])));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) max((arr_1 [i_0] [i_1]), (arr_2 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_2])) >= (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [(_Bool)1] [(unsigned char)2])))))))) : (max((((/* implicit */unsigned int) var_8)), (arr_3 [i_0] [i_1])))));
                            var_20 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_3 [i_1] [i_1])))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_7 [i_0] [i_2])), (arr_0 [i_0])))) : ((-(((/* implicit */int) var_7)))))) * ((+(((((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_2] [i_1] [i_0] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))));
                            arr_16 [i_4] [i_4] [i_2] [i_2] [i_1] [i_4] [i_0] |= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */signed char) arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_0]);
        }
        for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            var_22 += (~(((/* implicit */int) (_Bool)1)));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (11380853455083841967ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? ((+(((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) arr_4 [i_5])))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            var_24 += ((/* implicit */_Bool) arr_12 [i_0] [i_6] [i_6]);
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_25 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_20 [i_6] [i_6]))));
                            var_26 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_17 [i_0] [i_6] [i_7])), (max((((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0] [i_0])), (var_7))))))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_10))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_7] [i_9]))) / (var_1)))))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) (signed char)-89);
            }
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                var_29 = 9223372036854775807LL;
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)34))))) ? ((+(((/* implicit */int) (short)32589)))) : (((/* implicit */int) arr_27 [i_0] [i_6] [i_6] [i_6])))))));
            }
        }
    }
    var_31 ^= var_13;
}
