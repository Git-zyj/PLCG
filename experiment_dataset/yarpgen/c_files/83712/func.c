/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83712
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
    var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_11 *= ((/* implicit */unsigned long long int) (~(var_3)));
                                var_12 ^= ((/* implicit */unsigned long long int) 3819649526U);
                                arr_13 [i_4] [i_4] [(unsigned short)1] [i_4] [(unsigned char)12] = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_1] [i_1] [i_4] [i_4])), (var_8))), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((3819649526U), (((/* implicit */unsigned int) (_Bool)1))))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (arr_12 [i_0] [i_0] [i_0] [(short)0] [i_0] [(short)0]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) (short)31191))));
                                var_14 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (475317767U)));
                                var_15 = ((/* implicit */unsigned int) var_3);
                                var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                                var_17 = ((/* implicit */unsigned short) ((max((max((var_8), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) (short)-31191))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11220)))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) < (var_8))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        for (int i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    for (short i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) max((arr_28 [i_8] [i_9] [i_10] [i_9]), (arr_28 [i_8] [i_8] [i_10] [i_11])))), ((~(((/* implicit */int) (short)31191))))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (max((min((max((((/* implicit */unsigned long long int) var_2)), (arr_18 [i_11] [i_10] [(_Bool)1] [i_8]))), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (((_Bool)0) ? (475317767U) : (((/* implicit */unsigned int) var_0))))), (min((arr_31 [i_8] [(unsigned short)16] [i_10] [(unsigned short)4] [i_9] [i_8]), (((/* implicit */long long int) var_5)))))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_3 [i_8] [(short)8] [i_8]))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 1; i_12 < 16; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (max((((/* implicit */unsigned int) arr_22 [i_12 + 3])), (3819649548U))))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~(arr_36 [i_8] [i_8] [8LL] [i_8] [i_8]))))));
                            var_24 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) var_4))))), (2305843009213693952ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)31189)) ? (475317747U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_13] [i_12] [i_9] [i_8] [i_8] [i_8]))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_8] [i_9] [i_9] [i_9] [i_12] [i_12] [i_8]))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (int i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
                            {
                                var_25 = ((/* implicit */unsigned int) var_9);
                                var_26 = ((/* implicit */unsigned char) var_0);
                                var_27 = ((/* implicit */unsigned long long int) (!((_Bool)0)));
                            }
                            /* vectorizable */
                            for (unsigned short i_17 = 0; i_17 < 19; i_17 += 2) /* same iter space */
                            {
                                var_28 = ((/* implicit */_Bool) min((var_28), ((_Bool)1)));
                                var_29 = ((/* implicit */unsigned int) arr_19 [i_8] [i_8] [i_14] [i_14] [i_17] [11] [i_9]);
                            }
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((unsigned char) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (arr_15 [i_8])))), (((short) 3819649545U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
