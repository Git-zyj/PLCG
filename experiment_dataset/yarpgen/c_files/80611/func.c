/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80611
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
    var_20 = ((/* implicit */int) ((unsigned short) (_Bool)0));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((unsigned char) -1045588798187893476LL))) ? (((/* implicit */int) (short)-7550)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43374))))))) : (((/* implicit */int) ((signed char) var_4)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_7 [2U] [i_1 + 1] [4ULL] &= ((/* implicit */unsigned short) 549755813887LL);
                var_22 &= ((/* implicit */int) arr_4 [(unsigned char)2] [4LL]);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] [i_0] [(signed char)7] = ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) arr_8 [i_4] [i_0] [i_3] [i_4])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (short)-7550))))))));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [(_Bool)1] = ((/* implicit */_Bool) 4294967295U);
                                arr_17 [i_0 - 2] [i_3] [i_2] [6U] [i_0 - 2] |= ((18014398509481983ULL) / (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) -549755813903LL))), (((var_10) >> (((4294967295U) - (4294967293U)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        {
                            arr_24 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_11))))));
                            /* LoopSeq 2 */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned short) max((max(((-(arr_6 [i_0] [i_6]))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) > (-549755813888LL)))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_13))) << (((((/* implicit */int) arr_14 [7] [i_1] [i_1 + 1])) - (169))))))));
                                var_24 = ((/* implicit */short) ((signed char) 1238236297U));
                                arr_27 [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */int) 549755813896LL);
                            }
                            for (signed char i_8 = 1; i_8 < 13; i_8 += 1) 
                            {
                                var_25 = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_1 - 1] [i_0]))));
                                var_26 = ((/* implicit */signed char) arr_11 [9ULL] [i_0 - 2] [i_8 - 1] [i_8] [i_8 + 1] [i_8]);
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_8 + 1] [i_0])) ? (((/* implicit */int) arr_19 [i_0 + 1] [i_8 + 1] [i_0])) : (((/* implicit */int) var_6))))) % (((((/* implicit */_Bool) arr_19 [i_0 - 2] [i_8 + 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0 + 2] [i_8 + 1] [i_0]))) : (-549755813891LL)))));
                            }
                            var_28 = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [3] [i_0]))) % (1238236288U))) > (((arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 - 2] [(signed char)6]))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_0]))) < (arr_11 [i_0] [i_0] [i_1] [i_5] [(_Bool)1] [12LL])))))) : ((~(((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) (signed char)-23)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
