/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82454
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned short)65215)) ? (((/* implicit */int) (unsigned short)1733)) : (((/* implicit */int) (signed char)38)))) : (((((/* implicit */_Bool) 2834230444U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))))) : (1361063870U)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_1] [i_1]), ((short)18601)))) ? (((((/* implicit */int) (signed char)9)) + (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))) : (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_1]))))))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-30338))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) min((var_7), (((/* implicit */short) var_2)))))))) & (max((((/* implicit */unsigned long long int) max((arr_3 [i_1] [i_0] [i_0]), (((/* implicit */short) (unsigned char)244))))), (min((((/* implicit */unsigned long long int) var_3)), (arr_2 [i_0])))))));
                arr_4 [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65215))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    var_15 = ((/* implicit */signed char) (((~(arr_2 [i_2 + 1]))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((signed char)-1), (var_1)))) * (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_0])))))));
                    var_16 = ((unsigned short) ((unsigned short) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_10)))));
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (+(122385791871037851ULL))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 18324358281838513765ULL)) ? (((/* implicit */int) (unsigned short)14207)) : (((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]))))), (((long long int) min((1361063870U), (((/* implicit */unsigned int) (unsigned char)3)))))));
                                var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_10 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1])))), (((/* implicit */int) max((((/* implicit */unsigned short) (short)28370)), ((unsigned short)51329))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
