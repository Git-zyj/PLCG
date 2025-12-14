/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92630
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
    var_17 = ((/* implicit */unsigned int) var_5);
    var_18 *= ((/* implicit */short) var_5);
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((((+(var_13))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (var_6)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (1056964608U)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)94)) * (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
                /* LoopSeq 3 */
                for (int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    var_20 |= min((arr_1 [i_1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)79))))));
                    arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_3 [i_0] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))))) : (((/* implicit */unsigned long long int) var_13))))) ? (((((var_14) ^ (((/* implicit */unsigned int) var_9)))) - (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)62)) << (((((/* implicit */int) (signed char)-88)) + (112)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3739801373920866692ULL))))))));
                    var_21 &= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_2]), (((/* implicit */unsigned long long int) 1123927861U))))) ? (((((/* implicit */_Bool) 1808729363U)) ? (1576785203) : (var_1))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) > (arr_3 [i_2] [i_0]))))))) - (((((/* implicit */_Bool) ((unsigned long long int) (signed char)-76))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75))) : (((((/* implicit */_Bool) 1679952446)) ? (465757761892077560ULL) : (31ULL))))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    arr_11 [(short)12] [i_0] [i_0] = (~(var_1));
                    var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */int) ((unsigned short) 13883301298923025352ULL))) >> (((arr_3 [i_0] [i_0]) - (1849629676388811959ULL)))))));
                }
                for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                    {
                        var_23 *= ((/* implicit */unsigned long long int) var_13);
                        arr_16 [i_0] [i_1] [i_1] [i_5] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                        arr_17 [i_0] [i_0] [(unsigned char)15] [i_5] = ((/* implicit */unsigned short) ((var_4) >> (((((/* implicit */int) arr_12 [(_Bool)1] [i_4] [i_1] [(_Bool)1])) + (154)))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_4])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_9)))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) (signed char)8);
                        arr_21 [9U] [i_0] [i_0] [i_6] [(unsigned short)5] [1U] = var_0;
                        var_26 = ((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (1576785203)));
                        arr_22 [i_0] = ((((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) <= (((/* implicit */unsigned int) arr_7 [11ULL] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_18 [(_Bool)1] [i_0] [i_0] [i_1] [i_4] [i_6]))) : (((((/* implicit */_Bool) arr_18 [i_0] [16U] [i_0] [i_1] [i_4] [i_6])) ? (13488138982678571778ULL) : (((/* implicit */unsigned long long int) arr_18 [i_6] [i_4] [i_0] [i_0] [i_0] [i_0])))));
                    }
                    var_27 |= ((/* implicit */short) var_4);
                }
                arr_23 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)65)))))));
                arr_24 [i_0] [1U] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_19 [i_0] [i_1])) * (((/* implicit */int) arr_19 [i_0] [i_0]))))));
            }
        } 
    } 
}
