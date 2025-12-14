/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83535
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
    var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : ((-(((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 *= ((((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 2] [i_0 - 2])))) ^ (((((/* implicit */int) arr_5 [i_0 - 2] [i_0 + 1] [i_0 + 1])) - (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 1] [i_0 - 1])))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_3] [i_3] [i_2] [i_0] [i_0]))) <= ((~((((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)229)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [14U] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)202))))) : (((/* implicit */int) arr_13 [i_0 + 1] [i_1] [i_2] [i_1] [(unsigned short)1])))))));
                        }
                        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) var_5)))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((short) ((arr_13 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_2]) ? (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0 - 1] [i_0] [i_1])) : (0ULL))));
                        var_20 &= (_Bool)1;
                        var_21 -= ((/* implicit */int) ((unsigned long long int) (_Bool)1));
                    }
                    for (int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 1])) : (((/* implicit */int) var_2))))) / (arr_4 [i_0 - 1])));
                        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 15879591855801270374ULL)) ? (15879591855801270379ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? ((+(var_0))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_3 [i_1])))))));
                        var_24 |= ((/* implicit */unsigned char) (_Bool)1);
                        var_25 = ((/* implicit */_Bool) ((min((arr_2 [i_0 - 1] [i_0 - 1]), (arr_2 [i_0 - 2] [i_1]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))))));
                    }
                    var_26 = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-60))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 828310809983972444LL)) ? (764054917) : (1764816967)))));
                }
            } 
        } 
    } 
}
