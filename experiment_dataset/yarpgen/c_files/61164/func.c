/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61164
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) (((~(((((/* implicit */_Bool) (short)-8150)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50517))))))) != (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((unsigned long long int) min(((~(((/* implicit */int) (unsigned short)50517)))), (((/* implicit */int) (unsigned short)65535))))))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)15018), ((unsigned short)50517)))) && (((/* implicit */_Bool) ((long long int) (unsigned short)26173)))))) | (((/* implicit */int) (unsigned short)15017)))))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)50521))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (unsigned short)50518)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15017))) : (arr_2 [i_2] [i_2]))))))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((arr_6 [i_0]) ? (arr_2 [i_0] [i_2]) : (((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)15014)) / (((/* implicit */int) arr_7 [i_1] [i_1])))), (((/* implicit */int) (unsigned short)15017))))))))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (((-(((/* implicit */int) (_Bool)1)))) > ((~(((/* implicit */int) (unsigned char)144)))))))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */unsigned char) ((max((var_1), (((/* implicit */unsigned long long int) max((262143U), (((/* implicit */unsigned int) (unsigned char)202))))))) == (((/* implicit */unsigned long long int) ((long long int) (unsigned short)15023)))));
                arr_12 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)36827)) >> (((((/* implicit */int) (unsigned short)50521)) - (50501)))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (-(var_8)));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */signed char) var_14)), ((signed char)20)))) + (((/* implicit */int) (unsigned short)15019))))) / (6117524898937515337ULL)));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50519))) % (((min((((/* implicit */unsigned long long int) (unsigned short)15017)), (var_8))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13)))))))));
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28709)) ^ (((/* implicit */int) (unsigned short)50518))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)42102)) >> (((max((((/* implicit */unsigned long long int) var_13)), (var_0))) - (11347660877734222114ULL)))))) : (var_1)));
}
