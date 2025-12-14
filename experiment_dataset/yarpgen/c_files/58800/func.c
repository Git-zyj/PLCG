/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58800
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) (short)18260)), (var_4)));
                var_14 = ((var_9) ? (((/* implicit */int) ((((var_4) * (((/* implicit */int) var_9)))) >= (((/* implicit */int) (unsigned short)18400))))) : (max(((-(var_8))), (((var_1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)18270)))))));
            }
        } 
    } 
    var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)18400)) ? (((/* implicit */int) ((unsigned short) var_2))) : (((((/* implicit */int) var_10)) ^ (((((/* implicit */_Bool) (signed char)7)) ? (var_8) : (var_4)))))));
    var_16 = ((/* implicit */unsigned char) min((min((((/* implicit */int) (unsigned short)35203)), (((var_9) ? (var_0) : (((/* implicit */int) (short)18260)))))), (((/* implicit */int) (short)-1))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */int) (!(((_Bool) (short)27))));
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((428103008647232104ULL) >> (((((/* implicit */int) (unsigned short)47136)) - (47136))))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) ((var_1) ? (((/* implicit */int) (short)-18261)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_2)))) ? (-1618770663) : ((-(((/* implicit */int) var_5))))))));
                }
                arr_19 [i_2] [2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)11042)) * ((-(((/* implicit */int) ((unsigned short) (unsigned short)14163)))))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */int) (short)8)) % (((/* implicit */int) ((signed char) max((arr_15 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) (short)16150))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (unsigned char)177);
}
