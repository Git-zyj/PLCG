/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63079
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_15 &= ((/* implicit */unsigned short) min((((unsigned int) (_Bool)0)), (((unsigned int) ((((/* implicit */_Bool) -1716467899)) ? (3262141762U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((unsigned int) 2270872049U))));
                var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
                arr_7 [i_0] [(unsigned short)18] [(unsigned short)4] |= ((((/* implicit */_Bool) 1032825552U)) ? (3262141762U) : (1032825552U));
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_11 [i_2] [i_1] [(_Bool)1] [i_0]))));
                    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(1032825534U)))) ? ((-(((((var_14) + (2147483647))) >> (((3262141748U) - (3262141717U))))))) : (min((((((/* implicit */_Bool) 1032825534U)) ? (((/* implicit */int) var_11)) : (var_2))), (((int) arr_8 [i_2] [i_2 + 2]))))));
                    arr_12 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) var_10)) | ((~(2900039532U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 4; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_20 = var_1;
                                arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2])) ? (max((1394927764U), (var_13))) : (4097573112U)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        {
                            var_21 += ((/* implicit */_Bool) 3262141762U);
                            var_22 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_10)) >= (arr_28 [i_8] [i_7] [i_5]))))) + (min((arr_28 [i_6] [i_7 - 1] [i_8]), (arr_28 [i_8] [i_6] [i_5]))));
                        }
                    } 
                } 
                var_23 = (!(((/* implicit */_Bool) (~((~(arr_0 [22U])))))));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (2900039532U) : (3262141762U)))) ? ((-(((unsigned int) var_5)))) : (((/* implicit */unsigned int) min((var_5), (((/* implicit */int) arr_18 [i_6] [22U] [i_5] [i_5] [(unsigned short)18])))))));
                arr_31 [i_5] [(_Bool)1] [i_5] = ((/* implicit */unsigned int) ((unsigned short) min((((((/* implicit */_Bool) 1032825534U)) ? (((/* implicit */unsigned int) var_10)) : (3262141744U))), (((/* implicit */unsigned int) -1916423191)))));
                var_25 = 2900039532U;
            }
        } 
    } 
}
