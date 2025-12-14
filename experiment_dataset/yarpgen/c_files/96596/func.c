/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96596
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) -412583184);
            var_10 = ((/* implicit */unsigned int) ((int) (!((!(((/* implicit */_Bool) 3878193954U)))))));
            var_11 += ((/* implicit */unsigned char) ((min((max((var_4), (var_1))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (max((((/* implicit */unsigned int) var_0)), (416773342U))))))));
        }
        var_12 = max((var_3), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_5) < (3878193954U))))) == (((416773341U) << (((/* implicit */int) (_Bool)1))))))));
        var_13 |= min((((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (var_6)))) ? (((/* implicit */unsigned int) 1974943893)) : (((((/* implicit */_Bool) var_4)) ? (3878193957U) : (((/* implicit */unsigned int) var_8)))))), (((/* implicit */unsigned int) 0)));
    }
    var_14 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (var_5)))), (((((/* implicit */_Bool) (short)-26518)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5))) ^ (((18014398241046528ULL) / (18428729675468505088ULL)))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            {
                arr_14 [i_2] = ((/* implicit */int) var_3);
                var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((short) (unsigned char)7))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58085))) + (var_5)))));
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (int i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            {
                                arr_24 [i_2] [i_6] [i_3] [3] [i_2] [i_5] [i_6] = ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (var_0))))))), (((unsigned short) var_3))));
                                arr_25 [i_6] [i_3] [i_3] [i_3] [i_6] [i_3] [i_3] = ((/* implicit */int) max((max(((~(var_2))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) -3651655367509191802LL)) : (var_4))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)10)))))));
                                var_16 -= ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) max(((unsigned char)6), (((/* implicit */unsigned char) (signed char)56)))))));
}
