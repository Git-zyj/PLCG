/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56650
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1 + 1])) ? (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), (arr_2 [i_0] [i_1])))) : (((((/* implicit */int) arr_1 [i_0] [i_1])) + (((/* implicit */int) arr_1 [i_0] [i_1]))))))) ? (arr_3 [i_0] [(signed char)12]) : (min((((((/* implicit */_Bool) arr_3 [(_Bool)1] [(signed char)12])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (max((((/* implicit */unsigned int) (_Bool)1)), (3939927145U)))))));
                var_19 = ((/* implicit */unsigned char) var_14);
                var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) != ((~(max((arr_3 [i_0] [(_Bool)1]), (((/* implicit */unsigned int) var_15))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_6])) - (((/* implicit */int) ((((arr_5 [i_2]) ? (((/* implicit */int) arr_15 [i_2] [i_3] [i_6] [i_5] [(unsigned char)16])) : (((/* implicit */int) arr_16 [i_2] [(_Bool)1] [i_3] [i_4] [i_4] [i_4] [i_6])))) >= (((/* implicit */int) arr_15 [i_2] [i_2] [i_6] [i_2] [(short)2]))))))))));
                                arr_19 [0] [i_3] [i_5] [i_6] |= ((/* implicit */int) min((((/* implicit */unsigned int) var_15)), (((((/* implicit */_Bool) arr_6 [i_6])) ? (arr_17 [i_2] [(unsigned char)2] [i_4] [i_5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))));
                                arr_20 [i_2] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))), (min((355040151U), (3939927162U)))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((signed char) max((arr_18 [i_5] [i_5 - 1] [(_Bool)1] [i_5 - 1] [i_5 - 1] [i_5]), (((/* implicit */short) var_9))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        {
                            arr_26 [i_2] [i_3] [i_3] [(signed char)8] [(unsigned char)0] = ((((arr_9 [i_2]) && (arr_10 [i_8] [i_7]))) ? (((((/* implicit */int) var_4)) * (((((/* implicit */int) arr_11 [i_3] [i_3] [i_3])) & (((/* implicit */int) arr_1 [i_3] [i_7])))))) : (((/* implicit */int) ((var_12) >= (((/* implicit */int) (_Bool)1))))));
                            var_24 = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                            var_25 |= ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_23 [i_8])))));
                            var_26 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (_Bool)0)), (1819762459U)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_35 [i_2] [i_10] [i_3] [i_10] [i_10] [i_3] [15U] = ((/* implicit */_Bool) ((594130140) % (((/* implicit */int) (_Bool)1))));
                                var_27 += arr_33 [i_9];
                                var_28 |= ((/* implicit */_Bool) arr_29 [i_2] [(_Bool)1] [i_9] [13U] [(unsigned short)4]);
                                var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_24 [i_10])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */unsigned int) 1348936883)))))))));
                                var_30 = ((/* implicit */int) arr_29 [i_2] [i_3] [i_9] [i_10] [i_9]);
                            }
                        } 
                    } 
                } 
                var_31 = ((/* implicit */signed char) arr_30 [i_3] [i_3] [i_2] [i_3]);
            }
        } 
    } 
    var_32 |= ((/* implicit */signed char) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_15))));
}
