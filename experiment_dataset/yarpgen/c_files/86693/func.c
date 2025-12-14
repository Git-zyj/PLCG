/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86693
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
    var_14 = ((/* implicit */unsigned long long int) var_4);
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-9223372036854775800LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (-946507637508790391LL)))) : (var_12)))) ? ((+(((/* implicit */int) ((29360128U) != (1759007323U)))))) : (((/* implicit */int) (_Bool)1))));
    var_16 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = var_1;
                                var_18 = ((/* implicit */unsigned int) -5229060953710169612LL);
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_1]), (((((/* implicit */_Bool) arr_7 [i_0] [7] [i_0] [i_0])) ? (var_12) : (arr_9 [5LL])))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) 7U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 13433692034188413096ULL)) ? (4268974909U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (short i_6 = 1; i_6 < 14; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_6 [i_0])))) && (arr_8 [i_1] [i_1] [i_5] [i_1] [i_0])))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)23753))))) ? (((/* implicit */int) arr_2 [i_6])) : (((/* implicit */int) var_1)))) - (16580)))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)8191)) << (((((var_4) + (8184899674233374278LL))) - (7LL))))))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_8 [i_0] [i_1] [i_1] [i_1] [i_6 + 2]) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
