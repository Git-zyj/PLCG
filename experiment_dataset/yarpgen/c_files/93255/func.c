/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93255
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
    var_12 = ((/* implicit */long long int) ((unsigned short) max(((!(var_4))), (var_6))));
    var_13 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) (unsigned char)0))))));
                arr_5 [(unsigned short)11] = 2589574678U;
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? ((~(((/* implicit */int) var_4)))) : (((((/* implicit */int) arr_9 [i_0] [i_0] [i_2])) | (2137199526)))))) ^ ((~((~(var_3)))))));
                    var_15 = ((/* implicit */unsigned char) arr_2 [(unsigned char)3]);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), ((+(((18446744073709551613ULL) >> (((((((/* implicit */_Bool) 1252748460U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1023))))) - (7023173226872371828LL)))))))));
                    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1252748476U))))) <= (((/* implicit */int) (!((_Bool)0))))))), (1252748460U)));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
    var_19 = 12283929229175322150ULL;
}
