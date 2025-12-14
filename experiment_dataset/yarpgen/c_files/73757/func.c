/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73757
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
    var_12 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 8191)) && (((/* implicit */_Bool) var_1))))), (max(((unsigned short)54874), (var_8))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (var_0))), (((/* implicit */unsigned long long int) var_11))));
                    var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [i_0]))) * (((var_0) * (((/* implicit */unsigned long long int) arr_0 [i_2]))))))) && (((/* implicit */_Bool) min((-1550343708), (((/* implicit */int) var_2)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) (~(arr_0 [i_1])));
                                var_16 += ((/* implicit */unsigned long long int) max(((short)0), (((/* implicit */short) arr_6 [i_0] [i_1]))));
                                var_17 = ((/* implicit */unsigned long long int) 2517381918060416369LL);
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */signed char) var_9);
                                arr_21 [i_0] [i_0] [9U] [i_0] [i_6] [3LL] [i_0] = ((/* implicit */int) var_3);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) 0LL))));
                    arr_22 [i_0] [i_5] [i_5] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 0ULL)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))));
                }
                for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
                {
                    var_20 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */_Bool) -5665525383458064650LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5740))) : (var_4))) - (4294961556U)))));
                    arr_26 [i_0] [i_0] [i_8] = ((/* implicit */signed char) (-(((min((((/* implicit */unsigned int) (signed char)64)), (arr_2 [(unsigned char)5]))) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                }
                arr_27 [i_0] [i_0] = ((/* implicit */_Bool) var_9);
                var_21 = ((/* implicit */int) (_Bool)0);
                /* LoopNest 2 */
                for (short i_9 = 4; i_9 < 18; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        {
                            arr_32 [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [i_0] [i_9 - 1] [i_10]))));
                            var_22 = ((/* implicit */short) max((var_9), (arr_17 [2ULL] [(unsigned short)13] [i_10])));
                            arr_33 [i_0] [i_0] [(short)14] [i_9] [i_10] = ((/* implicit */signed char) max((max((var_10), (var_5))), (((/* implicit */int) var_8))));
                        }
                    } 
                } 
            }
        } 
    } 
}
