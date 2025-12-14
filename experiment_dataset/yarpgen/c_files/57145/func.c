/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57145
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
    var_17 = ((/* implicit */signed char) ((unsigned int) var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_18 = max((((/* implicit */unsigned int) (signed char)-119)), (0U));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_11 [i_4] [i_1] [i_4] = ((((/* implicit */int) (short)10579)) == (-1817190128));
                                arr_12 [i_4] [19] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_10 [i_4] [15U] [i_4] [i_1] [i_0]);
                            }
                        } 
                    } 
                } 
                var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((unsigned short) (signed char)114)), (((/* implicit */unsigned short) (signed char)94))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) var_2)), ((short)8570)))) ? (((/* implicit */unsigned long long int) min((-2LL), (((/* implicit */long long int) (short)27085))))) : (((5210770099194117022ULL) | (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-16)), (var_4))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    arr_15 [(signed char)0] [(signed char)0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-10583)), (-1692496256)));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 2; i_6 < 21; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                var_20 = min(((~(0U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */long long int) 2782594195U)) : (arr_0 [i_1]))))))));
                                var_21 = ((/* implicit */int) arr_17 [i_5] [i_7]);
                            }
                        } 
                    } 
                }
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    arr_23 [i_0] [i_0] = (+(((/* implicit */int) min(((unsigned short)59444), (((/* implicit */unsigned short) (signed char)-123))))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            {
                                arr_30 [i_9] [2] [i_9] [i_10] = (-(((/* implicit */int) ((_Bool) var_13))));
                                var_22 = ((/* implicit */int) ((unsigned short) (short)17105));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10583))) : (2970940079018997113LL)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79))) + (9490451515230871478ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)214)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            {
                                arr_39 [i_11] [i_1] [i_11] [22U] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))));
                                arr_40 [i_0] [i_11] [i_0] [i_0] [i_0] [(unsigned short)8] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_11])) ? (((/* implicit */unsigned long long int) arr_2 [i_12] [i_11])) : (var_12)))) ? (((/* implicit */unsigned long long int) max((arr_4 [6]), (((/* implicit */long long int) arr_1 [i_12]))))) : (((((/* implicit */_Bool) (unsigned short)26103)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8] [(short)7] [i_12]))) : (arr_7 [i_0])))))));
                                arr_41 [i_0] [i_11] [i_8] = ((/* implicit */unsigned char) (~(33554431LL)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 17; i_13 += 4) 
    {
        for (signed char i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            {
                var_24 = ((/* implicit */_Bool) max((arr_14 [i_13] [i_13] [i_13] [14]), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (short)-3860)) % (((/* implicit */int) (signed char)127))))))));
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_16))));
                arr_48 [i_13] [i_14] = ((/* implicit */unsigned char) ((unsigned int) arr_13 [i_13]));
                arr_49 [i_13] &= ((/* implicit */int) (!(((/* implicit */_Bool) 845072097U))));
                arr_50 [i_13] = ((/* implicit */unsigned short) -1817190128);
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) ((long long int) 1565304498U));
}
