/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65645
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
    var_12 = ((/* implicit */unsigned long long int) var_4);
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */int) max((((arr_8 [i_3] [i_1] [i_3] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_11))))));
                            arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) (+((~(((((/* implicit */_Bool) var_3)) ? (arr_5 [4ULL] [4ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1])))))))));
                            var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(max((3085588333U), (((/* implicit */unsigned int) arr_4 [i_0] [i_0])))))))));
                            var_15 = ((/* implicit */int) arr_4 [i_0] [i_1]);
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)127))))) & (9197017427277505830ULL)))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) 1209378962U);
                /* LoopSeq 2 */
                for (signed char i_4 = 2; i_4 < 17; i_4 += 3) 
                {
                    arr_16 [i_4] = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_4])) / (((/* implicit */int) arr_4 [i_0] [i_0]))))) ^ (1209378963U))), (((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) arr_1 [i_4 - 2])) : (((/* implicit */int) arr_1 [i_4 - 2])))))));
                    var_18 = ((/* implicit */_Bool) 7758562851083102497LL);
                }
                for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    arr_19 [i_0] |= ((/* implicit */unsigned int) arr_0 [i_5] [(_Bool)1]);
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_6] [i_5] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_0] [i_5] [i_5]), (arr_1 [i_5]))))) : (max((var_10), (((/* implicit */long long int) (unsigned char)127))))))));
                        var_19 = ((/* implicit */unsigned long long int) (+(arr_21 [i_0] [(signed char)11] [i_5] [i_6])));
                        arr_23 [i_0] [i_0] [19ULL] [i_6] [i_6] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((int) arr_9 [19]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_11 [13ULL] [13ULL] [13ULL] [i_6]))))) : (var_4)))));
                    }
                }
                arr_24 [12U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((8864033403060898358ULL), (((/* implicit */unsigned long long int) (signed char)92))))))) ? ((+(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [2U] [2U])) ? (var_9) : (((/* implicit */int) arr_4 [i_0] [i_1])))))) : (((((/* implicit */int) (unsigned char)129)) >> (((arr_21 [i_0] [18U] [i_0] [i_1]) + (8058914587097847797LL)))))));
            }
        } 
    } 
}
