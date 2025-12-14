/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57890
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
    var_18 = ((/* implicit */long long int) ((33554431U) >> (((4261412853U) - (4261412841U)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) <= (16826556163462933282ULL))))) * (((min((arr_3 [i_1]), (((/* implicit */unsigned int) arr_6 [i_1])))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (arr_3 [i_0]))) - (6659U)))))));
                var_19 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_0])) < (((/* implicit */int) arr_4 [i_0] [i_1])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_20 ^= ((/* implicit */unsigned short) var_1);
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) : (var_10)))))) ? (((/* implicit */unsigned long long int) var_4)) : (min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) ^ (var_10))))))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */signed char) (+(-5257494515638964607LL)));
                }
                arr_11 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) == (((/* implicit */int) arr_5 [i_0] [i_1]))))), ((~(((/* implicit */int) arr_6 [i_1])))))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (arr_3 [i_0])));
            }
        } 
    } 
    var_23 = var_4;
    var_24 = min(((unsigned char)108), ((unsigned char)0));
}
