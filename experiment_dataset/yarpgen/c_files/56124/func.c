/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56124
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
    var_12 = var_7;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [10] [i_0] [i_1] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (unsigned short)23437)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))) ^ (((/* implicit */int) (unsigned short)23437)))), (((/* implicit */int) var_1))));
                            var_13 = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((15713423546175963463ULL) <= (((/* implicit */unsigned long long int) 7298917674062051193LL))))), (var_2)));
                            var_14 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_0] [i_1] [i_1]))))), (-7298917674062051193LL)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) 
                {
                    for (signed char i_5 = 3; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_16 *= ((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_0)) | (arr_5 [(signed char)12] [i_4 + 2] [i_4 + 1]))));
                            arr_20 [i_0] [(unsigned short)14] [i_0] [i_1] = ((/* implicit */int) max((18100063410545532469ULL), (((/* implicit */unsigned long long int) 733746715U))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((short) -781002521)))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_4] [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_2)))))))));
                            var_18 = ((/* implicit */unsigned short) max((7298917674062051213LL), (((/* implicit */long long int) var_5))));
                            arr_21 [i_5] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) (-(3561220562U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_19 -= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (var_10) : (arr_24 [i_1] [i_6] [i_7]))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)23437)))))))) ? (((((/* implicit */_Bool) 1516751669611701791LL)) ? (15713423546175963463ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                            var_20 = ((/* implicit */long long int) (~(781002514)));
                        }
                    } 
                } 
            }
        } 
    } 
}
