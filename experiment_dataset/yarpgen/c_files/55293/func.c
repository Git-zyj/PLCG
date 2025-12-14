/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55293
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
    var_12 = ((/* implicit */short) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) ((794075667503551916LL) >> (((((/* implicit */int) var_4)) + (140)))))) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) var_6))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) arr_4 [i_1]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_2 - 1] [i_2 - 3] [i_2 - 3] [i_2 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) 3368545180U)))));
                                arr_14 [i_2 + 1] [i_2 + 1] [i_1] [i_3 + 1] [i_4] [i_4] = ((/* implicit */_Bool) arr_4 [i_1]);
                                arr_15 [i_0 - 2] [i_1] [i_2 - 3] [i_3 + 1] [i_2 - 3] = ((/* implicit */signed char) arr_2 [i_0]);
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1 + 1] [i_1 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -289383673)) ? (((/* implicit */int) max(((signed char)-55), (((signed char) arr_7 [i_0 - 2] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]))))) : (((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0] [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 13; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_14 ^= ((/* implicit */int) arr_1 [i_5]);
                                arr_23 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_1] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), ((~(2300023207086320838ULL)))))) ? (min((((/* implicit */unsigned int) arr_10 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1])), (min((((/* implicit */unsigned int) arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 2])), (3368545185U))))) : (((/* implicit */unsigned int) -1782721119))));
                                arr_24 [i_1] [i_5] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((unsigned char) -1782721102))), (((((/* implicit */_Bool) var_8)) ? (6893324098480215960ULL) : (0ULL))))), (((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */int) var_2)), (var_3))));
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (long long int i_8 = 1; i_8 < 22; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_9 = 2; i_9 < 20; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        {
                            arr_37 [i_7] [i_7] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 11553419975229335655ULL))) ? (((/* implicit */long long int) ((int) max((arr_36 [i_9] [i_8 + 1] [i_10] [i_9] [i_9] [i_9]), ((unsigned char)246))))) : (max((((long long int) arr_28 [i_7])), (((/* implicit */long long int) ((((/* implicit */int) (short)17563)) != (arr_35 [i_7] [i_7] [i_8 + 1] [i_10] [i_10] [i_8]))))))));
                            var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)9)) || (((/* implicit */_Bool) var_3))));
                            arr_38 [i_7] [i_9 - 2] [i_8] [i_8] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_27 [i_7])), (((unsigned char) arr_30 [i_10] [i_8] [i_7])))))) : (((((/* implicit */_Bool) arr_25 [i_7])) ? (max((((/* implicit */long long int) arr_26 [i_7] [i_7])), (-946719572711758415LL))) : (max((((/* implicit */long long int) (signed char)22)), (-990779254769461566LL)))))));
                            arr_39 [i_7] [i_8 - 1] [i_9] [i_10] = ((/* implicit */int) arr_27 [i_7]);
                        }
                    } 
                } 
                arr_40 [i_7] [i_7] [i_7] = ((/* implicit */long long int) arr_36 [i_7] [i_7] [i_7] [i_7] [i_8] [i_8]);
                arr_41 [i_7] [i_8 - 1] = ((((/* implicit */int) (short)10281)) >> (((min((((((/* implicit */int) var_4)) % (var_7))), (((/* implicit */int) max((var_10), ((signed char)-14)))))) + (118))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        {
                            arr_49 [i_7] [i_7] [i_7] = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_44 [i_7] [i_8] [i_11] [i_12 + 1]))))));
                            var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5)) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_11] [i_8 - 1]))) >= (2314284562U))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_7)))) || ((_Bool)1)))) : (((/* implicit */int) var_9)));
                            arr_50 [i_7] [i_8 + 1] [i_11] [i_7] = ((/* implicit */long long int) 507904U);
                            var_18 = ((/* implicit */short) arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                        }
                    } 
                } 
            }
        } 
    } 
}
