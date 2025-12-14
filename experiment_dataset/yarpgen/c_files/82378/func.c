/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82378
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) (-((~(arr_2 [i_0])))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) ((arr_2 [i_0]) >= (((1577420306) << ((((+(((/* implicit */int) (_Bool)1)))) - (1)))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                arr_10 [i_0] [i_1] [i_0] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */short) (((+(502972863))) > (((((/* implicit */int) (_Bool)1)) << (((arr_7 [i_0]) + (1414077367)))))))) : (((/* implicit */short) (((+(502972863))) > (((((/* implicit */int) (_Bool)1)) << (((((arr_7 [i_0]) - (1414077367))) - (390839102))))))));
                var_17 = ((/* implicit */long long int) (-((+(arr_0 [i_0] [i_0])))));
            }
            for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                var_18 += ((/* implicit */int) (short)-14884);
                arr_13 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) 2849985044U);
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (long long int i_5 = 3; i_5 < 18; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (min((6758316849503999371ULL), (((/* implicit */unsigned long long int) (unsigned char)251))))))));
                            arr_20 [i_4] [i_4] [i_0] [20U] [i_0] = max((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0])) == (((/* implicit */int) var_3))))), ((~(1577420320))));
                            arr_21 [i_0] [i_0] [(short)14] = ((/* implicit */unsigned long long int) ((int) arr_9 [i_3] [i_5 - 1] [i_5 - 1] [i_0]));
                        }
                    } 
                } 
            }
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) 11688427224205552218ULL)) ? (3551754938503879472ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1986229998)) ? (((/* implicit */int) arr_3 [16LL])) : (-2097152)))))), (((/* implicit */unsigned long long int) (unsigned char)246)))))));
        }
        for (short i_6 = 3; i_6 < 19; i_6 += 2) 
        {
            arr_25 [i_0] [(short)1] = ((/* implicit */int) ((((/* implicit */int) arr_9 [i_6 - 3] [i_6] [i_0] [i_0])) != (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)14884)) : (-418110458)))))));
            var_21 = ((/* implicit */unsigned int) (-(arr_19 [(_Bool)1] [(_Bool)1] [i_0] [i_6] [i_6])));
            var_22 = ((/* implicit */unsigned char) (((+(((((/* implicit */unsigned int) var_5)) + (2201306055U))))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) >> (((/* implicit */int) arr_22 [i_0] [(unsigned short)6] [i_6 - 2])))))));
            var_23 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1))))), (((((/* implicit */_Bool) var_12)) ? (11688427224205552220ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
        }
    }
    var_24 += ((/* implicit */unsigned int) var_13);
    var_25 = ((/* implicit */_Bool) max((var_4), (var_4)));
}
