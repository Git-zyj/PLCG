/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77700
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [10LL] [i_0] = ((/* implicit */unsigned char) 6323042390669826944LL);
                    var_11 = ((/* implicit */long long int) 4940678207807306463ULL);
                    arr_11 [i_1] = ((/* implicit */unsigned char) arr_6 [i_0] [i_2]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_12 = var_3;
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_3])) ^ (var_6))))) << (((min((((/* implicit */long long int) (short)5685)), (arr_1 [i_0]))) - (5664LL)))));
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_6)) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_1] [i_1] [i_0])))))));
                    }
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-5686)), (15094337607888549839ULL)))) && ((!(((/* implicit */_Bool) 12168093119148292621ULL))))));
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max(((unsigned char)134), (((unsigned char) (+(((/* implicit */int) var_2))))))))));
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((arr_7 [i_2]) ? (3352406465821001765ULL) : (arr_16 [i_0] [i_0] [i_0] [i_4]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) : (((/* implicit */int) arr_5 [i_0] [i_0])))))));
                        var_17 = ((((/* implicit */_Bool) (unsigned short)32515)) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)5710))))), (7863904464478184266ULL))) : (3352406465821001777ULL));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_0);
}
