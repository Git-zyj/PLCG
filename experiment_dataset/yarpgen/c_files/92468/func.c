/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92468
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_7))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */signed char) (unsigned short)0);
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_1] [i_2])))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                    arr_7 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [(unsigned short)3])))))) ? ((+(15829314136982473136ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((-2147483634) != (2147483634)));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_2] [(signed char)4])) ? (((arr_2 [i_0 + 2] [i_1]) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))))));
                        arr_10 [i_3] [i_0] = -556354601;
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        arr_14 [(unsigned short)6] [(unsigned short)6] [i_0] [i_2] [i_2] [(unsigned short)6] = ((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_0 + 3])), (arr_9 [i_0] [i_0 + 2])))), (((((/* implicit */_Bool) arr_13 [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_0 + 3])) ? (((/* implicit */int) arr_9 [i_0] [i_0 + 2])) : (((/* implicit */int) arr_9 [i_0] [i_0 + 2]))))));
                        arr_15 [i_4] [i_0] [i_2] [i_0] [(signed char)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0] [i_2]))) ? (arr_8 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4]) : ((-(-556354601)))));
                    }
                    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_1] [i_0 + 3] [i_0 - 1]), (arr_3 [i_0] [i_0 + 2] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1869511876)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_11 [i_1] [i_5]))))) ? ((~(arr_0 [i_1] [i_1]))) : (((/* implicit */unsigned int) 1869511875))))) : (max((((/* implicit */unsigned long long int) arr_11 [i_1] [i_0 + 2])), (0ULL)))));
                        var_25 = ((/* implicit */int) max((525815537U), (((/* implicit */unsigned int) ((arr_11 [i_1] [i_0 + 1]) ? (((/* implicit */int) arr_12 [(signed char)8] [i_0 + 3] [4U] [i_1])) : (((/* implicit */int) arr_11 [i_1] [i_0 - 1])))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        for (int i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            {
                var_26 = (!(((/* implicit */_Bool) (+(13646110939825795262ULL)))));
                arr_25 [i_6] = ((/* implicit */unsigned char) arr_23 [13U] [i_7] [2U]);
            }
        } 
    } 
    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4ULL)) ? (1353025500U) : (4294967295U)))))), ((!(((/* implicit */_Bool) var_11)))))))));
    var_28 = ((/* implicit */short) (~((((_Bool)1) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1))))))))));
}
