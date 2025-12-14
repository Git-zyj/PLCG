/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80804
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
    var_14 = ((/* implicit */int) var_11);
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) var_6);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_2 [i_1 + 2] [i_3 + 1]), (((/* implicit */unsigned long long int) var_11))))) ? ((+(arr_12 [i_1 + 2] [i_3] [i_3 + 1]))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                            var_17 = ((max((((/* implicit */long long int) var_11)), (arr_12 [i_3 - 1] [i_3] [i_1 - 2]))) >= (((((/* implicit */_Bool) arr_12 [i_3 + 2] [i_3] [i_1 + 2])) ? (arr_12 [i_3 + 2] [i_2] [i_1 + 2]) : (arr_12 [i_3 + 1] [i_1 - 1] [i_1 - 1]))));
                            var_18 = ((/* implicit */unsigned char) max((max((arr_12 [i_0] [i_1] [1U]), (arr_12 [i_3] [i_2] [i_1]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned short) var_13))), (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_0] [i_1 - 1]))) : (1379740652U))))))));
                            arr_14 [i_0] [i_3 + 1] = var_13;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 3; i_4 < 10; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~(arr_3 [i_4 + 2] [i_1 + 2]))) ^ (((arr_3 [i_4 - 1] [i_1 + 1]) >> (((arr_3 [i_4 - 2] [i_1 + 2]) - (1094781533U)))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */int) (signed char)51)) >= (((/* implicit */int) arr_15 [i_5])))) ? (var_2) : (((var_2) % (var_4))))));
                            var_19 = ((/* implicit */signed char) var_4);
                            arr_22 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */long long int) max((((unsigned int) arr_16 [i_4 - 3] [i_4 - 2] [i_4 - 1] [i_4 - 1])), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4 + 1] [i_4 + 2] [i_4 + 1] [i_4 - 2]))) < (2915226643U))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) var_2);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        for (int i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            {
                arr_27 [i_7] [i_7] [i_7] = ((/* implicit */int) var_6);
                var_21 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) 2915226637U)) && (((/* implicit */_Bool) 2915226643U)))) || (((/* implicit */_Bool) max((arr_23 [i_6]), (var_6)))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 0U))))));
            }
        } 
    } 
}
