/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63615
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_13 *= ((/* implicit */signed char) min((((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_1])), ((-(((/* implicit */int) (signed char)0))))))), ((+(((long long int) var_12))))));
                arr_6 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 3285260179U))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        for (unsigned short i_3 = 2; i_3 < 17; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_5 = 2; i_5 < 18; i_5 += 3) 
                    {
                        arr_16 [i_2] [i_3 + 2] [i_4] [i_5] = ((/* implicit */signed char) ((arr_14 [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (unsigned short)8123)) ? (var_6) : (((/* implicit */unsigned int) var_5))))));
                        var_14 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_2])) > ((+(((/* implicit */int) var_3))))));
                        arr_17 [i_2] = (+(((/* implicit */int) var_10)));
                        /* LoopSeq 4 */
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            arr_20 [i_2] [i_3] [i_4] [i_5 + 2] [i_6] [i_6] = ((/* implicit */unsigned short) (+(1009707124U)));
                            arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) var_6);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_7] = ((/* implicit */unsigned char) var_4);
                            var_15 -= ((/* implicit */unsigned long long int) var_2);
                            var_16 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)-20655)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))));
                            var_17 = ((((var_6) << (((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [(unsigned char)8])))) - (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_7]))))));
                            arr_25 [i_5] [i_3] [i_4] [i_5] [i_7] [i_3] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_3 - 2] [i_5 - 2]))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */int) var_10)) & (arr_11 [10] [i_4] [i_5] [i_8])));
                            arr_28 [i_8] [i_5 + 1] [i_4] [(short)0] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */int) arr_1 [i_8])) : (((/* implicit */int) arr_1 [i_8]))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            var_20 ^= ((/* implicit */short) arr_8 [i_3 - 1] [i_3 - 2]);
                            var_21 = ((/* implicit */unsigned long long int) arr_8 [i_3 - 2] [i_3 - 2]);
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)0), (((/* implicit */signed char) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (var_6)))) ? (((/* implicit */int) arr_7 [i_3] [i_10])) : (max(((~(((/* implicit */int) var_3)))), (((((/* implicit */int) (signed char)-1)) ^ (((/* implicit */int) arr_3 [i_2]))))))));
                                var_23 = (+(-2235170953126511871LL));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_12 = 1; i_12 < 17; i_12 += 2) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            {
                                arr_42 [i_2] [i_3] [i_4] [i_12] [i_13] [i_13] [i_2] = ((/* implicit */signed char) var_1);
                                arr_43 [i_3] [i_4] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) == (min((((/* implicit */int) arr_8 [i_3 - 1] [i_12 - 1])), (var_5)))));
                                var_24 = ((/* implicit */short) (-(max((3285260188U), (((/* implicit */unsigned int) arr_11 [i_2] [i_3 - 2] [i_3 - 2] [i_3 - 2]))))));
                                var_25 = (!(((/* implicit */_Bool) (~(14264824976316311229ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
